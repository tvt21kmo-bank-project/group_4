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


void Valikko::on_btnKirjauduUlos_clicked()
{
    this->close();


}


void Valikko::on_btnNaytaAsiakasTiedot_clicked()
{
    QString site_url="http://localhost:3000/asiakas/1";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    naytaAsiakasTiedotManager = new QNetworkAccessManager(this);
    connect(naytaAsiakasTiedotManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(naytaAsiakasTiedotSlot(QNetworkReply*)));
    reply = naytaAsiakasTiedotManager->get(request);
}

void Valikko::naytaAsiakasTiedotSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    //qDebug()<<json_doc;
    QJsonArray json_array = json_doc.array();
    QString asiakas;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    asiakas+=QString(json_obj["enimi"].toString())+" : "+json_obj["snimi"].toString()+" : "+json_obj["osoite"].toString()+" : "+json_obj["puhnro"].toString();
    }
    ui->textEditNaytaAsiakasTiedot->setText(asiakas);

    /*ui->txtBooks->setText(book);*/
    //reply->deleteLater();
    //manager->deleteLater();
}

