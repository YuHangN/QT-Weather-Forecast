#ifndef WEATHERTOOL_H
#define WEATHERTOOL_H

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonParseError>
#include <QFile>
#include <QCoreApplication>
#include <unordered_map>

class WeatherTool {
private:
    std::unordered_map<QString, QString> nameToCode;
public:
    // WeatherTool构造函数
    WeatherTool() {
        // 获得当前程序运行的文件夹地址
        QString fileName = ":/citycode.json";
        // 创建信息收集错误对象
        QJsonParseError error;
        // 获得JSON文件的路径
        QFile file(fileName);
        // 打开文件 并全部读取。
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QByteArray jsonData = file.readAll();
        file.close();
        // 读取JSON数据
        QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData, &error);
        // 检测错误
        if (error.error != QJsonParseError::NoError) {
            qWarning() << "Failed to parse JSON:" << error.errorString();
            return;
        }
        // 转化为JSON数组, 里面存储的全是值
        QJsonArray cityArray = jsonDoc.array();
        for (int i = 0; i < cityArray.size(); i++) {
            QString cityCode = cityArray[i].toObject()["city_code"].toString();
            QString cityName = cityArray[i].toObject()["city_name"].toString();

            // 省份的code都是空的，因此只要长度大于0都代表可以添加到map中。
            if (cityCode.size() > 0) {
                this->nameToCode.emplace(cityName, cityCode);
            }
        }
    }
    // 重载[]运算符
    QString operator[](const QString& city) {
        auto it = this->nameToCode.find(city);
        // 如果没找到
        if (it == this->nameToCode.end()) {
            it = this->nameToCode.find(city + u8"市");
        }
        // 如果还是没找到
        if (it == this->nameToCode.end()) {
            it = this->nameToCode.find(city + u8"县");
        }
        // 如果找到了
        if (it != this->nameToCode.end()) {
            return it->second;
        }
        return "000000000";
    }

    ~WeatherTool() {};
};


#endif // WEATHERTOOL_H
