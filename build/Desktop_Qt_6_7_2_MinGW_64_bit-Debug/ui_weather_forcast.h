/********************************************************************************
** Form generated from reading UI file 'weather_forcast.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_FORCAST_H
#define UI_WEATHER_FORCAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Weather_forcast
{
public:
    QWidget *widget;
    QLineEdit *cityLineEdit;
    QLabel *dateLB;
    QFrame *hLine_1;
    QFrame *hLine_2;
    QFrame *hLine_3;
    QLabel *titleLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *PMLabel;
    QLabel *label_7;
    QLabel *windPowerLabel;
    QLabel *windPowerAmountLabel;
    QLabel *PMAmountLabel;
    QLabel *windDireactionLabel;
    QLabel *humidityLabel;
    QLabel *huminityAmountLabel;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QLabel *HTemperature_4;
    QLabel *HTemperature_0;
    QLabel *quality_0;
    QLabel *HTemperature_1;
    QLabel *LTemperature_5;
    QLabel *date_5;
    QLabel *week_4;
    QLabel *weatherIcon_2;
    QLabel *weatherIcon_0;
    QLabel *date_1;
    QLabel *weatherIcon_5;
    QLabel *weatherIcon_4;
    QLabel *weather_4;
    QLabel *week_3;
    QLabel *LTemperature_0;
    QLabel *weatherIcon_3;
    QLabel *quality_1;
    QLabel *date_2;
    QLabel *LTemperature_2;
    QLabel *week_1;
    QLabel *weather_5;
    QLabel *weather_1;
    QLabel *date_3;
    QLabel *LTemperature_4;
    QLabel *quality_3;
    QLabel *date_0;
    QLabel *quality_4;
    QLabel *week_2;
    QLabel *LTemperature_1;
    QLabel *date_4;
    QLabel *week_5;
    QLabel *quality_5;
    QLabel *week_0;
    QLabel *weather_2;
    QLabel *weather_0;
    QLabel *HTemperature_2;
    QLabel *weatherIcon_1;
    QLabel *weather_3;
    QLabel *LTemperature_3;
    QLabel *HTemperature_3;
    QLabel *HTemperature_5;
    QLabel *quality_2;
    QLabel *temperatureLineBar;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *leaf;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_21;
    QFrame *line;
    QLabel *feverIndex;
    QLabel *feverIndexDescription;
    QToolButton *searchButton;
    QToolButton *refreshButton;
    QLabel *sunRiseSetLabel;

    void setupUi(QWidget *Weather_forcast)
    {
        if (Weather_forcast->objectName().isEmpty())
            Weather_forcast->setObjectName("Weather_forcast");
        Weather_forcast->resize(800, 450);
        widget = new QWidget(Weather_forcast);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 800, 450));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        widget->setFont(font);
        widget->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"border-image: url(:/backgroundImages/Weather/images/weaUI.png);\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"Line {\n"
"	background-color: rgb(29, 125, 130);\n"
"}"));
        cityLineEdit = new QLineEdit(widget);
        cityLineEdit->setObjectName("cityLineEdit");
        cityLineEdit->setGeometry(QRect(586, 10, 170, 30));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        cityLineEdit->setFont(font1);
        cityLineEdit->setAutoFillBackground(false);
        cityLineEdit->setStyleSheet(QString::fromUtf8(""));
        dateLB = new QLabel(widget);
        dateLB->setObjectName("dateLB");
        dateLB->setGeometry(QRect(319, 10, 141, 30));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(false);
        dateLB->setFont(font2);
        dateLB->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        hLine_1 = new QFrame(widget);
        hLine_1->setObjectName("hLine_1");
        hLine_1->setGeometry(QRect(10, 50, 780, 1));
        hLine_1->setStyleSheet(QString::fromUtf8(""));
        hLine_1->setFrameShape(QFrame::Shape::HLine);
        hLine_1->setFrameShadow(QFrame::Shadow::Sunken);
        hLine_2 = new QFrame(widget);
        hLine_2->setObjectName("hLine_2");
        hLine_2->setGeometry(QRect(10, 180, 330, 1));
        hLine_2->setStyleSheet(QString::fromUtf8(""));
        hLine_2->setFrameShape(QFrame::Shape::HLine);
        hLine_2->setFrameShadow(QFrame::Shadow::Sunken);
        hLine_3 = new QFrame(widget);
        hLine_3->setObjectName("hLine_3");
        hLine_3->setGeometry(QRect(10, 315, 330, 1));
        hLine_3->setStyleSheet(QString::fromUtf8(""));
        hLine_3->setFrameShape(QFrame::Shape::HLine);
        hLine_3->setFrameShadow(QFrame::Shadow::Sunken);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setEnabled(false);
        titleLabel->setGeometry(QRect(50, 10, 110, 30));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(false);
        titleLabel->setFont(font3);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#label_4 {\n"
"	color: rgb(85, 255, 0);\n"
"}"));
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 189, 321, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        PMLabel = new QLabel(gridLayoutWidget);
        PMLabel->setObjectName("PMLabel");
        QFont font4;
        font4.setPointSize(11);
        PMLabel->setFont(font4);
        PMLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        PMLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(PMLabel, 1, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_7, 2, 1, 1, 2);

        windPowerLabel = new QLabel(gridLayoutWidget);
        windPowerLabel->setObjectName("windPowerLabel");
        windPowerLabel->setFont(font4);
        windPowerLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        windPowerLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(windPowerLabel, 3, 0, 1, 1);

        windPowerAmountLabel = new QLabel(gridLayoutWidget);
        windPowerAmountLabel->setObjectName("windPowerAmountLabel");
        windPowerAmountLabel->setFont(font4);
        windPowerAmountLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        windPowerAmountLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(windPowerAmountLabel, 3, 1, 1, 2);

        PMAmountLabel = new QLabel(gridLayoutWidget);
        PMAmountLabel->setObjectName("PMAmountLabel");
        PMAmountLabel->setFont(font4);
        PMAmountLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        PMAmountLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(PMAmountLabel, 1, 1, 1, 2);

        windDireactionLabel = new QLabel(gridLayoutWidget);
        windDireactionLabel->setObjectName("windDireactionLabel");
        windDireactionLabel->setFont(font4);
        windDireactionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        windDireactionLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(windDireactionLabel, 2, 0, 1, 1);

        humidityLabel = new QLabel(gridLayoutWidget);
        humidityLabel->setObjectName("humidityLabel");
        humidityLabel->setFont(font4);
        humidityLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        humidityLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(humidityLabel, 0, 0, 1, 1);

        huminityAmountLabel = new QLabel(gridLayoutWidget);
        huminityAmountLabel->setObjectName("huminityAmountLabel");
        huminityAmountLabel->setFont(font4);
        huminityAmountLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        huminityAmountLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(huminityAmountLabel, 0, 1, 1, 2);

        gridLayoutWidget_3 = new QWidget(widget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(340, 60, 461, 381));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        HTemperature_4 = new QLabel(gridLayoutWidget_3);
        HTemperature_4->setObjectName("HTemperature_4");
        HTemperature_4->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        HTemperature_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(HTemperature_4, 6, 4, 1, 1);

        HTemperature_0 = new QLabel(gridLayoutWidget_3);
        HTemperature_0->setObjectName("HTemperature_0");
        HTemperature_0->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        HTemperature_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(HTemperature_0, 6, 0, 1, 1);

        quality_0 = new QLabel(gridLayoutWidget_3);
        quality_0->setObjectName("quality_0");
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setKerning(false);
        quality_0->setFont(font5);
        quality_0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        quality_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(quality_0, 2, 0, 1, 1);

        HTemperature_1 = new QLabel(gridLayoutWidget_3);
        HTemperature_1->setObjectName("HTemperature_1");
        HTemperature_1->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        HTemperature_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(HTemperature_1, 6, 1, 1, 1);

        LTemperature_5 = new QLabel(gridLayoutWidget_3);
        LTemperature_5->setObjectName("LTemperature_5");
        LTemperature_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        LTemperature_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(LTemperature_5, 11, 5, 1, 1);

        date_5 = new QLabel(gridLayoutWidget_3);
        date_5->setObjectName("date_5");
        date_5->setFont(font);
        date_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        date_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(date_5, 1, 5, 1, 1);

        week_4 = new QLabel(gridLayoutWidget_3);
        week_4->setObjectName("week_4");
        QFont font6;
        font6.setBold(true);
        week_4->setFont(font6);
        week_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        week_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(week_4, 0, 4, 1, 1);

        weatherIcon_2 = new QLabel(gridLayoutWidget_3);
        weatherIcon_2->setObjectName("weatherIcon_2");
        weatherIcon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        weatherIcon_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weatherIcon_2, 4, 2, 2, 1);

        weatherIcon_0 = new QLabel(gridLayoutWidget_3);
        weatherIcon_0->setObjectName("weatherIcon_0");
        weatherIcon_0->setAutoFillBackground(false);
        weatherIcon_0->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        weatherIcon_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weatherIcon_0, 4, 0, 2, 1);

        date_1 = new QLabel(gridLayoutWidget_3);
        date_1->setObjectName("date_1");
        date_1->setFont(font);
        date_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        date_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(date_1, 1, 1, 1, 1);

        weatherIcon_5 = new QLabel(gridLayoutWidget_3);
        weatherIcon_5->setObjectName("weatherIcon_5");
        weatherIcon_5->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        weatherIcon_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weatherIcon_5, 4, 5, 2, 1);

        weatherIcon_4 = new QLabel(gridLayoutWidget_3);
        weatherIcon_4->setObjectName("weatherIcon_4");
        weatherIcon_4->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        weatherIcon_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weatherIcon_4, 4, 4, 2, 1);

        weather_4 = new QLabel(gridLayoutWidget_3);
        weather_4->setObjectName("weather_4");
        weather_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        weather_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weather_4, 3, 4, 1, 1);

        week_3 = new QLabel(gridLayoutWidget_3);
        week_3->setObjectName("week_3");
        week_3->setFont(font6);
        week_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        week_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(week_3, 0, 3, 1, 1);

        LTemperature_0 = new QLabel(gridLayoutWidget_3);
        LTemperature_0->setObjectName("LTemperature_0");
        LTemperature_0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        LTemperature_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(LTemperature_0, 11, 0, 1, 1);

        weatherIcon_3 = new QLabel(gridLayoutWidget_3);
        weatherIcon_3->setObjectName("weatherIcon_3");
        weatherIcon_3->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        weatherIcon_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weatherIcon_3, 4, 3, 2, 1);

        quality_1 = new QLabel(gridLayoutWidget_3);
        quality_1->setObjectName("quality_1");
        QFont font7;
        font7.setPointSize(11);
        font7.setBold(true);
        quality_1->setFont(font7);
        quality_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        quality_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(quality_1, 2, 1, 1, 1);

        date_2 = new QLabel(gridLayoutWidget_3);
        date_2->setObjectName("date_2");
        date_2->setFont(font);
        date_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        date_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(date_2, 1, 2, 1, 1);

        LTemperature_2 = new QLabel(gridLayoutWidget_3);
        LTemperature_2->setObjectName("LTemperature_2");
        LTemperature_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        LTemperature_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(LTemperature_2, 11, 2, 1, 1);

        week_1 = new QLabel(gridLayoutWidget_3);
        week_1->setObjectName("week_1");
        week_1->setFont(font6);
        week_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        week_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(week_1, 0, 1, 1, 1);

        weather_5 = new QLabel(gridLayoutWidget_3);
        weather_5->setObjectName("weather_5");
        weather_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        weather_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weather_5, 3, 5, 1, 1);

        weather_1 = new QLabel(gridLayoutWidget_3);
        weather_1->setObjectName("weather_1");
        weather_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        weather_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weather_1, 3, 1, 1, 1);

        date_3 = new QLabel(gridLayoutWidget_3);
        date_3->setObjectName("date_3");
        date_3->setFont(font);
        date_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        date_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(date_3, 1, 3, 1, 1);

        LTemperature_4 = new QLabel(gridLayoutWidget_3);
        LTemperature_4->setObjectName("LTemperature_4");
        LTemperature_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        LTemperature_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(LTemperature_4, 11, 4, 1, 1);

        quality_3 = new QLabel(gridLayoutWidget_3);
        quality_3->setObjectName("quality_3");
        quality_3->setFont(font7);
        quality_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        quality_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(quality_3, 2, 3, 1, 1);

        date_0 = new QLabel(gridLayoutWidget_3);
        date_0->setObjectName("date_0");
        date_0->setFont(font);
        date_0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        date_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(date_0, 1, 0, 1, 1);

        quality_4 = new QLabel(gridLayoutWidget_3);
        quality_4->setObjectName("quality_4");
        quality_4->setFont(font7);
        quality_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        quality_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(quality_4, 2, 4, 1, 1);

        week_2 = new QLabel(gridLayoutWidget_3);
        week_2->setObjectName("week_2");
        week_2->setFont(font6);
        week_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        week_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(week_2, 0, 2, 1, 1);

        LTemperature_1 = new QLabel(gridLayoutWidget_3);
        LTemperature_1->setObjectName("LTemperature_1");
        LTemperature_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        LTemperature_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(LTemperature_1, 11, 1, 1, 1);

        date_4 = new QLabel(gridLayoutWidget_3);
        date_4->setObjectName("date_4");
        date_4->setFont(font);
        date_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        date_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(date_4, 1, 4, 1, 1);

        week_5 = new QLabel(gridLayoutWidget_3);
        week_5->setObjectName("week_5");
        week_5->setFont(font6);
        week_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        week_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(week_5, 0, 5, 1, 1);

        quality_5 = new QLabel(gridLayoutWidget_3);
        quality_5->setObjectName("quality_5");
        quality_5->setFont(font7);
        quality_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        quality_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(quality_5, 2, 5, 1, 1);

        week_0 = new QLabel(gridLayoutWidget_3);
        week_0->setObjectName("week_0");
        week_0->setFont(font);
        week_0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        week_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(week_0, 0, 0, 1, 1);

        weather_2 = new QLabel(gridLayoutWidget_3);
        weather_2->setObjectName("weather_2");
        weather_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        weather_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weather_2, 3, 2, 1, 1);

        weather_0 = new QLabel(gridLayoutWidget_3);
        weather_0->setObjectName("weather_0");
        weather_0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        weather_0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weather_0, 3, 0, 1, 1);

        HTemperature_2 = new QLabel(gridLayoutWidget_3);
        HTemperature_2->setObjectName("HTemperature_2");
        HTemperature_2->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        HTemperature_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(HTemperature_2, 6, 2, 1, 1);

        weatherIcon_1 = new QLabel(gridLayoutWidget_3);
        weatherIcon_1->setObjectName("weatherIcon_1");
        weatherIcon_1->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        weatherIcon_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weatherIcon_1, 4, 1, 2, 1);

        weather_3 = new QLabel(gridLayoutWidget_3);
        weather_3->setObjectName("weather_3");
        weather_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        weather_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(weather_3, 3, 3, 1, 1);

        LTemperature_3 = new QLabel(gridLayoutWidget_3);
        LTemperature_3->setObjectName("LTemperature_3");
        LTemperature_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        LTemperature_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(LTemperature_3, 11, 3, 1, 1);

        HTemperature_3 = new QLabel(gridLayoutWidget_3);
        HTemperature_3->setObjectName("HTemperature_3");
        HTemperature_3->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        HTemperature_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(HTemperature_3, 6, 3, 1, 1);

        HTemperature_5 = new QLabel(gridLayoutWidget_3);
        HTemperature_5->setObjectName("HTemperature_5");
        HTemperature_5->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        HTemperature_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(HTemperature_5, 6, 5, 1, 1);

        quality_2 = new QLabel(gridLayoutWidget_3);
        quality_2->setObjectName("quality_2");
        quality_2->setFont(font7);
        quality_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        quality_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(quality_2, 2, 2, 1, 1);

        temperatureLineBar = new QLabel(gridLayoutWidget_3);
        temperatureLineBar->setObjectName("temperatureLineBar");
        temperatureLineBar->setStyleSheet(QString::fromUtf8("background-color: rgba(108, 108, 108, 100);"));
        temperatureLineBar->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(temperatureLineBar, 7, 0, 4, 6);

        label_15 = new QLabel(widget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(90, 60, 170, 40));
        QFont font8;
        font8.setPointSize(18);
        font8.setBold(true);
        label_15->setFont(font8);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(70, 65, 51, 31));
        QFont font9;
        font9.setPointSize(14);
        font9.setBold(false);
        label_16->setFont(font9);
        label_16->setAutoFillBackground(false);
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgba(60, 60, 60, 0);\n"
"image: url(:/windowsIcons/Weather/icons/location.ico);\n"
""));
        leaf = new QLabel(widget);
        leaf->setObjectName("leaf");
        leaf->setGeometry(QRect(2, 63, 45, 25));
        leaf->setStyleSheet(QString::fromUtf8("image: url(:/windowsIcons/Weather/icons/leaf.ico);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(43, 64, 51, 21));
        label->setFont(font9);
        label->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 0);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 121, 71));
        QFont font10;
        font10.setPointSize(44);
        font10.setBold(false);
        label_2->setFont(font10);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 140, 81, 31));
        QFont font11;
        font11.setPointSize(12);
        font11.setBold(false);
        label_3->setFont(font11);
        label_21 = new QLabel(widget);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(220, 60, 120, 120));
        label_21->setStyleSheet(QString::fromUtf8("border-image: url(:/weatherIcons/day/Weather/weatherIcons/day/sunny.png);"));
        line = new QFrame(widget);
        line->setObjectName("line");
        line->setGeometry(QRect(139, 320, 3, 122));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        feverIndex = new QLabel(widget);
        feverIndex->setObjectName("feverIndex");
        feverIndex->setGeometry(QRect(4, 330, 31, 101));
        feverIndex->setFont(font1);
        feverIndex->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        feverIndex->setAlignment(Qt::AlignmentFlag::AlignCenter);
        feverIndexDescription = new QLabel(widget);
        feverIndexDescription->setObjectName("feverIndexDescription");
        feverIndexDescription->setGeometry(QRect(33, 325, 101, 115));
        feverIndexDescription->setStyleSheet(QString::fromUtf8("background-color: rgba(70, 70, 70, 100);"));
        feverIndexDescription->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        searchButton = new QToolButton(widget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(723, 11, 31, 29));
        searchButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        searchButton->setStyleSheet(QString::fromUtf8("border-image: url(:/windowsIcons/Weather/icons/search.ico);"));
        refreshButton = new QToolButton(widget);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setGeometry(QRect(760, 10, 31, 31));
        refreshButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        refreshButton->setStyleSheet(QString::fromUtf8("border-image: url(:/windowsIcons/Weather/icons/refresh.ico);"));
        sunRiseSetLabel = new QLabel(widget);
        sunRiseSetLabel->setObjectName("sunRiseSetLabel");
        sunRiseSetLabel->setGeometry(QRect(150, 320, 181, 121));

        retranslateUi(Weather_forcast);

        QMetaObject::connectSlotsByName(Weather_forcast);
    } // setupUi

    void retranslateUi(QWidget *Weather_forcast)
    {
        Weather_forcast->setWindowTitle(QCoreApplication::translate("Weather_forcast", "Weather_forcast", nullptr));
        cityLineEdit->setPlaceholderText(QCoreApplication::translate("Weather_forcast", "\345\234\260\345\214\272", nullptr));
        dateLB->setText(QCoreApplication::translate("Weather_forcast", "2024-09-21", nullptr));
        titleLabel->setText(QCoreApplication::translate("Weather_forcast", "\345\244\251\346\260\224\351\242\204\346\212\245", nullptr));
        PMLabel->setText(QCoreApplication::translate("Weather_forcast", "PM2.5", nullptr));
        label_7->setText(QCoreApplication::translate("Weather_forcast", "Northern", nullptr));
        windPowerLabel->setText(QCoreApplication::translate("Weather_forcast", "Wind Power", nullptr));
        windPowerAmountLabel->setText(QCoreApplication::translate("Weather_forcast", "Level 6", nullptr));
        PMAmountLabel->setText(QCoreApplication::translate("Weather_forcast", "26", nullptr));
        windDireactionLabel->setText(QCoreApplication::translate("Weather_forcast", "Wind Direction", nullptr));
        humidityLabel->setText(QCoreApplication::translate("Weather_forcast", "Humidity", nullptr));
        huminityAmountLabel->setText(QCoreApplication::translate("Weather_forcast", "50%", nullptr));
        HTemperature_4->setText(QString());
        HTemperature_0->setText(QString());
        quality_0->setText(QCoreApplication::translate("Weather_forcast", "\344\274\230\350\264\250", nullptr));
        HTemperature_1->setText(QString());
        LTemperature_5->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        date_5->setText(QCoreApplication::translate("Weather_forcast", "26", nullptr));
        week_4->setText(QCoreApplication::translate("Weather_forcast", "Wednesday", nullptr));
        weatherIcon_2->setText(QString());
        weatherIcon_0->setText(QString());
        date_1->setText(QCoreApplication::translate("Weather_forcast", "22", nullptr));
        weatherIcon_5->setText(QString());
        weatherIcon_4->setText(QString());
        weather_4->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        week_3->setText(QCoreApplication::translate("Weather_forcast", "Tuesday", nullptr));
        LTemperature_0->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        weatherIcon_3->setText(QString());
        quality_1->setText(QCoreApplication::translate("Weather_forcast", "\350\211\257\345\245\275", nullptr));
        date_2->setText(QCoreApplication::translate("Weather_forcast", "23", nullptr));
        LTemperature_2->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        week_1->setText(QCoreApplication::translate("Weather_forcast", "Today", nullptr));
        weather_5->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        weather_1->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        date_3->setText(QCoreApplication::translate("Weather_forcast", "24", nullptr));
        LTemperature_4->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        quality_3->setText(QCoreApplication::translate("Weather_forcast", "\350\275\273\345\272\246\346\261\241\346\237\223", nullptr));
        date_0->setText(QCoreApplication::translate("Weather_forcast", "21", nullptr));
        quality_4->setText(QCoreApplication::translate("Weather_forcast", "\344\270\255\345\272\246\346\261\241\346\237\223", nullptr));
        week_2->setText(QCoreApplication::translate("Weather_forcast", "Tomorrow", nullptr));
        LTemperature_1->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        date_4->setText(QCoreApplication::translate("Weather_forcast", "25", nullptr));
        week_5->setText(QCoreApplication::translate("Weather_forcast", "Thursday", nullptr));
        quality_5->setText(QCoreApplication::translate("Weather_forcast", "\351\207\215\345\272\246\346\261\241\346\237\223", nullptr));
        week_0->setText(QCoreApplication::translate("Weather_forcast", "Yesterday", nullptr));
        weather_2->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        weather_0->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        HTemperature_2->setText(QString());
        weatherIcon_1->setText(QString());
        weather_3->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        LTemperature_3->setText(QCoreApplication::translate("Weather_forcast", "TextLabel", nullptr));
        HTemperature_3->setText(QString());
        HTemperature_5->setText(QString());
        quality_2->setText(QCoreApplication::translate("Weather_forcast", "\350\211\257", nullptr));
        temperatureLineBar->setText(QString());
        label_15->setText(QCoreApplication::translate("Weather_forcast", "Edinburgh", nullptr));
        label_16->setText(QString());
        leaf->setText(QString());
        label->setText(QCoreApplication::translate("Weather_forcast", "\350\211\257", nullptr));
        label_2->setText(QCoreApplication::translate("Weather_forcast", "12\302\260", nullptr));
        label_3->setText(QCoreApplication::translate("Weather_forcast", "\346\231\264", nullptr));
        label_21->setText(QString());
        feverIndex->setText(QCoreApplication::translate("Weather_forcast", "<html><head/><body><p>\346\204\237<br/>\345\206\222<br/>\346\214\207<br/>\346\225\260</p></body></html>", nullptr));
        feverIndexDescription->setText(QString());
        searchButton->setText(QString());
        refreshButton->setText(QString());
        sunRiseSetLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Weather_forcast: public Ui_Weather_forcast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_FORCAST_H
