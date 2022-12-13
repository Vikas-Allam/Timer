#include "timer.h"
#include<QTimer>
#include<QTime>
#include <QElapsedTimer>
Timer::Timer(QObject *parent): QObject(parent)
{

 connect(timer,SIGNAL(timeout()),this,SLOT(close()));
timer->setInterval(5000);
s="starting";
emit notice(QVariant(s));

}

void Timer::start()
{
 s="starting";
 emit notice(QVariant(s));

 timer->start();
    qDebug()<<"start";

}
void Timer::stop()
{
   timer->stop();
   s="stopped";
   emit notice(QVariant(s));

}
void Timer::close()
{
    s="timeout";
    emit notice(QVariant(s));

}


