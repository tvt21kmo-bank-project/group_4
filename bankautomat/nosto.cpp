#include "nosto.h"
#include "ui_nosto.h"

Nosto::Nosto(QString idnosto, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nosto)
{
    ui->setupUi(this);
    idtili=idnosto;
    QString site_url="http://localhost:3000/tili/"+idnosto;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    naytaNostoSaldoManager = new QNetworkAccessManager(this);
    connect(naytaNostoSaldoManager, SIGNAL(finished(QNetworkReply*)),
    this, SLOT(naytaNostoSaldoSlot(QNetworkReply*)));
    reply = naytaNostoSaldoManager->get(request);

    objTimer= new QTimer;//ajastin 13_12
    connect(objTimer,SIGNAL(timeout()),this,SLOT(stopSLOT()));//ajastin 13_12
    counter=0; objTimer->start(5000);//ajastin 13-12

}

Nosto::~Nosto()
{
    delete ui;
}

void Nosto::stopSLOT()
{
    qDebug()<< "Aika ="+counter;
       counter++;
       if(counter==2)
       {
           objTimer->stop();
           delete objTimer;
           objTimer=nullptr;
           this->close();
}

void Nosto::setId(const QString &value)
{
    idtili = value;
    ui->omaNostotili->setText(idtili);
    //ui->leSsumma->setText(x);

}
void Nosto::on_btn20_clicked()
{
    objTimer->start(5000);//ajastin 13-12
    ui->leSsumma->setText("20");

}

void Nosto::on_btn40_clicked()
{
    objTimer->start(5000);//ajastin 13-12
    ui->leSsumma->setText("40");
}

void Nosto::on_btn60_clicked()
{

    objTimer->start(5000);//ajastin 13-12
    ui->leSsumma->setText("60");
}

void Nosto::on_btn100_clicked()
{
    objTimer->start(5000);//ajastin 13-12
    ui->leSsumma->setText("100");
}

void Nosto::on_btn200_clicked()
{
    objTimer->start(5000);//ajastin 13-12
    ui->leSsumma->setText("200");
}

void Nosto::on_btn500_clicked()
{
    objTimer->start(5000);//ajastin 13-12
    ui->leSsumma->setText("500");
}

void Nosto::on_btnHyvaksy_clicked()
{
    objTimer->start(5000);//ajastin 13-12
    QJsonObject json;
    json.insert("id1",ui->omaNostotili->text());


    json.insert("summa",ui->leSsumma->text());
    qDebug()<<idtili;
    QString site_url="http://localhost:3000/nosto/nosto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    nostoManager = new QNetworkAccessManager(this);
    connect(nostoManager, SIGNAL(finished(QNetworkReply*)),
    this, SLOT(nostoSlot(QNetworkReply*)));
    reply = nostoManager->post(request, QJsonDocument(json).toJson());

}
void Nosto::nostoSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    //if(response_data == "1"){
    if (response_data!="false"){
        ui->textEditNostoTiedot->setText("Nosto onnistui\r");


        //ui->leDebitSaaja->setText("");
        //ui->leDebitSumma->setText("");
    }
    else {
        ui->textEditNostoTiedot->setText("Nosto epäonnistui");
        //ui->leDebitSaaja->setText("");
        //ui->leDebitSumma->setText("");
    }

}
void Nosto::on_btnTakaisin_clicked()
{
    this -> close();

}
void Nosto::naytaNostoSaldoSlot(QNetworkReply *reply)
{

    QByteArray response_data=reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString saldo;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    saldo+=QString("Tilisi saldo on")+" "+QString::number(json_obj["saldo"].toInt())+"€";
    }
    ui->textEditNostoTiedot->setText(saldo);
}
};
