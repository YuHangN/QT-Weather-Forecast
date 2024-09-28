#include "weather_forcast.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Weather_forcast w;
    w.show();
    return a.exec();
}
