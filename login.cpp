#include <QtGui>
#include "login.h"

LF::LF(QWidget *parent) : QWidget(parent)
{
    setupUi(this);
this->move(QApplication::desktop()->availableGeometry().center() - this->rect().center());

 //conections
    QObject::connect(quitb,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(loginb,SIGNAL(clicked()),this,SLOT(slot_login_cheket()));
}

void LF::slot_login_cheket(void)
{
    QString str = "SELECT * FROM users";

if (!query.exec(str))
{
    qDebug() << "[!]Unable to make SELECT";
}

QSqlRecord rec = query.record();
QString strLogin;
QString strPasswords;
bool uflag;
bool pflag;
uflag = false;
while (query.next())
{
    strLogin = query.value(rec.indexOf("user")).toString();
    strPasswords = query.value(rec.indexOf("pass")).toString();
    if (strLogin == ulne->text())
    {
       uflag = true;
    }
if (uflag == true)
{
    if (strPasswords == plne->text())
    {
       pflag = true;
    }
}
}

if ((uflag == true) & (pflag == true))
{

    if (ulne->text() == QString("admin")){
        ////////Вызов Сигнала
        emit signal_admin();
        this->hide();
    }
    else
    {
    ////////Вызов Сигнала
     emit signal_user();
    this->hide();
    }
}
else
{
    qDebug() << "bad";
}
}

void LF::closeEvent(QCloseEvent *event)
{

    emit signal_close();
    event->accept();
}
