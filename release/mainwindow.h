#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QtSql/QtSql>
#include "authwindow.h"
#include "regwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void display();
    bool connectDB();
private:
    Ui::MainWindow *ui;

    authwindow ui_Auth;
    regwindow ui_Reg;

    QString m_username;
    QString m_userpass;

    QString db_input;

    QSqlDatabase mw_db;

    int user_counter;
    bool m_loginSuccesfull;

private slots:
    void authorizeUser();
    void registerWindowShow();
    void registerUser();
};
#endif // MAINWINDOW_H
