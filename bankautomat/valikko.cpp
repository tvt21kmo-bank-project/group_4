#include "valikko.h"
#include "ui_valikko.h"
#include "mainwindow.h"
#include <QDebug>//timer tulostus
int *tm;
Valikko::Valikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Valikko)
{
    ui->setupUi(this);
    objPankki=new Pankki;
    timer = new QTimer(this);//Timer
    connect(timer, SIGNAL(timeout()),this,SLOT(myfunction())); //timer
    timer->start(10000); //Timerin aika ms-> tässä 10 sekunttia.
    //*tm = timer;
}

Valikko::~Valikko()
{
    delete ui;
}

void Valikko::myfunction()
{
    //objPankki->close();
    qDebug() << "Timer update...";
}

void Valikko::on_btnNosto_clicked()
{

}


void Valikko::on_btnSaldo_clicked()
{
    valinta=2;
}


void Valikko::on_btnSiirto_clicked()
{

    objPankki->show();
}


void Valikko::on_btnTapahtumat_clicked()
{
    valinta=4;
}

