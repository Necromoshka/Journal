#include <QtGui>
#include "adduser.h"

admf::admf(QWidget *parent) : QWidget(parent)
{
    setupUi(this);
    this->move(QApplication::desktop()->availableGeometry().center() - this->rect().center());
    lv->setModel(&querymodel);


    str_query = "SELECT user From Users";

    query_exec();


//conects

    QObject::connect(addUbt,SIGNAL(clicked()),this,SLOT(slot_user_add()));
    QObject::connect(remUsBt,SIGNAL(clicked()),this,SLOT(slot_user_remove()));
    QObject::connect(this,SIGNAL(signal_ch_good()),this,SLOT(slot_set_lsv()));
    QObject::connect(lv,SIGNAL(clicked(const QModelIndex&)),this, SLOT(slot_lsv_case(const QModelIndex&)));
}


void admf::slot_user_add()

{
     str = "INSERT INTO  Users (user, pass) VALUES ('%1', '%2');";
    str = str.arg(llnEd->text())
            .arg(passlne->text());

if (!que.exec(str))
{
    qDebug() << "[!]Unable to make INSERT";
}
else
{
    emit signal_ch_good();
}
}


void admf::slot_user_remove()

{
if (!que.exec(str))
{
   qDebug() << "[!]Unable to make SQL query";
}
else
{
   emit signal_ch_good();
}
}

void admf::slot_set_lsv()
{
    query_exec();
}

void admf::query_exec()
{
    querymodel.setQuery(str_query);
    if (querymodel.lastError().isValid())
    {
        qDebug() << querymodel.lastError();
    }
}
void admf::slot_lsv_case(const QModelIndex &ind)
{       if (!(ind.data().toString() == QString("admin")))
    {
        str = "DELETE FROM Users Where Users.user = '%1';";

        str = str.arg(ind.data().toString());
    }
}

void admf::closeEvent(QCloseEvent *event)
{

    emit signal_close();
    event->accept();
}
