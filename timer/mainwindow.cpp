#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    x=y=0;
    ui->setupUi(this);
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(display()));
            timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::display()
{
    qDebug()<<"timeout";
    x+=10;
    y+=10;
    ui->pushButton->move(x,y);
}

