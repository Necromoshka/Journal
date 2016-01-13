#include <QtGui>
#include "mainwindow.h"


MF::MF(QSplashScreen *psplash, QWidget *parent) : QMainWindow(parent),settings("NNCSM","Journal")


{
//load settings


 setupUi(this);
 plf = new LF;
 pdst = new dSt(this);


    settings.beginGroup("/Settings");
         Path = settings.value("/Path","./").toString();
            splash =  settings.value("/Splash",true).toBool();
            font.fromString(settings.value("/Font",font.toString()).toString());
     settings.endGroup();
     main_tblv->setFont(font);
     change_tblv->setFont(font);
     pdst->set_Pash(&Path);
     pdst->set_splash(&splash);
if(splash) psplash->show();
ldb = QSqlDatabase::database();

ldb.setDatabaseName(Path + "/db.sqlite");
if(!ldb.open())
{
    this->close();
}
QTime time;
time.start();
for(int i = 0; i < 100;)
{
    if (time.elapsed() > 40)
    {
        time.start();
        ++i;
    }
    psplash->showMessage(tr("Loading modules:") + QString::number(i) + "%",
                               Qt::AlignCenter | Qt::AlignBottom  , Qt::white);
}
//Login

psplash->finish(plf);

plf->show();
//Login End


    this->move(QApplication::desktop()->availableGeometry().center() - this->rect().center());

    sqtmodel.setTable("main");
    sqtmodel.select();

    sqtmodel.setHeaderData(1,Qt::Horizontal,QObject::tr("id"));
    sqtmodel.setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
    sqtmodel.setHeaderData(3,Qt::Horizontal,QObject::tr("Reg_Num"));
    sqtmodel.setHeaderData(4,Qt::Horizontal,QObject::tr("Obozn_Tu"));
    sqtmodel.setHeaderData(5,Qt::Horizontal,QObject::tr("Naim_Tu"));
    sqtmodel.setHeaderData(6,Qt::Horizontal,QObject::tr("Razrab_Tu"));
    sqtmodel.setHeaderData(8,Qt::Horizontal,QObject::tr("Prim"));


    main_tblv->setModel(&sqtmodel); // model for main

    sqqmodel.setTable("change");
    sqqmodel.setHeaderData(1,Qt::Horizontal,QObject::tr("date"));
    sqqmodel.setHeaderData(2,Qt::Horizontal,QObject::tr("number"));


    change_tblv->setModel(&sqqmodel); // model for changes
//proxy model for search
     prxmod.setSourceModel(&sqtmodel); //model fo search
     prxmod.setFilterKeyColumn(-1); //search for all 0 for 1
//delete unuse row
    main_tblv->hideColumn(0);
    main_tblv->hideColumn(7);
    main_tblv->hideColumn(9);

    change_tblv->hideColumn(0);
    change_tblv->hideColumn(3);
    change_tblv->hideColumn(4);
    change_tblv->hideColumn(5);
//end.
     main_tblv->setModel(&prxmod); //install proxy model

     main_tblv->resizeRowsToContents();
     main_tblv->resizeColumnsToContents();

// form

padduser = new admf();
pmAdd = new mAdd();
pchf = new addChForm();

//conections
////////////////////////////////////adm form
QObject::connect(padduser,SIGNAL(signal_close()),this,SLOT(close())); // call destructor
//end adm form

//////////////////////////////////login form
QObject::connect(plf,SIGNAL(signal_admin()),padduser,SLOT(show())); // if admin login show user add form
QObject::connect(plf,SIGNAL(signal_user()),this,SLOT(show())); // if user login show main form
QObject::connect(plf,SIGNAL(signal_close()),this,SLOT(close())); //call destruktor
//end login form

////////////////////////////////add main form
QObject::connect(pmAdd,SIGNAL(signal_hidForm()),this,SLOT(slot_en_main())); // enable form refresh main_tblv
//end add main form


//////////////////////////////add ch form
QObject::connect(pchf,SIGNAL(signal_hidForm()),this,SLOT(slot_en_main())); // enable main form
//end add ch form

//////////////////////////////main form

QObject::connect(main_tblv,SIGNAL(clicked(const QModelIndex&)),this,SLOT(slot_change_case(const QModelIndex&))); // case change
//search
QObject::connect(bSearch,SIGNAL(clicked()),this,SLOT(slot_search())); // search
//add main
QObject::connect(b_add,SIGNAL(clicked()),this,SLOT(slot_add())); // Call slot that transmits a signal form to be added.
QObject::connect(this,SIGNAL(signal_clicked_add()),pmAdd,SLOT(slot_add())); //method call form to add
//edit main
QObject::connect(b_edit,SIGNAL(clicked()),this,SLOT(slot_edit_main()));  // edit button
QObject::connect(this,SIGNAL(signal_clicked_edit(const QModelIndex&)),pmAdd,SLOT(slot_changes(const QModelIndex&))); // method call from to change
// del main
QObject::connect(b_delete,SIGNAL(clicked()),this,SLOT(slot_delete())); //delete button call slot for emit signals
QObject::connect(this,SIGNAL(signal_clicked_delete(const QModelIndex&)),this,SLOT(slot_delete_main(const QModelIndex&))); // remove row from main_tblv
//add ch
QObject::connect(b_addChange,SIGNAL(clicked()),this,SLOT(slot_ch_add()));// generate signal for add ch
QObject::connect(this,SIGNAL(signal_clicked_ch_add(const QModelIndex&)),pchf,SLOT(slot_add(const QModelIndex&))); //add change
// edit ch
QObject::connect(b_editChanges,SIGNAL(clicked()),this,SLOT(slot_ch_changes())); //generate signal for ed ch
QObject::connect(this,SIGNAL(signal_clicked_ch_chenges(const QModelIndex&)),pchf,SLOT(slot_edit(const QModelIndex&))); // call edit changes
//del ch
QObject::connect(b_deleteChanges,SIGNAL(clicked()),this,SLOT(slot_ch_delete())); //generate signal for delete ch
QObject::connect(this,SIGNAL(signal_clicked_ch_delete(const QModelIndex&)),this,SLOT(slot_delete_change(const QModelIndex&))); //delete ch
//end main form

//connect menu
QObject::connect(actionQuit,SIGNAL(triggered()),this,SLOT(close())); // quit
QObject::connect(action_Font,SIGNAL(triggered()),this,SLOT(slot_set_font())); // Set Font
QObject::connect(action_Main_Settings,SIGNAL(triggered()),this,SLOT(slot_settings()));  //settings
QObject::connect(action_About_Developer,SIGNAL(triggered()),this,SLOT(slot_about())); //about
QObject::connect(action_About_QT,SIGNAL(triggered()),this,SLOT(slot_aboutQt())); //aboutQt
QObject::connect(action_Help,SIGNAL(triggered()),this,SLOT(slot_help())); // about programm
//end connect menu
/////////////////////////connection for save settings

}

