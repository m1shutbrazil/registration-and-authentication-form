/********************************************************************************
** Form generated from reading UI file 'regwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGWINDOW_H
#define UI_REGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regwindow
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *RegistrationPushButtonReg;
    QLineEdit *putConfirm;
    QLineEdit *putNameReg;
    QLineEdit *putPasswordReg;
    QLabel *RegistrationLabel;

    void setupUi(QDialog *regwindow)
    {
        if (regwindow->objectName().isEmpty())
            regwindow->setObjectName("regwindow");
        regwindow->resize(310, 220);
        regwindow->setMinimumSize(QSize(310, 220));
        regwindow->setMaximumSize(QSize(310, 220));
        regwindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	backgrond-color: #2C3E50;\n"
"}"));
        layoutWidget = new QWidget(regwindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 288, 194));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        RegistrationPushButtonReg = new QPushButton(layoutWidget);
        RegistrationPushButtonReg->setObjectName("RegistrationPushButtonReg");
        RegistrationPushButtonReg->setStyleSheet(QString::fromUtf8("QPushButton#RegistrationPushButtonReg{\n"
"	 background-color: #3498DB;\n"
"    border-radius: 3px;\n"
"    padding: 5px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton#RegistrationPushButtonReg:hover {\n"
"    background-color: #2980B9;\n"
"}\n"
""));

        gridLayout->addWidget(RegistrationPushButtonReg, 4, 0, 1, 1);

        putConfirm = new QLineEdit(layoutWidget);
        putConfirm->setObjectName("putConfirm");
        putConfirm->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        putConfirm->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(putConfirm, 3, 0, 1, 1);

        putNameReg = new QLineEdit(layoutWidget);
        putNameReg->setObjectName("putNameReg");
        putNameReg->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        gridLayout->addWidget(putNameReg, 1, 0, 1, 1);

        putPasswordReg = new QLineEdit(layoutWidget);
        putPasswordReg->setObjectName("putPasswordReg");
        putPasswordReg->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        putPasswordReg->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(putPasswordReg, 2, 0, 1, 1);

        RegistrationLabel = new QLabel(layoutWidget);
        RegistrationLabel->setObjectName("RegistrationLabel");
        RegistrationLabel->setStyleSheet(QString::fromUtf8("QLabel#RegistrationLabel {\n"
"	font-size: 24px;\n"
"	color: #ECF0F1;\n"
"	font-weight: bold;\n"
"	margin-bottom: 20px;\n"
"}"));

        gridLayout->addWidget(RegistrationLabel, 0, 0, 1, 1);


        retranslateUi(regwindow);

        QMetaObject::connectSlotsByName(regwindow);
    } // setupUi

    void retranslateUi(QDialog *regwindow)
    {
        regwindow->setWindowTitle(QCoreApplication::translate("regwindow", "Dialog", nullptr));
        RegistrationPushButtonReg->setText(QCoreApplication::translate("regwindow", "sign up", nullptr));
        putConfirm->setPlaceholderText(QCoreApplication::translate("regwindow", "confirm", nullptr));
        putNameReg->setPlaceholderText(QCoreApplication::translate("regwindow", "name", nullptr));
        putPasswordReg->setPlaceholderText(QCoreApplication::translate("regwindow", "password", nullptr));
        RegistrationLabel->setText(QCoreApplication::translate("regwindow", "       create account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regwindow: public Ui_regwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGWINDOW_H
