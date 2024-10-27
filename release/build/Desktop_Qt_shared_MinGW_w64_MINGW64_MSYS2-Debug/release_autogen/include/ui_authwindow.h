/********************************************************************************
** Form generated from reading UI file 'authwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_authwindow
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *GreetingLabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *putName;
    QLineEdit *putPassword;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loginPushButton;
    QPushButton *registrationPushButton;

    void setupUi(QDialog *authwindow)
    {
        if (authwindow->objectName().isEmpty())
            authwindow->setObjectName("authwindow");
        authwindow->resize(320, 220);
        authwindow->setMinimumSize(QSize(320, 220));
        authwindow->setMaximumSize(QSize(320, 220));
        authwindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	backgrond-color: #2C3E50;\n"
"}"));
        widget = new QWidget(authwindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 301, 196));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        GreetingLabel = new QLabel(widget);
        GreetingLabel->setObjectName("GreetingLabel");
        GreetingLabel->setStyleSheet(QString::fromUtf8("QLabel#GreetingLabel {\n"
"align: center;	\n"
"font-size: 24px;\n"
"	color: #ECF0F1;\n"
"	font-weight: bold;\n"
"	margin-bottom: 20px;\n"
"}\n"
""));

        gridLayout->addWidget(GreetingLabel, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        putName = new QLineEdit(widget);
        putName->setObjectName("putName");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        putName->setFont(font);
        putName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"   background-color: transparent; \n"
"    border: none;\n"
"    border-bottom: 2px solid #BDC3C7;\n"
"    padding: 5px;\n"
"    color: #ECF0F1; \n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #95A5A6;  \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-bottom: 2px solid #3498DB;  \n"
"}\n"
"\n"
"QLineEdit {\n"
"    transition: border-bottom 0.3s ease;  \n"
"}\n"
""));

        verticalLayout->addWidget(putName);

        putPassword = new QLineEdit(widget);
        putPassword->setObjectName("putPassword");
        putPassword->setFont(font);
        putPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"   background-color: transparent; \n"
"    border: none;\n"
"    border-bottom: 2px solid #BDC3C7;\n"
"    padding: 5px;\n"
"    color: #ECF0F1; \n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #95A5A6;  \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-bottom: 2px solid #3498DB;  \n"
"}\n"
"\n"
"QLineEdit {\n"
"    transition: border-bottom 0.3s ease;  \n"
"}\n"
""));
        putPassword->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(putPassword);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        loginPushButton = new QPushButton(widget);
        loginPushButton->setObjectName("loginPushButton");
        loginPushButton->setStyleSheet(QString::fromUtf8("QPushButton#loginPushButton {\n"
"    background-color: #3498DB;\n"
"    border-radius: 3px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton#loginPushButton:hover {\n"
"    background-color: #2980B9;\n"
"}"));

        verticalLayout_2->addWidget(loginPushButton);

        registrationPushButton = new QPushButton(widget);
        registrationPushButton->setObjectName("registrationPushButton");
        registrationPushButton->setStyleSheet(QString::fromUtf8("QPushButton#registrationPushButton {\n"
"    background-color: #E67E22;\n"
"    border-radius: 3px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton#registrationPushButton:hover {\n"
"    background-color: #D35400;\n"
"}"));

        verticalLayout_2->addWidget(registrationPushButton);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);


        retranslateUi(authwindow);

        QMetaObject::connectSlotsByName(authwindow);
    } // setupUi

    void retranslateUi(QDialog *authwindow)
    {
        authwindow->setWindowTitle(QCoreApplication::translate("authwindow", "Dialog", nullptr));
        GreetingLabel->setText(QCoreApplication::translate("authwindow", "               sign in", nullptr));
        putName->setPlaceholderText(QCoreApplication::translate("authwindow", "name", nullptr));
        putPassword->setInputMask(QString());
        putPassword->setPlaceholderText(QCoreApplication::translate("authwindow", "password", nullptr));
        loginPushButton->setText(QCoreApplication::translate("authwindow", "log in", nullptr));
        registrationPushButton->setText(QCoreApplication::translate("authwindow", "create account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authwindow: public Ui_authwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
