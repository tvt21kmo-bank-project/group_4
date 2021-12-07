/********************************************************************************
** Form generated from reading UI file 'valikko.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIKKO_H
#define UI_VALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Valikko
{
public:
    QPushButton *btnNosto;
    QPushButton *btnSaldo;
    QPushButton *btnSiirto;
    QPushButton *btnTapahtumat;
    QLabel *labelMainTitle;
    QLabel *labelMainMenuWelcome;
    QLabel *labelMainMenuCustomerInfoTitle;
    QTextEdit *textEditNaytaAsiakasTiedot;
    QPushButton *btnKirjauduUlos;
    QPushButton *btnNaytaAsiakasTiedot;

    void setupUi(QDialog *Valikko)
    {
        if (Valikko->objectName().isEmpty())
            Valikko->setObjectName(QString::fromUtf8("Valikko"));
        Valikko->resize(1024, 768);
        btnNosto = new QPushButton(Valikko);
        btnNosto->setObjectName(QString::fromUtf8("btnNosto"));
        btnNosto->setGeometry(QRect(40, 80, 111, 61));
        btnSaldo = new QPushButton(Valikko);
        btnSaldo->setObjectName(QString::fromUtf8("btnSaldo"));
        btnSaldo->setGeometry(QRect(40, 170, 111, 61));
        btnSiirto = new QPushButton(Valikko);
        btnSiirto->setObjectName(QString::fromUtf8("btnSiirto"));
        btnSiirto->setGeometry(QRect(40, 260, 111, 61));
        btnTapahtumat = new QPushButton(Valikko);
        btnTapahtumat->setObjectName(QString::fromUtf8("btnTapahtumat"));
        btnTapahtumat->setGeometry(QRect(40, 350, 111, 61));
        labelMainTitle = new QLabel(Valikko);
        labelMainTitle->setObjectName(QString::fromUtf8("labelMainTitle"));
        labelMainTitle->setGeometry(QRect(30, 20, 951, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Serif")});
        font.setPointSize(14);
        font.setBold(true);
        labelMainTitle->setFont(font);
        labelMainTitle->setStyleSheet(QString::fromUtf8(""));
        labelMainMenuWelcome = new QLabel(Valikko);
        labelMainMenuWelcome->setObjectName(QString::fromUtf8("labelMainMenuWelcome"));
        labelMainMenuWelcome->setGeometry(QRect(230, 80, 181, 31));
        labelMainMenuCustomerInfoTitle = new QLabel(Valikko);
        labelMainMenuCustomerInfoTitle->setObjectName(QString::fromUtf8("labelMainMenuCustomerInfoTitle"));
        labelMainMenuCustomerInfoTitle->setGeometry(QRect(660, 80, 181, 31));
        textEditNaytaAsiakasTiedot = new QTextEdit(Valikko);
        textEditNaytaAsiakasTiedot->setObjectName(QString::fromUtf8("textEditNaytaAsiakasTiedot"));
        textEditNaytaAsiakasTiedot->setGeometry(QRect(660, 110, 301, 221));
        btnKirjauduUlos = new QPushButton(Valikko);
        btnKirjauduUlos->setObjectName(QString::fromUtf8("btnKirjauduUlos"));
        btnKirjauduUlos->setGeometry(QRect(40, 440, 111, 61));
        btnNaytaAsiakasTiedot = new QPushButton(Valikko);
        btnNaytaAsiakasTiedot->setObjectName(QString::fromUtf8("btnNaytaAsiakasTiedot"));
        btnNaytaAsiakasTiedot->setGeometry(QRect(660, 340, 301, 25));

        retranslateUi(Valikko);

        QMetaObject::connectSlotsByName(Valikko);
    } // setupUi

    void retranslateUi(QDialog *Valikko)
    {
        Valikko->setWindowTitle(QCoreApplication::translate("Valikko", "Dialog", nullptr));
        btnNosto->setText(QCoreApplication::translate("Valikko", "Nosto", nullptr));
        btnSaldo->setText(QCoreApplication::translate("Valikko", "Saldo", nullptr));
        btnSiirto->setText(QCoreApplication::translate("Valikko", "Siirto", nullptr));
        btnTapahtumat->setText(QCoreApplication::translate("Valikko", "Tilitapahtumat", nullptr));
        labelMainTitle->setText(QCoreApplication::translate("Valikko", "Group IV Lehman Brothers", nullptr));
        labelMainMenuWelcome->setText(QCoreApplication::translate("Valikko", "Tervetuloa pankkiin!", nullptr));
        labelMainMenuCustomerInfoTitle->setText(QCoreApplication::translate("Valikko", "Asiakas", nullptr));
        btnKirjauduUlos->setText(QCoreApplication::translate("Valikko", "Kirjaudu ulos", nullptr));
        btnNaytaAsiakasTiedot->setText(QCoreApplication::translate("Valikko", "N\303\244yt\303\244 omat tietoni", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Valikko: public Ui_Valikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_H
