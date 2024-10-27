#include <QtDebug>
#include <QMessageBox>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "authwindow.h"
#include "regwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    user_counter = 0;
    m_loginSuccesfull = false;
    connect(&ui_Auth, SIGNAL(login_button_clicked()), this, SLOT(authorizeUser()));
    connect(&ui_Auth, SIGNAL(destroyed()),this, SLOT(show()));
    connect(&ui_Auth, SIGNAL(register_button_clicked()), this,SLOT(registerWindowShow()));
    connect(&ui_Reg, SIGNAL(register_button_clicked2()), this,SLOT(registerUser()));
    connect(&ui_Reg, SIGNAL(destroyed()), &ui_Auth, SLOT(show()));

    if(!connectDB())
    {
        qDebug() << "Failed to connect DB";
    }

    QSqlQuery query;

    db_input = "CREATE TABLE userlist ( "
               "number INTEGER PRIMARY KEY NOT NULL,"
               "name VARCHAR(20), "
               "pass VARCHAR(12), "
               "xpos INTEGER, "
               "ypos INTEGER, "
               "width INTEGER, "
               "length INTEGER );";
    if(!query.exec(db_input))
    {
        qDebug() << "Unable to create a table" << query.lastError();
    }


    ui->setupUi(this);
}

void MainWindow::authorizeUser()
{
    m_username = ui_Auth.getLogin();
    m_userpass = ui_Auth.getPass();

    QString str_t = " SELECT * "
                    " FROM userlist "
                    " WHERE name = '%1'";
    // int db_number = 0;

    QString username = "";
    QString userpass = "";

    int xPos = 0;
    int yPos = 0;

    int width = 0;
    int length = 0;

    db_input = str_t.arg(m_username);

    QSqlQuery query;
    QSqlRecord rec;

    if(!query.exec(db_input))
    {
        qDebug() << "Unable to execute query - exiting" << query.lastError() << " : " << query.lastQuery();
    }
    rec = query.record();
    query.next();
    user_counter = query.value(rec.indexOf("number")).toInt();
    username = query.value(rec.indexOf("name")).toString();
    userpass = query.value(rec.indexOf("pass")).toString();
    if (m_username != username)
    {
        qDebug() << "Account is not exists" << username << " " << userpass;
        QMessageBox::warning(this, "Oops", "Where is no account with this name");
        m_loginSuccesfull = false;
    }
    else if(m_userpass != userpass)
    {
        qDebug() << "Password missmatch" << username << " " << userpass;
        QMessageBox::warning(this, "Oops", "Password is not correct!");
        m_loginSuccesfull = false;
    }
    else
    {
        m_loginSuccesfull = true;
        xPos = query.value(rec.indexOf("xpos")).toInt();
        yPos = query.value(rec.indexOf("ypos")).toInt();
        width = query.value(rec.indexOf("width")).toInt();
        length = query.value(rec.indexOf("length")).toInt();
        ui_Auth.close();
        ui_Reg.close();
        this->setGeometry(xPos,yPos,width, length);
        this->show();
    }
}

void MainWindow::registerWindowShow()
{
    ui_Auth.hide();
    ui_Reg.show();
}

void MainWindow::registerUser()
{
    if(ui_Reg.checkPass())
    {
        QSqlQuery query;
        QSqlRecord rec;
        QString str_t = "SELECT COUNT(*) "
                        "FROM userlist;";
        db_input = str_t;
        if(!query.exec(db_input))
        {
            qDebug() << "Unable to get number " << query.lastError() << " : " << query.lastQuery();
            return;
        }
        else
        {
            query.next();
            rec = query.record();
            user_counter = rec.value(0).toInt();
            qDebug() << user_counter;
        }


        m_username = ui_Reg.getName();
        m_userpass = ui_Reg.getPass();
        user_counter++;

        str_t = "INSERT INTO userlist(number, name, pass, xpos, ypos, width, length)"
                "VALUES(%1, '%2', '%3', %4, %5, %6, %7);";
        db_input = str_t .arg(user_counter)
                       .arg(m_username)
                       .arg(m_userpass)
                       .arg(0)
                       .arg(0)
                       .arg(800)
                       .arg(400);

        if(!query.exec(db_input))
        {
            qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery();
        }
        else
        {
            ui_Reg.hide();
            ui_Auth.show();
        }
    }
    else
    {
        qDebug() << "Confirm password coorectly";
        QMessageBox::warning(this, "Oops", "Confirm password coorectly!");
    }

}

void MainWindow::display()
{
    ui_Auth.show();
    ui->statusbar->showMessage("You successfully enter");
}

bool MainWindow::connectDB()
{
    mw_db = QSqlDatabase::addDatabase("QSQLITE");
    mw_db.setDatabaseName("authorisation");
    if(!mw_db.open())
    {
        qDebug() << "Cannot open database: " << mw_db.lastError();
        return false;
    }
    return true;
}

MainWindow::~MainWindow()
{
    if(m_loginSuccesfull)
    {
        QString str_t = "UPDATE userlist "
                        "SET xpos = %2, ypos = %3, width = %4, length = %5 "
                        "WHERE name = '%1';";
        db_input = str_t .arg(m_username)
                       .arg(this->x())
                       .arg(this->y())
                       .arg(this->width())
                       .arg(this->height());
        QSqlQuery query;
        if(!query.exec(db_input))
        {
            qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery() ;
        }
    }
    mw_db.removeDatabase("authorisation");
    qDebug() << "MainWindow Destroyed";
    delete ui;
    exit(0);
}
