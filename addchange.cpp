#include <QtGui>
#include "addchange.h"

addChForm::addChForm(QWidget *parent) : QWidget(parent)
{
    setupUi(this);
    this->move(QApplication::desktop()->availableGeometry().center() - this->rect().center());

//connects

QObject::connect(okbut,SIGNAL(clicked()),this,SLOT(slot_ok()));
QObject::connect(cencelbut,SIGNAL(clicked()),this,SLOT(slot_cancel()));

}


void addChForm::slot_edit(const QModelIndex &cind)
{
    pltw->setText(cind.sibling(cind.row(),2).data().toString());
    dt_local = QDate::fromString(cind.sibling(cind.row(),1).data().toString(),"dd.MM.yyyy");
    dwg->setDate(dt_local);
    temp = "UPDATE change SET date='%1', num = '%2' WHERE id_change = '" + cind.sibling(cind.row(),0).data().toString() +"';";
    this->show();
}

void addChForm::slot_add(const QModelIndex& mind)
{
    prepair_form();
    temp = "INSERT INTO change (date,num,id) VALUES ('%1', '%2', '" + mind.sibling(mind.row(),0).data().toString() + "');";
    this->show();
}
void addChForm::slot_ok()
{
    dt_local = dwg->date();
    temp = temp.arg(dt_local.toString("dd.MM.yyyy"))
                           .arg(pltw->toPlainText());
    if (!que.exec(temp))
    {
        qDebug() << que.lastError();
    }
    prepair_form();
    this->hide();
    emit signal_hidForm();
}

void addChForm::slot_cancel()
{

    prepair_form();
    this->hide();
    emit signal_hidForm();
}

void addChForm::closeEvent(QCloseEvent *event)
{

    emit signal_hidForm();
    event->accept();
}

void addChForm::prepair_form()
{
    dt_local = QDate::currentDate();
    dwg->setDate(dt_local);
    pltw->clear();
}
