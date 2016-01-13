/********************************************************************************
** Form generated from reading UI file 'add_user.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_USER_H
#define UI_ADD_USER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admf
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *ulbl;
    QLineEdit *llnEd;
    QLabel *pslbl;
    QLineEdit *passlne;
    QListView *lv;
    QHBoxLayout *horizontalLayout;
    QPushButton *addUbt;
    QPushButton *remUsBt;

    void setupUi(QWidget *admf)
    {
        if (admf->objectName().isEmpty())
            admf->setObjectName(QString::fromUtf8("admf"));
        admf->resize(510, 324);
        gridLayout = new QGridLayout(admf);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ulbl = new QLabel(admf);
        ulbl->setObjectName(QString::fromUtf8("ulbl"));

        verticalLayout->addWidget(ulbl);

        llnEd = new QLineEdit(admf);
        llnEd->setObjectName(QString::fromUtf8("llnEd"));

        verticalLayout->addWidget(llnEd);

        pslbl = new QLabel(admf);
        pslbl->setObjectName(QString::fromUtf8("pslbl"));

        verticalLayout->addWidget(pslbl);

        passlne = new QLineEdit(admf);
        passlne->setObjectName(QString::fromUtf8("passlne"));

        verticalLayout->addWidget(passlne);


        horizontalLayout_2->addLayout(verticalLayout);

        lv = new QListView(admf);
        lv->setObjectName(QString::fromUtf8("lv"));
        lv->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lv->setProperty("showDropIndicator", QVariant(false));
        lv->setAlternatingRowColors(true);

        horizontalLayout_2->addWidget(lv);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addUbt = new QPushButton(admf);
        addUbt->setObjectName(QString::fromUtf8("addUbt"));

        horizontalLayout->addWidget(addUbt);

        remUsBt = new QPushButton(admf);
        remUsBt->setObjectName(QString::fromUtf8("remUsBt"));

        horizontalLayout->addWidget(remUsBt);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        ulbl->setBuddy(llnEd);
        pslbl->setBuddy(passlne);
#endif // QT_NO_SHORTCUT

        retranslateUi(admf);

        QMetaObject::connectSlotsByName(admf);
    } // setupUi

    void retranslateUi(QWidget *admf)
    {
        admf->setWindowTitle(QApplication::translate("admf", "AddUser", 0, QApplication::UnicodeUTF8));
        ulbl->setText(QApplication::translate("admf", "&Login", 0, QApplication::UnicodeUTF8));
        pslbl->setText(QApplication::translate("admf", "&Pass", 0, QApplication::UnicodeUTF8));
        addUbt->setText(QApplication::translate("admf", "Add User", 0, QApplication::UnicodeUTF8));
        remUsBt->setText(QApplication::translate("admf", "Remove User", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class admf: public Ui_admf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_USER_H
