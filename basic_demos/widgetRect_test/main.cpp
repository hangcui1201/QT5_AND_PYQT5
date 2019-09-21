#include "widgetRect_test.h"
#include "xthread.h"
#include <QApplication>
#include <iostream>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget w;
    w.show();

    QRect rec = w.geometry();
//    w.setGeometry(0, 0, 800, 600);

    XThread xt;

    w.resize(1000, 400);

    QObject::connect(&xt, SIGNAL(Move(int, int)), &w, SLOT(move(int, int)));

    xt.start();

    return a.exec();
}
