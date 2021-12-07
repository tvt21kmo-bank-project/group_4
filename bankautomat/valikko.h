#ifndef VALIKKO_H
#define VALIKKO_H

#include "nosto.h"
#include "pankki.h"
#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>


namespace Ui {
class Valikko;
}

class Valikko : public QDialog
{
    Q_OBJECT

public:
    explicit Valikko(QWidget *parent = nullptr);
    ~Valikko();

private slots:
    void on_btnNosto_clicked();

    void on_btnSaldo_clicked();

    void on_btnSiirto_clicked();

    void on_btnTapahtumat_clicked();

    void on_btnKirjauduUlos_clicked();

    void on_btnNaytaAsiakasTiedot_clicked();
    void naytaAsiakasTiedotSlot (QNetworkReply *reply);

private:
    Ui::Valikko *ui;
    Pankki *objPankki;
    Nosto *objNosto;
    QNetworkAccessManager *naytaAsiakasTiedotManager;
    QNetworkReply *reply;
    int valinta;
};

#endif // VALIKKO_H
