#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);


}

Nosto::~Nosto()
{
    delete ui;
}

void Nosto::on_btn20_clicked()
{

}

void Nosto::on_btn40_clicked()
{

}

void Nosto::on_btn60_clicked()
{

}

void Nosto::on_btn100_clicked()
{

}

void Nosto::on_btn200_clicked()
{

}

void Nosto::on_btn500_clicked()
{

}

void Nosto::on_btnHyvaksy_clicked()
{

}

void Nosto::on_btnTakaisin_clicked()
{
    this -> close();
    //objValikko -> show();
}
