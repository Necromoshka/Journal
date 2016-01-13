#include <QtGui>
#include "addmain.h"

mAdd::mAdd(QWidget *parent) : QWidget(parent)
{
    setupUi(this);
    this->move(QApplication::desktop()->availableGeometry().center() - this->rect().center());
//connects
QObject::connect(b_ok,SIGNAL(clicked()),this,SLOT(slot_ok()));
QObject::connect(b_cancel,SIGNAL(clicked()),this,SLOT(slot_cancel()));


}

void mAdd::slot_changes(const QModelIndex &ind)
{
    id = ind.sibling(ind.row(),1);
    lne_num->setText((id.data()).toString()); //num set
 //Date set
    id = ind.sibling(ind.row(),2);
    temp = (id.data()).toString(); // get day string
//int year,day,month;
    //day = (temp.left(2)).toInt();

    //month = (temp.mid(3,2)).toInt();

    //year =  (temp.right(4)).toInt();

   // dt_local.setDate(year,month,day);
    dt_local = QDate::fromString(temp,"dd.MM.yyyy");
    dtw->setDate(dt_local);


//end
     id = ind.sibling(ind.row(),3);
     lne_regNum->setText((id.data()).toString()); //set Reg Num
     id = ind.sibling(ind.row(),4);
     lne_oTu->setText((id.data()).toString()); //set o_Tu
     id = ind.sibling(ind.row(),5);
     lne_NTU->setText((id.data()).toString());// set Name TU
     id = ind.sibling(ind.row(),6);
     lne_RTU->setText((id.data()).toString()); //set developer TU
     id = ind.sibling(ind.row(),8);
     lne_Prim->setText((id.data()).toString()); //set note

     id = ind.sibling(ind.row(),0);

    temp = "UPDATE main SET num = '%1', date = '%2' , reg_num = '%3', o_tu = '%4', name_tu = '%5', dev_tu = '%6', prim = '%7' WHERE id = '" + (id.data()).toString() + "';" ;//';";


    this->show();


}

void mAdd::slot_add()
{
    prepair_form();
    temp = "INSERT INTO main (num, date, reg_num, o_tu, name_tu, dev_tu, prim, ch_tu_flag , flag ) VALUES (  '%1', '%2', '%3', '%4', '%5', '%6', '%7', '0', '0');";

    this->show();

}

void mAdd::prepair_form()
{
    lne_NTU->setText("");
    lne_num->setText("");
    lne_oTu->setText("");
    lne_Prim->setText("");
    lne_regNum->setText("");
    lne_RTU->setText("");
    dt_local = QDate::currentDate();
    dtw->setDate(dt_local);
}

void mAdd::slot_ok()
{
    dt_local = dtw->date(); // get date
    QString tmp = dt_local.toString("dd.MM.yyyy");//  QString::number(dt_local.day()) + '.' + QString::number(dt_local.month()) + '.' + QString::number(dt_local.year());
    temp = temp.arg(lne_num->text())
                           .arg(tmp)
                           .arg(lne_regNum->text())
                           .arg(lne_oTu->text())
                           .arg(lne_NTU->text())
                           .arg(lne_RTU->text())
                           .arg(lne_Prim->text());
    if (!que.exec(temp))
    {
        qDebug() << que.lastError();
    }

    this->hide();
    emit signal_hidForm();
}

void mAdd::slot_cancel()
{
        prepair_form();
        this->hide();
         emit signal_hidForm();
}

void mAdd::closeEvent(QCloseEvent *event)
{
    emit signal_hidForm();
    event->accept();
}

