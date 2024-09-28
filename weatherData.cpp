#include "weatherData.h"

// 无参构造函数
Today::Today() {
    date = "0000-00-00";
    city = "null";
    fl = u8"无数据";
    fx = u8"无数据";
    ganmao = u8"无数据";
    notice = u8"无数据";
    pm25 = u8"无数据";
    quality = u8"无数据";
    shidu = u8"无数据";
    sunrise = "00:00";
    sunset = "00:00";
    wendu = "null";
    type = u8"无数据";
}

// 直接通过JsonObject构建今日。
Today& Today::operator=(const QJsonObject& obj) {
    QString date = obj.value("date").toString();
    // 把得到的日期转换成想要的日期
    this->date = QDate::fromString(date, "yyyyMMdd").toString("yyyy-MM-dd");
    this->city = obj.value("cityInfo").toObject().value("city").toString();

    // 解析data
    QJsonObject dataObj = obj.value("data").toObject();
    this->shidu = dataObj.value("shidu").toString();
    this->pm25 = QString::number(dataObj.value("pm25").toInt());
    this->quality = dataObj.value("quality").toString();
    this->wendu = dataObj.value("wendu").toString();
    this->ganmao = dataObj.value("ganmao").toString();
    QJsonArray forecastArray = dataObj.value("forecast").toArray();
    QJsonObject todayObj = forecastArray.at(0).toObject();
    this->fx = todayObj.value("fx").toString();
    this->fl = todayObj.value("fl").toString();
    this->type = todayObj.value("type").toString();
    this->sunrise = todayObj.value("sunrise").toString();
    this->sunset = todayObj.value("sunset").toString();
    this->notice = todayObj.value("notice").toString();
    return *this;
}

Forecast::Forecast() {
    aqi = "0";
    date = u8"00 日星期 0";
    week = u8"星期 0";
    high = u8"高温 0.0℃";
    low = u8"低温 0.0℃";
    type = "undefined";
}

Forecast& Forecast::operator=(const QJsonObject& obj) {
    this->date = obj.value("date").toString();
    this->week = obj.value("week").toString();
    this->high = obj.value("high").toString();
    this->low = obj.value("low").toString();
    this->aqi = QString::number(obj.value("aqi").toInt());
    this->type = obj.value("type").toString();
    return *this;
}
