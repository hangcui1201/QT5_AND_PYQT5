#include "signal_test.h"
#include "ui_signal_test.h"
#include <iostream>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Call ViewSignal
    ViewSignal();
}

// Add slot function
void Widget::ViewSlot(){
    std::cout << "ViewSlot" << std::endl;
}

Widget::~Widget()
{
    delete ui;
}
