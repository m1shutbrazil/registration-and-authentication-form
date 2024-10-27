#include "regwindow.h"
#include "ui_regwindow.h"

regwindow::regwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::regwindow)
{
    ui->setupUi(this);
}

regwindow::~regwindow()
{
    delete ui;
}

void regwindow::on_putNameReg_textEdited(const QString &arg1)
{
    regwindow::m_userName = arg1;
}


void regwindow::on_putPasswordReg_textEdited(const QString &arg1)
{
    regwindow::m_userPass = arg1;
}


void regwindow::on_putConfirm_textEdited(const QString &arg1)
{
    regwindow::m_confirmation = arg1;
}


void regwindow::on_RegistrationPushButtonReg_clicked()
{
    emit register_button_clicked2();
}

QString regwindow::getName(){
    return m_userName;
}

QString regwindow::getPass(){
    return m_userPass;
}

bool regwindow::checkPass(){
    return (m_confirmation == m_userPass);
}
