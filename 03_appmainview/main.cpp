#include "widget.h"
#include "esp8266.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Esp8266 p;
    p.Start();
    AppMainView w(&p);
    w.show();
    return a.exec();
}
