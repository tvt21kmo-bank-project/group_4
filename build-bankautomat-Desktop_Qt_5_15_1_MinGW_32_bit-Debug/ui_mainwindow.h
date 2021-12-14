/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QLabel *labelMainTitle;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *labelLoginDebug;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Button_8;
    QPushButton *Button_6;
    QPushButton *Button_1;
    QPushButton *Button_7;
    QPushButton *Button_5;
    QPushButton *Button_9;
    QPushButton *Button_4;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_0;
    QPushButton *Button_Clear;
    QLabel *labelBackgroundImage;
    QPushButton *btnLogin;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEditUsername = new QLineEdit(centralwidget);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));
        lineEditUsername->setGeometry(QRect(180, 230, 141, 31));
        QPalette palette;
        QBrush brush(QColor(61, 56, 70, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 253, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush4(QColor(190, 190, 190, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lineEditUsername->setPalette(palette);
        QFont font;
        font.setPointSize(12);
        lineEditUsername->setFont(font);
        lineEditUsername->setAutoFillBackground(false);
        lineEditUsername->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 253, 255);"));
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(180, 270, 141, 31));
        lineEditPassword->setFont(font);
        lineEditPassword->setEchoMode(QLineEdit::Password);
        labelMainTitle = new QLabel(centralwidget);
        labelMainTitle->setObjectName(QString::fromUtf8("labelMainTitle"));
        labelMainTitle->setGeometry(QRect(40, 20, 941, 41));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        labelMainTitle->setFont(font1);
        labelMainTitle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(126, 230, 51, 31));
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(126, 270, 51, 31));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 190, 271, 31));
        label_3->setStyleSheet(QString::fromUtf8(""));
        labelLoginDebug = new QLabel(centralwidget);
        labelLoginDebug->setObjectName(QString::fromUtf8("labelLoginDebug"));
        labelLoginDebug->setGeometry(QRect(70, 720, 881, 41));
        labelLoginDebug->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelLoginDebug->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(580, 130, 261, 416));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button_8 = new QPushButton(gridLayoutWidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        QFont font2;
        font2.setPointSize(18);
        Button_8->setFont(font2);
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_8, 0, 1, 1, 1);

        Button_6 = new QPushButton(gridLayoutWidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setFont(font2);
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_6, 1, 2, 1, 1);

        Button_1 = new QPushButton(gridLayoutWidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setFont(font2);
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_1, 2, 0, 1, 1);

        Button_7 = new QPushButton(gridLayoutWidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setFont(font2);
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_7, 0, 0, 1, 1);

        Button_5 = new QPushButton(gridLayoutWidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setFont(font2);
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_5, 1, 1, 1, 1);

        Button_9 = new QPushButton(gridLayoutWidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setFont(font2);
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_9, 0, 2, 1, 1);

        Button_4 = new QPushButton(gridLayoutWidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setFont(font2);
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_4, 1, 0, 1, 1);

        Button_2 = new QPushButton(gridLayoutWidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setFont(font2);
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_2, 2, 1, 1, 1);

        Button_3 = new QPushButton(gridLayoutWidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setFont(font2);
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_3, 2, 2, 1, 1);

        Button_0 = new QPushButton(gridLayoutWidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setFont(font2);
        Button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_0, 3, 1, 1, 1);

        Button_Clear = new QPushButton(gridLayoutWidget);
        Button_Clear->setObjectName(QString::fromUtf8("Button_Clear"));
        Button_Clear->setFont(font2);
        Button_Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 20 0;\n"
"}"));

        gridLayout->addWidget(Button_Clear, 3, 2, 1, 1);

        labelBackgroundImage = new QLabel(centralwidget);
        labelBackgroundImage->setObjectName(QString::fromUtf8("labelBackgroundImage"));
        labelBackgroundImage->setGeometry(QRect(0, 0, 1024, 768));
        labelBackgroundImage->setPixmap(QPixmap(QString::fromUtf8(":/images/bank_automat_files/main_background_image_1.png")));
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(590, 580, 250, 60));
        QFont font3;
        font3.setPointSize(16);
        btnLogin->setFont(font3);
        btnLogin->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 205, 50);"));
        MainWindow->setCentralWidget(centralwidget);
        labelBackgroundImage->raise();
        lineEditUsername->raise();
        lineEditPassword->raise();
        labelMainTitle->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        labelLoginDebug->raise();
        gridLayoutWidget->raise();
        btnLogin->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Group IV Banking Systems Incorporated", nullptr));
        labelMainTitle->setText(QCoreApplication::translate("MainWindow", "Sis\303\244\303\244nkirjautuminen", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Kortti", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PIN", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Kirjaudu sy\303\266tt\303\244m\303\244ll\303\244 tunnuksesi", nullptr));
        labelLoginDebug->setText(QString());
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button_Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        labelBackgroundImage->setText(QString());
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Kirjaudu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
