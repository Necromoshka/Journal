#include "dsettings.h"



dSt::dSt(QWidget *pwgt) : QDialog(pwgt)
{



    setupUi(this); // construct form





//conections

connect(btn_box,SIGNAL(accepted()),this,SLOT(slot_ok()));
connect(btn_box,SIGNAL(rejected()),this,SLOT(reject()));
connect(this,SIGNAL(signal_ok()),this,SLOT(accept()));
connect(tb_patch,SIGNAL(clicked()),this,SLOT(slot_choose_the_path()));

}

void dSt::set_splash(bool *flag)
{
    bchb =  * flag;
    chb_splash->setChecked(bchb);
}

void dSt::set_Pash(QString *str)
{
    Path =  * str;
     lne_path->setText(Path);
}

bool dSt::get_splash()
{
    return  bchb;
}

QString dSt::get_Path()
{
    return  Path;
}

void dSt::slot_ok()
{
    Path = lne_path->text();
    bchb = chb_splash->isChecked();
    emit signal_ok();
}

void dSt::slot_choose_the_path()
{
    Path = QFileDialog::getExistingDirectory(this,tr("Path to database"),"");
    lne_path->setText(Path);
}
