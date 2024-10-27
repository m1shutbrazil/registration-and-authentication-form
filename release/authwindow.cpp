#include "authwindow.h"
#include "ui_authwindow.h"

authwindow::authwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::authwindow)
{
    ui->setupUi(this);
}

authwindow::~authwindow()
{
    delete ui;
}

void authwindow::on_loginPushButton_clicked()
{
    emit login_button_clicked();
}


void authwindow::on_registrationPushButton_clicked()
{
    emit register_button_clicked();
}


void authwindow::on_putName_textEdited(const QString &arg1)
{
    authwindow::m_username = arg1;
}


void authwindow::on_putPassword_textEdited(const QString &arg1)
{
    authwindow::m_userpass = arg1;
}

QString authwindow::getPass(){
    return authwindow::m_userpass;
}

QString authwindow::getLogin(){
    return authwindow::m_username;
}

