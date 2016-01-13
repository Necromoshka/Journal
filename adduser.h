#ifndef ADDUSER_H
#define ADDUSER_H
#include <QWidget>
#include "ui_add_user.h"
#include <QtSql>

class admf : public QWidget, public Ui::admf
{
    Q_OBJECT
public:
    admf(QWidget *parent = 0);
private:
    QSqlQueryModel querymodel;
    QSqlQuery que;
    QString str_query;
    QString str;
private slots:
    void slot_user_add();
    void slot_user_remove();
    void slot_set_lsv();
    void slot_lsv_case(const QModelIndex &);
private:
    void query_exec();
    void closeEvent(QCloseEvent *);
signals:
    void signal_ch_good();
    void signal_close();
};
#endif // ADDUSER

