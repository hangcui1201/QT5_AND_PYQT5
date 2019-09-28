#ifndef XTHREAD_H
#define XTHREAD_H

#include <QThread>

class XThread : public QThread
{
    Q_OBJECT

public:
    XThread();
    ~XThread();

    void run(){
        for(int x=0; x<1000; x++){
            Move(x*2, x);
            msleep(50);
        }
    }

signals:
    void Move(int x, int y);

};

#endif // XTHREAD_H
