#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Customize window button

    // Hide title bar and outlines
    //this->setWindowFlags(Qt::FramelessWindowHint);

    // Hide min & max button
    //this->setWindowFlag(Qt::WindowMinimizeButtonHint, false);
    //this->setWindowFlag(Qt::WindowMaximizeButtonHint, false);
    // or
    //this->setWindowFlag(Qt::WindowMinMaxButtonsHint, false);

    // Keep title bar, hide all buttons
    //this->setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint);

    // Only keep close button on title bar
    this->setWindowFlags(Qt::WindowCloseButtonHint);

}

Widget::~Widget()
{
    delete ui;
}
