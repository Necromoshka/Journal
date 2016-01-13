#ifndef ADDCHANGE_H
#define ADDCHANGE_H
#include <QtWidgets>
#include <QDate>
#include <QtSql>

#include "ui_add_change.h"

class addChForm : public QWidget, public Ui::addChForm
{
    Q_OBJECT
public:
    addChForm(QWidget *parent = 0);
public slots:
    void slot_edit(const QModelIndex&);
    void slot_add(const QModelIndex &);
private:
QString temp;
QDate dt_local;
void closeEvent(QCloseEvent *);
void prepair_form();
QSqlQuery que;
private slots:
    void slot_ok();
    void slot_cancel();
signals:
    void signal_hidForm();
};
#endif // ADDCHANGE

