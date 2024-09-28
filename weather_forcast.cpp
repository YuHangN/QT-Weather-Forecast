#include "weather_forcast.h"
#include "ui_weather_forcast.h"

Weather_forcast::Weather_forcast(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Weather_forcast)
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::FramelessWindowHint);

    // 添加一个右键菜单
    this->right_clicked = new QMenu(this);
    this->exit = new QAction;
    this->exit->setText("Exit");
    this->exit->setIcon(QIcon(":/windowsIcons/Weather\\icons/close.ico"));
    this->right_clicked->addAction(this->exit);
    connect(this->exit, &QAction::triggered, this, []() {
        qApp->exit();
    });

    // 控件对象
    forecast_week_list << ui->week_0 << ui->week_1 << ui->week_2 <<ui->week_3 << ui->week_4 << ui->week_5;
    forecast_date_list << ui->date_0 << ui->date_1 << ui->date_2 <<ui->date_3 << ui->date_4 << ui->date_5;
    forecast_aqi_list << ui->quality_0 << ui->quality_1 << ui->quality_2 <<ui->quality_3 << ui->quality_4 << ui->quality_5;
    forecast_type_list << ui->weather_0 << ui->weather_1 << ui->weather_2 <<ui->weather_3 << ui->weather_4 << ui->weather_5;
    forecast_high_list << ui->HTemperature_0 << ui->HTemperature_1 << ui->HTemperature_2 << ui->HTemperature_3 << ui->HTemperature_4 << ui->HTemperature_5;
    forecast_low_list << ui->LTemperature_0 << ui->LTemperature_1 << ui->LTemperature_2 << ui->LTemperature_3 << ui->LTemperature_4 << ui->LTemperature_5;

    // 设置date和week的样式
    for (int i = 0; i < 6; i++) {
        forecast_date_list[i]->setStyleSheet("background-color: rgba(0, 255, 255, 100);");
        forecast_week_list[i]->setStyleSheet("background-color: rgba(0, 255, 255, 100);");
    }
    // 设置搜索框样式
    ui->cityLineEdit->setStyleSheet("QLineEdit {border: 1px solid gray; border-radius: 4px; background:argb(47, 47, 47, 130); color:rgb(255, 255, 255);} QLineEdit:hover{border-color:rgb(101, 255, 106);}");

    // 请求天气信息
    this->url = "http://t.weather.itboy.net/api/weather/city/";
    this->city = u8"北京";
    this->cityTemp = this->city;
    this->manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    getWeatherInfo(manager);
}

void Weather_forcast::contextMenuEvent(QContextMenuEvent* event) {
    this->right_clicked->exec(QCursor::pos());
    event->accept();
}

Weather_forcast::~Weather_forcast() {
    delete ui;
}

// 获得当前鼠标位置相对于当前窗口左上角的偏移量
void Weather_forcast::mousePressEvent(QMouseEvent* event) {
    this->mPos = event->globalPosition().toPoint() - this->pos(); // pos()获得当前窗口相对于屏幕左上角
    // globalPosition是globalPos的升级版，返回的是QPointF，获得当前鼠标位置，相对于屏幕左上角，更加精确，可以通过toPoint()来进行转换。
}

// 根据鼠标的移动位置 移动窗口
void Weather_forcast::mouseMoveEvent(QMouseEvent* event) {
    this->move(event->globalPosition().toPoint() - mPos);
}

void Weather_forcast::getWeatherInfo(QNetworkAccessManager* manager) {
    // 得到城市的代码
    QString citycode = this->tool[this->city];
    // 如果城市的代码是00000，代表查找失败
    if (citycode == "000000000") {
        QMessageBox::warning(this, u8"错误" , u8"查询不到该城市！" + this->city, QMessageBox::Ok);
        return;
    }
    // 如果查找成功，将代码加到连接后面来查找具体的城市信息
    QUrl jsonUrl = (this->url + citycode);
    manager->get(QNetworkRequest(jsonUrl));
}

