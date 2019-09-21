#ifndef WIDGETRECT_TEST_H
#define WIDGETRECT_TEST_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void move(int x, int y) { QWidget::move(x, y); }

private:
    Ui::Widget *ui;
};

#endif // WIDGETRECT_TEST_H
