/********************************************************************************
** Form generated from reading UI file 'valikko.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIKKO_H
#define UI_VALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Valikko
{
public:
    QTextEdit *textEditNaytaAsiakasTiedot;
    QPushButton *btnKirjauduUlos;
    QLabel *labelBackgroundImage;
    QLabel *labelMainTitle;
    QLabel *labelMainTitleNimi;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnTapahtumat;
    QPushButton *btnSaldo;
    QPushButton *btnSiirto;
    QPushButton *btnNosto;
    QTextEdit *textEditShowCustomerInformation;

    void setupUi(QDialog *Valikko)
    {
        if (Valikko->objectName().isEmpty())
            Valikko->setObjectName(QString::fromUtf8("Valikko"));
        Valikko->resize(1024, 768);
        Valikko->setStyleSheet(QString::fromUtf8(""));
        textEditNaytaAsiakasTiedot = new QTextEdit(Valikko);
        textEditNaytaAsiakasTiedot->setObjectName(QString::fromUtf8("textEditNaytaAsiakasTiedot"));
        textEditNaytaAsiakasTiedot->setGeometry(QRect(50, 260, 921, 321));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        textEditNaytaAsiakasTiedot->setFont(font);
        textEditNaytaAsiakasTiedot->setStyleSheet(QString::fromUtf8("background-color: rgba(246, 245, 244, 20);\n"
"color: rgb(94, 92, 100);\n"
"font: 700 11pt \"FreeMono\";\n"
"letter-spacing: 2px;\n"
"text-transform: uppercase;"));
        btnKirjauduUlos = new QPushButton(Valikko);
        btnKirjauduUlos->setObjectName(QString::fromUtf8("btnKirjauduUlos"));
        btnKirjauduUlos->setGeometry(QRect(730, 630, 250, 60));
        btnKirjauduUlos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 120, 0);\n"
"}\n"
""));
        labelBackgroundImage = new QLabel(Valikko);
        labelBackgroundImage->setObjectName(QString::fromUtf8("labelBackgroundImage"));
        labelBackgroundImage->setGeometry(QRect(0, 0, 1024, 768));
        labelBackgroundImage->setPixmap(QPixmap(QString::fromUtf8(":/images/bank_automat_files/main_background_image_1.png")));
        labelMainTitle = new QLabel(Valikko);
        labelMainTitle->setObjectName(QString::fromUtf8("labelMainTitle"));
        labelMainTitle->setGeometry(QRect(40, 20, 940, 40));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        labelMainTitle->setFont(font1);
        labelMainTitle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelMainTitleNimi = new QLabel(Valikko);
        labelMainTitleNimi->setObjectName(QString::fromUtf8("labelMainTitleNimi"));
        labelMainTitleNimi->setGeometry(QRect(350, 20, 521, 41));
        labelMainTitleNimi->setFont(font1);
        labelMainTitleNimi->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        horizontalLayoutWidget = new QWidget(Valikko);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 100, 921, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnTapahtumat = new QPushButton(horizontalLayoutWidget);
        btnTapahtumat->setObjectName(QString::fromUtf8("btnTapahtumat"));
        btnTapahtumat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 20 0;\n"
"}"));

        horizontalLayout->addWidget(btnTapahtumat);

        btnSaldo = new QPushButton(horizontalLayoutWidget);
        btnSaldo->setObjectName(QString::fromUtf8("btnSaldo"));
        btnSaldo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 20 0;\n"
"}"));

        horizontalLayout->addWidget(btnSaldo);

        btnSiirto = new QPushButton(horizontalLayoutWidget);
        btnSiirto->setObjectName(QString::fromUtf8("btnSiirto"));
        btnSiirto->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 20 0;\n"
"}"));

        horizontalLayout->addWidget(btnSiirto);

        btnNosto = new QPushButton(horizontalLayoutWidget);
        btnNosto->setObjectName(QString::fromUtf8("btnNosto"));
        btnNosto->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 20 0;\n"
"}"));

        horizontalLayout->addWidget(btnNosto);

        textEditShowCustomerInformation = new QTextEdit(Valikko);
        textEditShowCustomerInformation->setObjectName(QString::fromUtf8("textEditShowCustomerInformation"));
        textEditShowCustomerInformation->setGeometry(QRect(50, 630, 281, 71));
        textEditShowCustomerInformation->setStyleSheet(QString::fromUtf8("background-color: rgba(246, 245, 244, 0);\n"
"border-style: none;\n"
"color: rgb(94, 92, 100);"));
        labelBackgroundImage->raise();
        horizontalLayoutWidget->raise();
        textEditShowCustomerInformation->raise();
        textEditNaytaAsiakasTiedot->raise();
        btnKirjauduUlos->raise();
        labelMainTitle->raise();
        labelMainTitleNimi->raise();

        retranslateUi(Valikko);

        QMetaObject::connectSlotsByName(Valikko);
    } // setupUi

    void retranslateUi(QDialog *Valikko)
    {
        Valikko->setWindowTitle(QCoreApplication::translate("Valikko", "Group IV Banking Systems Incorporated", nullptr));
        btnKirjauduUlos->setText(QCoreApplication::translate("Valikko", "Kirjaudu ulos", nullptr));
        labelBackgroundImage->setText(QString());
        labelMainTitle->setText(QCoreApplication::translate("Valikko", "Tervetuloa omaan pankkiin,", nullptr));
        labelMainTitleNimi->setText(QString());
        btnTapahtumat->setText(QCoreApplication::translate("Valikko", "Tilitapahtumat", nullptr));
        btnSaldo->setText(QCoreApplication::translate("Valikko", "N\303\244yt\303\244 saldo", nullptr));
        btnSiirto->setText(QCoreApplication::translate("Valikko", "Siirto", nullptr));
        btnNosto->setText(QCoreApplication::translate("Valikko", "Nosto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Valikko: public Ui_Valikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_H
