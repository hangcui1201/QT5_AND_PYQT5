#include "xwidget.h"

XWidget::XWidget(QWidget *parent) : QWidget(parent)
{
    connect(this, SIGNAL(Hide()), this, SLOT(hide()));
}
