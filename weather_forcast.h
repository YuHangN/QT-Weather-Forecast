#ifndef WEATHER_FORCAST_H
#define WEATHER_FORCAST_H

#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QMouseEvent>
#include <QPoint>
#include <QLabel>
#include <QtNetwork/QNetworkAccessManager>
#include <weatherTool.h>
#include <QMessageBox>
#include <QNetworkReply>

QT_BEGIN_NAMESPACE
namespace Ui {
class Weather_forcast;
}
QT_END_NAMESPACE

class Weather_forcast : public QWidget
{
    Q_OBJECT

public slots:
    void replyFinished(QNetworkReply* reply);

public:
    Weather_forcast(QWidget* parent = nullptr);
    void getWeatherInfo(QNetworkAccessManager* manager);
    void parseJson(QByteArray& array);
    ~Weather_forcast();

protected:
    void contextMenuEvent(QContextMenuEvent *event);
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);

private:
    Ui::Weather_forcast *ui;
    // 鼠标右键出现菜单
    QMenu* right_clicked;
    // 菜单里的一个QAction即退出
    QAction* exit;
    // 鼠标点击位置和窗口左上角偏移量
    QPoint mPos;
    QList<QLabel*> forecast_week_list; //星期
    QList<QLabel*> forecast_date_list; //日期
    QList<QLabel*> forecast_aqi_list; //天气指数
    QList<QLabel*> forecast_type_list; //天气
    QList<QLabel*> forecast_typeIco_list; //天气图标
    QList<QLabel*> forecast_high_list; //高温
    QList<QLabel*> forecast_low_list; //低温

    QString url;
    QString city;
    QString cityTemp;
    WeatherTool tool;
    QNetworkAccessManager* manager;

};
#endif // WEATHER_FORCAST_H
