#include "widget_test.h"
#include "xwidget.h"
#include <QApplication>
#include <QThread>

static XWidget *w = nullptr;

class XThread : public QThread {

public:
    void run(){
        msleep(3000);
        w->Hide();
    }

};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    w = new XWidget();

    XThread xt;

    w->show();

    xt.start();

//    QWidget w;
//    w.setWindowTitle("My Widget");
//    w.show();
//    w.hide();

//    Widget w;
//    w.show();

    return a.exec();
}
