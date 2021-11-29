#include "valikko.h"
#include "ui_valikko.h"


Valikko::Valikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Valikko)
{
    ui->setupUi(this);
    objPankki=new Pankki;
}

Valikko::~Valikko()
{
    delete ui;
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
    this ->close();
    objPankki->show();
}


void Valikko::on_btnTapahtumat_clicked()
{
    valinta=4;
}

