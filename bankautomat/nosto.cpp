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
    ui->leSsumma->setText("20");
}

void Nosto::on_btn40_clicked()
{
    ui->leSsumma->setText("40");
}

void Nosto::on_btn60_clicked()
{
    ui->leSsumma->setText("60");
}

void Nosto::on_btn100_clicked()
{
    ui->leSsumma->setText("100");
}

void Nosto::on_btn200_clicked()
{
    ui->leSsumma->setText("200");
}

void Nosto::on_btn500_clicked()
{
    ui->leSsumma->setText("500");
}

void Nosto::on_btnHyvaksy_clicked()
{

}

void Nosto::on_btnTakaisin_clicked()
{
    this -> close();

}
