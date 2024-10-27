#ifndef REGWINDOW_H
#define REGWINDOW_H

#include <QDialog>
#include<QStatusBar>

namespace Ui {
class regwindow;
}

class regwindow : public QDialog
{
    Q_OBJECT

public:
    explicit regwindow(QWidget *parent = nullptr);
    ~regwindow();

    QString getName();
    QString getPass();

    bool checkPass();

signals:
    void register_button_clicked2();

private slots:
    void on_putNameReg_textEdited(const QString &arg1);

    void on_putPasswordReg_textEdited(const QString &arg1);

    void on_putConfirm_textEdited(const QString &arg1);

    void on_RegistrationPushButtonReg_clicked();

private:
    Ui::regwindow *ui;

    QString m_userName;
    QString m_userPass;
    QString m_confirmation;
};

#endif // REGWINDOW_H
