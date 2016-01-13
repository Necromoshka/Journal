#ifndef LOGIN_H
#define LOGIN_H
#include <QWidget>
#include "ui_login.h"
#include <QtSql>

class LF : public QWidget, public Ui::loginform
{
    Q_OBJECT
public:
    LF(QWidget *parent = 0);
private slots:
    void slot_login_cheket(void);
signals:
    void signal_admin();
    void signal_user();
    void signal_close();
private:
    QSqlQuery query;
    void closeEvent(QCloseEvent *);
};
#endif // LOGIN

