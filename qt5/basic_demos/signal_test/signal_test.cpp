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

    // Connect signal and slot
    connect(ui->testButton, SIGNAL(clicked()), this, SLOT(TestSlot()));
}

// Add slot function
void Widget::ViewSlot(){
    std::cout << "ViewSlot" << std::endl;
}

void Widget::TestSlot(){
    std::cout << "TestSlot" << std::endl;
}


Widget::~Widget()
{
    delete ui;
}