void MF::slot_change_case(const QModelIndex & id)
{
    QModelIndex ind = sqtmodel.index(id.row(),0,QModelIndex());
    QVariant value = sqtmodel.data(ind);




QString str_query = "id = %1";
str_query = str_query.arg(value.toInt());

sqqmodel.setFilter(str_query);
sqqmodel.select();
if (sqqmodel.lastError().isValid())
{
    qDebug() << sqqmodel.lastError();
}
change_tblv->resizeRowsToContents();

}

void MF::slot_search()
{

    QString strSearch = shlv->text();
    this->prxmod.setFilterWildcard(strSearch);


}

void MF::slot_ch_add()
{

    const QModelIndex mind = main_tblv->currentIndex();
    if(mind.isValid())
    {
        this->setEnabled(false);
        emit signal_clicked_ch_add(mind);
    }
}

void MF::slot_ch_changes()
{


    const QModelIndex chind = change_tblv->currentIndex();
    if(chind.isValid())
    {
        this->setEnabled(false);
        emit signal_clicked_ch_chenges(chind);
    }
    else
    {
        QMessageBox::information(this,tr("Info"),tr("Choose the something!"));
    }
}

void MF::slot_ch_delete()
{

    QModelIndex chind = change_tblv->currentIndex();
    if(chind.isValid())
    {
        int n = QMessageBox::warning(this,tr("Warning"),tr("Information will be lost \n  Are you sure? "),QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        if (n==QMessageBox::Yes)  emit signal_clicked_ch_delete(chind);
    }
    else
    {
         QMessageBox::information(this,tr("Info"),tr("Choose the something!"));
    }
}

void MF::slot_delete_change( const QModelIndex &chind)
{
    if (!sqqmodel.removeRow(chind.row()))
    {
        qDebug() << sqqmodel.lastError();
    }
    sqqmodel.select();
}

void MF::slot_set_font()
{
    bool bOk;
    font = QFontDialog::getFont(&bOk,this);
    if (bOk)
    {
        main_tblv->setFont(font);
        change_tblv->setFont(font);
        emit signal_font_ch();

    }
}

void MF::slot_settings()
{
    pdst->show();

    if(pdst->exec())
    {
        emit signal_setings_ch();
    }
}

void MF::slot_about()
{
    QMessageBox::about(this,tr("About developer"),tr("This Proggramm develop for NNCSM.\n"
                                                     "Developer Klimets Sergey Vadimovich. \n"
                                                     " 2015 year."));
}

void MF::slot_aboutQt()
{
    QMessageBox::aboutQt(this,tr("About Qt"));
}

void MF::slot_help()
{
    QMessageBox::about(this,tr("About Programm"),tr("Programm Catalog V 1.1 \n"
                                                                                " 2015 year"));
}


void MF::slot_edit_main()
{
  const QModelIndex ind = main_tblv->currentIndex();
  if(ind.isValid())
  {
    this->setEnabled(false);
    emit signal_clicked_edit(ind);
  }
  else
  {
      QMessageBox::information(this,tr("Info"),tr("Choose the something!"));
  }
}

void MF::slot_en_main()
{
    this->setEnabled(true);
    this->sqtmodel.select();
    this->sqqmodel.select();
}
void MF::slot_add()
{
     this->setEnabled(false);
    emit signal_clicked_add();
}

void MF::slot_delete_main(const QModelIndex &ind)
{


if (!sqqmodel.removeRows(0,sqqmodel.rowCount()))
{
      qDebug() << sqqmodel.lastError();
}

sqqmodel.select();
    if (!sqtmodel.removeRow(ind.row()))
    {
       // QMessageBox::critical(this,tr("Atantion"),tr("critical SQL Error \n" + sqtmodel.lastError() ));
        qDebug() << sqtmodel.lastError();
    }
    sqtmodel.select();
}

void MF::slot_delete()
{
    const QModelIndex ind = main_tblv->currentIndex();
    if (ind.isValid())
    {
        int n = QMessageBox::warning(this,tr("Warning"),tr("Information will be lost \n Are you sure? "),QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        if (n==QMessageBox::Yes)   emit signal_clicked_delete(ind);
    }
    else
    {
        QMessageBox::information(this,tr("Info"),tr("Choose the something!"));
    }
}

void MF::closeEvent(QCloseEvent *event)
{
    this->~MF();

    event->accept();
}

/*virtual*/ MF::~MF()
{
    settings.beginGroup("/Settings");
        settings.setValue("/Path", pdst->get_Path());
        settings.setValue("/Splash",pdst->get_splash());
        settings.setValue("/Font", font.toString());
    settings.endGroup();

   ldb.close();

    delete padduser;
    delete pmAdd;
    delete pchf;
    delete plf;


}
