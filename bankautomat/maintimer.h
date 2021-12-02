#ifndef MAINTIMER_H
#define MAINTIMER_H

#include <QObject>
#include "valikko.h"
#include <chrono>

using namespace std::chrono;

class MainTimer :public QObject
{
    Q_OBJECT
public:
    MainTimer(QObject *parent = nullptr);
    MainTimer::MainTimer(QWidget *event = nullptr);
   ~MainTimer();
protected:
    void timerEvent(QTimerEvent *event) override;
};

 MainTimer::MainTimer(QObject *parent)
        :QObject(parent)

    {
        startTimer(seconds(10));
    }
   void MainTimer::timerEvent(QTimerEvent *event)
   {
       qDebug() << "Timer ID:" <<event->timerId();
   }


#endif // MAINTIMER_H
