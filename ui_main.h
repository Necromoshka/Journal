/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QAction *actionQuit;
    QAction *action_About_QT;
    QAction *action_About_Developer;
    QAction *action_Font;
    QAction *action_Main_Settings;
    QAction *action_Help;
    QWidget *mainForm;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b_add;
    QPushButton *b_edit;
    QPushButton *b_delete;
    QPushButton *b_addChange;
    QPushButton *b_editChanges;
    QPushButton *b_deleteChanges;
    QHBoxLayout *horizontalLayout;
    QLineEdit *shlv;
    QPushButton *bSearch;
    QTableView *main_tblv;
    QTableView *change_tblv;
    QMenuBar *mainmenu;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menu_Settings;
    QStatusBar *mainstatusbar;

    void setupUi(QMainWindow *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QString::fromUtf8("MainForm"));
        MainForm->resize(1156, 732);
        actionQuit = new QAction(MainForm);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        action_About_QT = new QAction(MainForm);
        action_About_QT->setObjectName(QString::fromUtf8("action_About_QT"));
        action_About_Developer = new QAction(MainForm);
        action_About_Developer->setObjectName(QString::fromUtf8("action_About_Developer"));
        action_Font = new QAction(MainForm);
        action_Font->setObjectName(QString::fromUtf8("action_Font"));
        action_Main_Settings = new QAction(MainForm);
        action_Main_Settings->setObjectName(QString::fromUtf8("action_Main_Settings"));
        action_Help = new QAction(MainForm);
        action_Help->setObjectName(QString::fromUtf8("action_Help"));
        mainForm = new QWidget(MainForm);
        mainForm->setObjectName(QString::fromUtf8("mainForm"));
        gridLayout = new QGridLayout(mainForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        b_add = new QPushButton(mainForm);
        b_add->setObjectName(QString::fromUtf8("b_add"));

        horizontalLayout_2->addWidget(b_add);

        b_edit = new QPushButton(mainForm);
        b_edit->setObjectName(QString::fromUtf8("b_edit"));

        horizontalLayout_2->addWidget(b_edit);

        b_delete = new QPushButton(mainForm);
        b_delete->setObjectName(QString::fromUtf8("b_delete"));

        horizontalLayout_2->addWidget(b_delete);

        b_addChange = new QPushButton(mainForm);
        b_addChange->setObjectName(QString::fromUtf8("b_addChange"));

        horizontalLayout_2->addWidget(b_addChange);

        b_editChanges = new QPushButton(mainForm);
        b_editChanges->setObjectName(QString::fromUtf8("b_editChanges"));

        horizontalLayout_2->addWidget(b_editChanges);

        b_deleteChanges = new QPushButton(mainForm);
        b_deleteChanges->setObjectName(QString::fromUtf8("b_deleteChanges"));

        horizontalLayout_2->addWidget(b_deleteChanges);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        shlv = new QLineEdit(mainForm);
        shlv->setObjectName(QString::fromUtf8("shlv"));

        horizontalLayout->addWidget(shlv);

        bSearch = new QPushButton(mainForm);
        bSearch->setObjectName(QString::fromUtf8("bSearch"));
        bSearch->setDefault(true);

        horizontalLayout->addWidget(bSearch);


        verticalLayout->addLayout(horizontalLayout);

        main_tblv = new QTableView(mainForm);
        main_tblv->setObjectName(QString::fromUtf8("main_tblv"));
        main_tblv->setEditTriggers(QAbstractItemView::NoEditTriggers);
        main_tblv->setProperty("showDropIndicator", QVariant(false));
        main_tblv->setDragDropOverwriteMode(false);
        main_tblv->setAlternatingRowColors(true);
        main_tblv->setSelectionMode(QAbstractItemView::SingleSelection);
        main_tblv->setSelectionBehavior(QAbstractItemView::SelectRows);
        main_tblv->setSortingEnabled(true);
        main_tblv->horizontalHeader()->setVisible(true);
        main_tblv->horizontalHeader()->setCascadingSectionResizes(true);
        main_tblv->verticalHeader()->setVisible(false);
        main_tblv->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(main_tblv);

        change_tblv = new QTableView(mainForm);
        change_tblv->setObjectName(QString::fromUtf8("change_tblv"));
        change_tblv->setEditTriggers(QAbstractItemView::NoEditTriggers);
        change_tblv->setProperty("showDropIndicator", QVariant(false));
        change_tblv->setDragDropOverwriteMode(false);
        change_tblv->setAlternatingRowColors(true);
        change_tblv->setSelectionMode(QAbstractItemView::SingleSelection);
        change_tblv->setSelectionBehavior(QAbstractItemView::SelectRows);
        change_tblv->setSortingEnabled(true);
        change_tblv->setCornerButtonEnabled(true);
        change_tblv->horizontalHeader()->setCascadingSectionResizes(true);
        change_tblv->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        change_tblv->verticalHeader()->setVisible(false);
        change_tblv->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(change_tblv);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainForm->setCentralWidget(mainForm);
        mainmenu = new QMenuBar(MainForm);
        mainmenu->setObjectName(QString::fromUtf8("mainmenu"));
        mainmenu->setGeometry(QRect(0, 0, 1156, 21));
        mainmenu->setAcceptDrops(true);
        mainmenu->setNativeMenuBar(true);
        menuFile = new QMenu(mainmenu);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(mainmenu);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menu_Settings = new QMenu(mainmenu);
        menu_Settings->setObjectName(QString::fromUtf8("menu_Settings"));
        MainForm->setMenuBar(mainmenu);
        mainstatusbar = new QStatusBar(MainForm);
        mainstatusbar->setObjectName(QString::fromUtf8("mainstatusbar"));
        MainForm->setStatusBar(mainstatusbar);
        QWidget::setTabOrder(b_add, b_edit);
        QWidget::setTabOrder(b_edit, b_delete);
        QWidget::setTabOrder(b_delete, b_addChange);
        QWidget::setTabOrder(b_addChange, b_editChanges);
        QWidget::setTabOrder(b_editChanges, b_deleteChanges);
        QWidget::setTabOrder(b_deleteChanges, shlv);
        QWidget::setTabOrder(shlv, bSearch);
        QWidget::setTabOrder(bSearch, main_tblv);
        QWidget::setTabOrder(main_tblv, change_tblv);

        mainmenu->addAction(menuFile->menuAction());
        mainmenu->addAction(menu_Settings->menuAction());
        mainmenu->addAction(menuAbout->menuAction());
        menuFile->addAction(actionQuit);
        menuAbout->addAction(action_About_Developer);
        menuAbout->addAction(action_Help);
        menuAbout->addAction(action_About_QT);
        menu_Settings->addAction(action_Main_Settings);
        menu_Settings->addAction(action_Font);

        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "Journal", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainForm", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainForm", "Alt+Q", 0, QApplication::UnicodeUTF8));
        action_About_QT->setText(QApplication::translate("MainForm", "&About QT", 0, QApplication::UnicodeUTF8));
        action_About_Developer->setText(QApplication::translate("MainForm", "&About Developer", 0, QApplication::UnicodeUTF8));
        action_Font->setText(QApplication::translate("MainForm", "&Font", 0, QApplication::UnicodeUTF8));
        action_Main_Settings->setText(QApplication::translate("MainForm", "&Main Settings", 0, QApplication::UnicodeUTF8));
        action_Main_Settings->setShortcut(QApplication::translate("MainForm", "Alt+S", 0, QApplication::UnicodeUTF8));
        action_Help->setText(QApplication::translate("MainForm", "&About Programm", 0, QApplication::UnicodeUTF8));
        action_Help->setShortcut(QApplication::translate("MainForm", "F1", 0, QApplication::UnicodeUTF8));
        b_add->setText(QApplication::translate("MainForm", "Add", 0, QApplication::UnicodeUTF8));
        b_edit->setText(QApplication::translate("MainForm", "Edit", 0, QApplication::UnicodeUTF8));
        b_delete->setText(QApplication::translate("MainForm", "Delete", 0, QApplication::UnicodeUTF8));
        b_addChange->setText(QApplication::translate("MainForm", "Add Change", 0, QApplication::UnicodeUTF8));
        b_editChanges->setText(QApplication::translate("MainForm", "Edit Change", 0, QApplication::UnicodeUTF8));
        b_deleteChanges->setText(QApplication::translate("MainForm", "Delete Change", 0, QApplication::UnicodeUTF8));
        bSearch->setText(QApplication::translate("MainForm", "&Search", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainForm", "&File", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("MainForm", "&Help", 0, QApplication::UnicodeUTF8));
        menu_Settings->setTitle(QApplication::translate("MainForm", "&Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
