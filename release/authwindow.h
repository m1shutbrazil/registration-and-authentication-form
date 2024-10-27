#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include <QDialog>

namespace Ui {
class authwindow;
}

class authwindow : public QDialog
{
    Q_OBJECT

public:
    explicit authwindow(QWidget *parent = nullptr);
    ~authwindow();
    QString getPass();
    QString getLogin();

signals:
    void login_button_clicked();
    void register_button_clicked();

private slots:
    void on_loginPushButton_clicked();
    void on_registrationPushButton_clicked();
    void on_putName_textEdited(const QString &arg1);
    void on_putPassword_textEdited(const QString &arg1);

private:
    Ui::authwindow *ui;

    QString m_username;
    QString m_userpass;

};

#endif // AUTHWINDOW_H
