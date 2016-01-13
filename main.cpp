#include <QtGui>
#include <QApplication>
#include "mainwindow.h"
#include <QSplashScreen>
#include <QObject>
//End Sql


int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QSplashScreen splash(QPixmap(":/splash/paint-29329_640.png"));

 //Sql Source
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");


    db.setDatabaseName("customdb");



          if (db.open())
            {
                qDebug() << "[+] Connected to Database File";

            }
            else
            {
                qDebug() << "[!] Database File was not opened";
                return -1;
             }
db.close();
//End Sql Source

//Test Translations
    QTranslator translator;
    translator.load(QString(":/translate/Ru_ru.qm"));
    app.installTranslator(&translator);
//End Translations


MF *pmw;

pmw = new MF(&splash);
pmw->setWindowState(Qt::WindowMaximized);
return app.exec();
}

