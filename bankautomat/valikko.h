#ifndef VALIKKO_H
#define VALIKKO_H

#include "pankki.h"
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

public slots:
   void myfunction();

private slots:
    void on_btnNosto_clicked();

    void on_btnSaldo_clicked();

    void on_btnSiirto_clicked();

    void on_btnTapahtumat_clicked();



private:
    Ui::Valikko *ui;
    Pankki *objPankki;
    int valinta;
    QTimer *timer;
};

#endif // VALIKKO_H
