/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QPushButton *btnLogin;
    QLabel *labelMainTitle;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *labelLoginDebug;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        MainWindow->setStyleSheet(QString::fromUtf8("labelMainTitle {text-align: center}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEditUsername = new QLineEdit(centralwidget);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));
        lineEditUsername->setGeometry(QRect(130, 110, 141, 31));
        QFont font;
        font.setPointSize(12);
        lineEditUsername->setFont(font);
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(130, 150, 141, 31));
        lineEditPassword->setFont(font);
        lineEditPassword->setEchoMode(QLineEdit::Password);
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(690, 450, 141, 51));
        btnLogin->setFont(font);
        labelMainTitle = new QLabel(centralwidget);
        labelMainTitle->setObjectName(QString::fromUtf8("labelMainTitle"));
        labelMainTitle->setGeometry(QRect(30, 20, 951, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Serif")});
        font1.setPointSize(14);
        font1.setBold(true);
        labelMainTitle->setFont(font1);
        labelMainTitle->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(76, 110, 51, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(76, 150, 51, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 70, 261, 31));
        labelLoginDebug = new QLabel(centralwidget);
        labelLoginDebug->setObjectName(QString::fromUtf8("labelLoginDebug"));
        labelLoginDebug->setGeometry(QRect(50, 200, 371, 31));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Kirjaudu", nullptr));
        labelMainTitle->setText(QCoreApplication::translate("MainWindow", "Group IV Lehman Brothers", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Kortti", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PIN", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Kirjaudu pankkiin", nullptr));
        labelLoginDebug->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
