#ifndef XWIDGET_H
#define XWIDGET_H

#include <QWidget>

class XWidget : public QWidget
{
    Q_OBJECT

public:
    explicit XWidget(QWidget *parent = nullptr);

signals:
    void Hide();

public slots:


};

#endif // XWIDGET_H
