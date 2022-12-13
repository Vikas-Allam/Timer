#ifndef TIMER_H
#define TIMER_H
#include<QTimer>
#include <QObject>
#include <QWidget>
#include<QTime>

class Timer:public QObject
{
    Q_OBJECT
public:
      Timer(QObject *parent=nullptr);
signals:
      void notice(QVariant data);
public slots:

     void stop();
     void start();
   void close();
private:
      QTimer *timer=new QTimer(this);
      QString s;
};

#endif // TIMER_H
