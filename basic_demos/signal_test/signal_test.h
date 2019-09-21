#ifndef SIGNAL_TEST_H
#define SIGNAL_TEST_H

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


// Add signal
signals:
    void ViewSignal();

// Add slot
public slots:
    void ViewSlot();


private:
    Ui::Widget *ui;
};

#endif // SIGNAL_TEST_H
