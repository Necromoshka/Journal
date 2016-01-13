#ifndef MAIN_H
#define MAIN_H
#include <QMainWindow>
#include <QtSql>
#include <QSortFilterProxyModel>
#include <QMessageBox>
#include <QFont>
#include <QFontDialog>
#include <QSettings>
#include <QSplashScreen>
#include "ui_main.h"
#include "login.h"
#include "adduser.h"
#include "addmain.h"
#include "addchange.h"
#include "dsettings.h"


class MF : public QMainWindow, public Ui::MainForm
{
    Q_OBJECT
public:
    MF(QSplashScreen *,QWidget *parent = 0);
virtual ~MF();
private:
    QSqlDatabase ldb;
    void closeEvent(QCloseEvent *);
     QSqlTableModel sqtmodel;
     QSqlTableModel sqqmodel;
     QSortFilterProxyModel prxmod;

     LF *plf;
     admf *padduser;
     mAdd *pmAdd;
     addChForm *pchf;
     dSt *pdst; // not deleted because class main window Care him.
    QString Path;
    bool splash;
     QFont font;
    QSettings settings;

public slots:
    void slot_change_case(const QModelIndex &);

private slots:
    void slot_edit_main();
    void slot_en_main();
    void slot_add();
    void slot_delete_main(const QModelIndex &);
    void slot_delete();
    void slot_search();
    void slot_ch_add();
    void slot_ch_changes();
    void slot_ch_delete();
    void slot_delete_change(const QModelIndex&);
    void slot_set_font();
    void slot_settings();
    void slot_about();
    void slot_aboutQt();
    void slot_help();
signals:
    void signal_clicked_edit(const QModelIndex);
    void signal_clicked_add();
    void signal_clicked_delete(const QModelIndex);
    void signal_clicked_ch_add(const QModelIndex&);
    void signal_clicked_ch_chenges(const QModelIndex&);
    void signal_clicked_ch_delete(const QModelIndex&);
    void signal_font_ch();
    void signal_setings_ch();
};

#endif // MAIN_H

