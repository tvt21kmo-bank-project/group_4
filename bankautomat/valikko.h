#ifndef VALIKKO_H
#define VALIKKO_H


#include "pankki.h"
#include "nosto.h"
#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QTimer>


namespace Ui {
class Valikko;
}

class Valikko : public QDialog
{
    Q_OBJECT

public:
    explicit Valikko(QWidget *parent = nullptr);
    //explicit Valikko(int id, QWidget *parent = nullptr);
    ~Valikko();


public slots:
   void myfunction();

private slots:

    void on_btnNosto_clicked();

    void on_btnSaldo_clicked();
    void naytaSaldoSlot(QNetworkReply *reply);

    void on_btnSiirto_clicked();

    void on_btnTapahtumat_clicked();

    void on_btnKirjauduUlos_clicked();

    void on_btnNaytaAsiakasTiedot_clicked();
    void naytaAsiakasTiedotSlot (QNetworkReply *reply);
    void naytaTilitapahtumatSlot (QNetworkReply *reply);



private:
    Ui::Valikko *ui;
    Pankki *objPankki;
    Nosto *objNosto;
    QNetworkAccessManager *naytaAsiakasTiedotManager;
    QNetworkAccessManager *naytaTilitapahtumatManager;
    QNetworkAccessManager *naytaSaldoManager;
    QNetworkReply *reply;
    int valinta;
    QTimer *timer;
};

#endif // VALIKKO_H
