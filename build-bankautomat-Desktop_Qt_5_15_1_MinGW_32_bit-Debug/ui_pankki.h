/********************************************************************************
** Form generated from reading UI file 'pankki.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANKKI_H
#define UI_PANKKI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Pankki
{
public:
    QLabel *labelTilisiirtoHeader;
    QLineEdit *leDebitSaaja;
    QLineEdit *leDebitSumma;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btnDebit;
    QLabel *labelDebitInfo;
    QPushButton *btnLogoutPankki;
    QLabel *laOmatilinro;
    QLabel *labelBackgroundImage;

    void setupUi(QDialog *Pankki)
    {
        if (Pankki->objectName().isEmpty())
            Pankki->setObjectName(QString::fromUtf8("Pankki"));
        Pankki->resize(1024, 768);
        labelTilisiirtoHeader = new QLabel(Pankki);
        labelTilisiirtoHeader->setObjectName(QString::fromUtf8("labelTilisiirtoHeader"));
        labelTilisiirtoHeader->setGeometry(QRect(40, 20, 940, 40));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        labelTilisiirtoHeader->setFont(font);
        labelTilisiirtoHeader->setStyleSheet(QString::fromUtf8("color: rgb(246, 255, 244);"));
        leDebitSaaja = new QLineEdit(Pankki);
        leDebitSaaja->setObjectName(QString::fromUtf8("leDebitSaaja"));
        leDebitSaaja->setGeometry(QRect(370, 160, 111, 41));
        QFont font1;
        font1.setPointSize(12);
        leDebitSaaja->setFont(font1);
        leDebitSumma = new QLineEdit(Pankki);
        leDebitSumma->setObjectName(QString::fromUtf8("leDebitSumma"));
        leDebitSumma->setGeometry(QRect(530, 160, 111, 41));
        leDebitSumma->setFont(font1);
        label_2 = new QLabel(Pankki);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 120, 151, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(Pankki);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 120, 141, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(Pankki);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(530, 125, 191, 21));
        label_4->setFont(font1);
        btnDebit = new QPushButton(Pankki);
        btnDebit->setObjectName(QString::fromUtf8("btnDebit"));
        btnDebit->setGeometry(QRect(430, 240, 190, 40));
        btnDebit->setFont(font1);
        btnDebit->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 205, 50);"));
        labelDebitInfo = new QLabel(Pankki);
        labelDebitInfo->setObjectName(QString::fromUtf8("labelDebitInfo"));
        labelDebitInfo->setGeometry(QRect(180, 310, 651, 71));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(false);
        labelDebitInfo->setFont(font2);
        labelDebitInfo->setStyleSheet(QString::fromUtf8("background-color: rgba(246, 245, 244, 20);\n"
"color: rgb(94, 92, 100);\n"
"font: 700 11pt \"FreeMono\";\n"
"letter-spacing: 2px;\n"
"text-transform: uppercase;"));
        labelDebitInfo->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        btnLogoutPankki = new QPushButton(Pankki);
        btnLogoutPankki->setObjectName(QString::fromUtf8("btnLogoutPankki"));
        btnLogoutPankki->setGeometry(QRect(730, 630, 250, 50));
        btnLogoutPankki->setFont(font1);
        btnLogoutPankki->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 0);"));
        laOmatilinro = new QLabel(Pankki);
        laOmatilinro->setObjectName(QString::fromUtf8("laOmatilinro"));
        laOmatilinro->setGeometry(QRect(260, 150, 41, 61));
        QFont font3;
        font3.setPointSize(18);
        laOmatilinro->setFont(font3);
        labelBackgroundImage = new QLabel(Pankki);
        labelBackgroundImage->setObjectName(QString::fromUtf8("labelBackgroundImage"));
        labelBackgroundImage->setGeometry(QRect(0, 0, 1024, 768));
        labelBackgroundImage->setPixmap(QPixmap(QString::fromUtf8(":/images/bank_automat_files/main_background_image_1.png")));
        labelBackgroundImage->raise();
        labelTilisiirtoHeader->raise();
        leDebitSaaja->raise();
        leDebitSumma->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        btnDebit->raise();
        labelDebitInfo->raise();
        btnLogoutPankki->raise();
        laOmatilinro->raise();

        retranslateUi(Pankki);

        QMetaObject::connectSlotsByName(Pankki);
    } // setupUi

    void retranslateUi(QDialog *Pankki)
    {
        Pankki->setWindowTitle(QCoreApplication::translate("Pankki", "Group IV Banking Systems Incorporated", nullptr));
        labelTilisiirtoHeader->setText(QCoreApplication::translate("Pankki", "Tee tilisiirto", nullptr));
        label_2->setText(QCoreApplication::translate("Pankki", "Maksajan tilinumero", nullptr));
        label_3->setText(QCoreApplication::translate("Pankki", "Saajan tilinumero", nullptr));
        label_4->setText(QCoreApplication::translate("Pankki", "Sy\303\266t\303\244 siirrett\303\244v\303\244 summa", nullptr));
        btnDebit->setText(QCoreApplication::translate("Pankki", "Suorita siirto", nullptr));
        labelDebitInfo->setText(QString());
        btnLogoutPankki->setText(QCoreApplication::translate("Pankki", "Takaisin", nullptr));
        laOmatilinro->setText(QString());
        labelBackgroundImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Pankki: public Ui_Pankki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANKKI_H
