#ifndef DSETTINGS_H
#define DSETTINGS_H
#include <QtGui>
#include <QDialog>
#include <QFileDialog>
#include "ui_dsettings.h"


class dSt : public QDialog, public Ui::dSettings
{
    Q_OBJECT
public:
    dSt(QWidget *pwgt = 0);
    void set_splash(bool*);
    void set_Pash(QString*);
    bool get_splash();
    QString get_Path();

signals:
    void signal_ok();
private:
    QString Path;
    bool bchb;
private slots:
    void slot_ok();
    void slot_choose_the_path();


};

#endif // DSETTINGS_H