void Weather_forcast::parseJson(QByteArray& array) {
    QJsonParseError error;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(array, &error);
    // 如果parse发生了错误
    if (error.error != QJsonParseError::NoError) {
        qDebug() << "Parse error!";
        return;
    }
    // 得到整个object
    QJsonObject jsObj = jsonDoc.object();
    QString message = jsObj.value("message").toString();

    if (message.contains("success")==false)
    {
        QMessageBox::information(this, tr("The information of Json_desc"), u8"天气：城市错误！", QMessageBox::Ok );
        city = cityTemp;
        return;
    }
    this->today = jsObj;
    // 首先解析yesterday数据
    QJsonObject data = jsObj.value("data").toObject();
    this->forecast[0] = data.value("yesterday").toObject();
    qDebug() << this->forecast[0].aqi;
    QJsonArray forecastArray = data.value("forecast").toArray();
    for (int i = 1; i < 6; i++) {
        forecast[i] = forecastArray.at(i - 1).toObject();
    }
    setLabelContent();
    paintSunRiseSet();
}

void Weather_forcast::setLabelContent() {
    ui->dateLB->setText(this->today.date);
    ui->todayTemper->setText(this->today.wendu);
    ui->cityLabel->setText(this->today.city);
    ui->todayTypeLabel->setText(this->today.type);
    ui->huminityAmountLabel->setText(this->today.shidu);
    ui->PMAmountLabel->setText(this->today.pm25);
    ui->windDirectionValue->setText(this->today.fx);
    ui->windPowerAmountLabel->setText(this->today.fl);
    ui->feverIndexDescription->setText(this->today.ganmao);

    // 更新六天预测数据
    for (int i = 0; i < 6; i++) {
        forecast_week_list[i]->setText(forecast[i].week);
        forecast_date_list[i]->setText(forecast[i].date);
        forecast_type_list[i]->setText(forecast[i].type);
        forecast_high_list[i]->setText(forecast[i].high.split(" ").at(1));
        forecast_low_list[i]->setText(forecast[i].low.split(" ").at(1));

        // 如果空气质量处于0-50，则为优质
        if (forecast[i].aqi.toInt() >= 0 && forecast[i].aqi.toInt() <= 50)
        {
            forecast_aqi_list[i]->setText(u8"优质");
            forecast_aqi_list[i]->setStyleSheet("color: rgb(0, 255, 0);");
        }
        // 如果出于50-100
        else if (forecast[i].aqi.toInt() > 50 && forecast[i].aqi.toInt() <= 100)
        {
            forecast_aqi_list[i]->setText(u8"良好");
            forecast_aqi_list[i]->setStyleSheet("color: rgb(255, 255, 0);");
        }
        // 如果出于100-150
        else if (forecast[i].aqi.toInt() > 100 && forecast[i].aqi.toInt() <= 150)
        {
            forecast_aqi_list[i]->setText(u8"轻度污染");
            forecast_aqi_list[i]->setStyleSheet("color: rgb(255, 170, 0);");
        }
        // 150-200
        else if (forecast[i].aqi.toInt() > 150 && forecast[i].aqi.toInt() <= 200)
        {
            forecast_aqi_list[i]->setText(u8"重度污染");
            forecast_aqi_list[i]->setStyleSheet("color: rgb(255, 0, 0);");
        }
        // 200-250
        else
        {
            forecast_aqi_list[i]->setText(u8"严重污染");
            forecast_aqi_list[i]->setStyleSheet("color: rgb(170, 0, 0);");
        }
        ui->week_0->setText(u8"昨天");
        ui->week_1->setText(u8"今天");
    }
}

void Weather_forcast::paintSunRiseSet() {
    QPainter painter(ui->sunRiseSetLabel);
    // 反锯齿
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.save();
    QPen pen = painter.pen();
    pen.setWidthF(0.5);
    pen.setColor(Qt::yellow);
    painter.setPen(pen);
    painter.drawLine(sun[0], sun[1]);
}

void Weather_forcast::replyFinished(QNetworkReply* reply) {
    QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    // 如果返回值是200或者检查有问题
    if (reply->error() != QNetworkReply::NoError || status_code != 200) {
        QMessageBox::warning(this, u8"错误", u8"请检查网络连接！", QMessageBox::Ok);
        return;
    }
    QByteArray bytes = reply->readAll();
    qDebug() << "Parsing now!";
    parseJson(bytes);
}

void Weather_forcast::on_searchButton_clicked()
{
    this->cityTemp = city;
    this->city = ui->cityLineEdit->text();
    getWeatherInfo(manager);
}


void Weather_forcast::on_refreshButton_clicked()
{
    getWeatherInfo(manager);
}

