#ifndef ADDMAIN_H
#define ADDMAIN_H
#include <QWidget>
#include <QtSql>
#include "ui_add_main.h"
#include <QDate>

class mAdd : public QWidget, public Ui::mAdd
{
    Q_OBJECT
public:
    mAdd(QWidget *parent = 0);
public slots:
    void slot_changes(const QModelIndex&);
    void slot_add();
private:
    void prepair_form();
    void closeEvent(QCloseEvent *);
    QDate dt_local;
    QSqlQuery que;
    QModelIndex id ;
    QString temp;
private slots:
    void slot_ok();
    void slot_cancel();
signals:
    void signal_hidForm();
};
#endif // ADDMAIN

