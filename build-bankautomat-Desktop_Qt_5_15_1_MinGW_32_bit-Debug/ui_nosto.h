/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Nosto
{
public:
    QPushButton *btn20;
    QPushButton *btn40;
    QPushButton *btn60;
    QPushButton *btn100;
    QPushButton *btn200;
    QPushButton *btn500;
    QLineEdit *leSsumma;
    QPushButton *btnHyvaksy;
    QLabel *labelNostarahaaHeader;
    QLabel *label_2;
    QPushButton *btnTakaisin;
    QTextEdit *textEditNostoTiedot;
    QLabel *omaNostotili;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QString::fromUtf8("Nosto"));
        Nosto->resize(1024, 768);
        btn20 = new QPushButton(Nosto);
        btn20->setObjectName(QString::fromUtf8("btn20"));
        btn20->setGeometry(QRect(100, 110, 91, 41));
        btn40 = new QPushButton(Nosto);
        btn40->setObjectName(QString::fromUtf8("btn40"));
        btn40->setGeometry(QRect(240, 110, 91, 41));
        btn60 = new QPushButton(Nosto);
        btn60->setObjectName(QString::fromUtf8("btn60"));
        btn60->setGeometry(QRect(380, 110, 91, 41));
        btn100 = new QPushButton(Nosto);
        btn100->setObjectName(QString::fromUtf8("btn100"));
        btn100->setGeometry(QRect(100, 180, 91, 41));
        btn200 = new QPushButton(Nosto);
        btn200->setObjectName(QString::fromUtf8("btn200"));
        btn200->setGeometry(QRect(240, 180, 91, 41));
        btn500 = new QPushButton(Nosto);
        btn500->setObjectName(QString::fromUtf8("btn500"));
        btn500->setGeometry(QRect(380, 180, 91, 41));
        leSsumma = new QLineEdit(Nosto);
        leSsumma->setObjectName(QString::fromUtf8("leSsumma"));
        leSsumma->setGeometry(QRect(280, 330, 131, 41));
        btnHyvaksy = new QPushButton(Nosto);
        btnHyvaksy->setObjectName(QString::fromUtf8("btnHyvaksy"));
        btnHyvaksy->setGeometry(QRect(180, 390, 190, 40));
        QFont font;
        font.setPointSize(12);
        btnHyvaksy->setFont(font);
        btnHyvaksy->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 205, 50);"));
        labelNostarahaaHeader = new QLabel(Nosto);
        labelNostarahaaHeader->setObjectName(QString::fromUtf8("labelNostarahaaHeader"));
        labelNostarahaaHeader->setGeometry(QRect(40, 20, 940, 40));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        labelNostarahaaHeader->setFont(font1);
        labelNostarahaaHeader->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_2 = new QLabel(Nosto);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 330, 131, 41));
        QFont font2;
        font2.setPointSize(15);
        label_2->setFont(font2);
        btnTakaisin = new QPushButton(Nosto);
        btnTakaisin->setObjectName(QString::fromUtf8("btnTakaisin"));
        btnTakaisin->setGeometry(QRect(730, 630, 250, 60));
        QFont font3;
        font3.setPointSize(11);
        btnTakaisin->setFont(font3);
        btnTakaisin->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 0);"));
        textEditNostoTiedot = new QTextEdit(Nosto);
        textEditNostoTiedot->setObjectName(QString::fromUtf8("textEditNostoTiedot"));
        textEditNostoTiedot->setGeometry(QRect(570, 110, 391, 321));
        textEditNostoTiedot->setStyleSheet(QString::fromUtf8("background-color: rgba(246, 245, 244, 20);\n"
"color: rgb(94, 92, 100);\n"
"font: 700 11pt \"FreeMono\";\n"
"letter-spacing: 2px;\n"
"text-transform: uppercase;"));
        omaNostotili = new QLabel(Nosto);
        omaNostotili->setObjectName(QString::fromUtf8("omaNostotili"));
        omaNostotili->setGeometry(QRect(310, 290, 61, 21));
        omaNostotili->setFont(font);
        label_3 = new QLabel(Nosto);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 290, 141, 21));
        label_3->setFont(font);
        label_4 = new QLabel(Nosto);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 1024, 768));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/bank_automat_files/main_background_image_1.png")));
        label_4->raise();
        btn20->raise();
        btn40->raise();
        btn60->raise();
        btn100->raise();
        btn200->raise();
        btn500->raise();
        leSsumma->raise();
        btnHyvaksy->raise();
        labelNostarahaaHeader->raise();
        label_2->raise();
        btnTakaisin->raise();
        textEditNostoTiedot->raise();
        omaNostotili->raise();
        label_3->raise();

        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QDialog *Nosto)
    {
        Nosto->setWindowTitle(QCoreApplication::translate("Nosto", "Group IV Banking Systems Incorporated", nullptr));
        btn20->setText(QCoreApplication::translate("Nosto", "20", nullptr));
        btn40->setText(QCoreApplication::translate("Nosto", "40", nullptr));
        btn60->setText(QCoreApplication::translate("Nosto", "60", nullptr));
        btn100->setText(QCoreApplication::translate("Nosto", "100", nullptr));
        btn200->setText(QCoreApplication::translate("Nosto", "200", nullptr));
        btn500->setText(QCoreApplication::translate("Nosto", "500", nullptr));
        btnHyvaksy->setText(QCoreApplication::translate("Nosto", "Suorita nosto", nullptr));
        labelNostarahaaHeader->setText(QCoreApplication::translate("Nosto", "Nosta rahaa", nullptr));
        label_2->setText(QCoreApplication::translate("Nosto", "Sy\303\266t\303\244 summa:", nullptr));
        btnTakaisin->setText(QCoreApplication::translate("Nosto", "Takaisin", nullptr));
        omaNostotili->setText(QString());
        label_3->setText(QCoreApplication::translate("Nosto", "Tili jolta nostetaan", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
