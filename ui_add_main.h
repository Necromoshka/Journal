/********************************************************************************
** Form generated from reading UI file 'add_main.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_MAIN_H
#define UI_ADD_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mAdd
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lne_num;
    QLabel *lbl_num;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *dtw;
    QLabel *lbl_dt;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lne_regNum;
    QLabel *lbl_regNum;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lne_oTu;
    QLabel *lbl_oTu;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lne_NTU;
    QLabel *lbl_nTu;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lne_RTU;
    QLabel *lbl_razTu;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lne_Prim;
    QLabel *lbl_prim;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *b_ok;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_cancel;

    void setupUi(QWidget *mAdd)
    {
        if (mAdd->objectName().isEmpty())
            mAdd->setObjectName(QString::fromUtf8("mAdd"));
        mAdd->resize(917, 548);
        mAdd->setMinimumSize(QSize(917, 548));
        mAdd->setMaximumSize(QSize(1125, 743));
        gridLayout = new QGridLayout(mAdd);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lne_num = new QLineEdit(mAdd);
        lne_num->setObjectName(QString::fromUtf8("lne_num"));

        horizontalLayout->addWidget(lne_num);

        lbl_num = new QLabel(mAdd);
        lbl_num->setObjectName(QString::fromUtf8("lbl_num"));

        horizontalLayout->addWidget(lbl_num);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dtw = new QDateEdit(mAdd);
        dtw->setObjectName(QString::fromUtf8("dtw"));
        dtw->setWrapping(true);
        dtw->setCalendarPopup(true);
        dtw->setTimeSpec(Qt::LocalTime);

        horizontalLayout_2->addWidget(dtw);

        lbl_dt = new QLabel(mAdd);
        lbl_dt->setObjectName(QString::fromUtf8("lbl_dt"));

        horizontalLayout_2->addWidget(lbl_dt);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lne_regNum = new QLineEdit(mAdd);
        lne_regNum->setObjectName(QString::fromUtf8("lne_regNum"));

        horizontalLayout_3->addWidget(lne_regNum);

        lbl_regNum = new QLabel(mAdd);
        lbl_regNum->setObjectName(QString::fromUtf8("lbl_regNum"));

        horizontalLayout_3->addWidget(lbl_regNum);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lne_oTu = new QLineEdit(mAdd);
        lne_oTu->setObjectName(QString::fromUtf8("lne_oTu"));

        horizontalLayout_4->addWidget(lne_oTu);

        lbl_oTu = new QLabel(mAdd);
        lbl_oTu->setObjectName(QString::fromUtf8("lbl_oTu"));

        horizontalLayout_4->addWidget(lbl_oTu);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lne_NTU = new QLineEdit(mAdd);
        lne_NTU->setObjectName(QString::fromUtf8("lne_NTU"));

        horizontalLayout_5->addWidget(lne_NTU);

        lbl_nTu = new QLabel(mAdd);
        lbl_nTu->setObjectName(QString::fromUtf8("lbl_nTu"));

        horizontalLayout_5->addWidget(lbl_nTu);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lne_RTU = new QLineEdit(mAdd);
        lne_RTU->setObjectName(QString::fromUtf8("lne_RTU"));

        horizontalLayout_6->addWidget(lne_RTU);

        lbl_razTu = new QLabel(mAdd);
        lbl_razTu->setObjectName(QString::fromUtf8("lbl_razTu"));

        horizontalLayout_6->addWidget(lbl_razTu);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lne_Prim = new QLineEdit(mAdd);
        lne_Prim->setObjectName(QString::fromUtf8("lne_Prim"));

        horizontalLayout_7->addWidget(lne_Prim);

        lbl_prim = new QLabel(mAdd);
        lbl_prim->setObjectName(QString::fromUtf8("lbl_prim"));

        horizontalLayout_7->addWidget(lbl_prim);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        b_ok = new QPushButton(mAdd);
        b_ok->setObjectName(QString::fromUtf8("b_ok"));

        horizontalLayout_8->addWidget(b_ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        b_cancel = new QPushButton(mAdd);
        b_cancel->setObjectName(QString::fromUtf8("b_cancel"));

        horizontalLayout_8->addWidget(b_cancel);


        verticalLayout->addLayout(horizontalLayout_8);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        lbl_num->setBuddy(lne_num);
        lbl_dt->setBuddy(dtw);
        lbl_regNum->setBuddy(lne_regNum);
        lbl_oTu->setBuddy(lne_oTu);
        lbl_nTu->setBuddy(lne_NTU);
        lbl_razTu->setBuddy(lne_RTU);
        lbl_prim->setBuddy(lne_Prim);
#endif // QT_NO_SHORTCUT

        retranslateUi(mAdd);

        QMetaObject::connectSlotsByName(mAdd);
    } // setupUi

    void retranslateUi(QWidget *mAdd)
    {
        mAdd->setWindowTitle(QApplication::translate("mAdd", "Add", 0, QApplication::UnicodeUTF8));
        lbl_num->setText(QApplication::translate("mAdd", "&Number", 0, QApplication::UnicodeUTF8));
        lbl_dt->setText(QApplication::translate("mAdd", "&Date", 0, QApplication::UnicodeUTF8));
        lbl_regNum->setText(QApplication::translate("mAdd", "&Reg_Num", 0, QApplication::UnicodeUTF8));
        lbl_oTu->setText(QApplication::translate("mAdd", "&O_TU", 0, QApplication::UnicodeUTF8));
        lbl_nTu->setText(QApplication::translate("mAdd", "&N_TU", 0, QApplication::UnicodeUTF8));
        lbl_razTu->setText(QApplication::translate("mAdd", "&Razr_TU", 0, QApplication::UnicodeUTF8));
        lbl_prim->setText(QApplication::translate("mAdd", "&Prim", 0, QApplication::UnicodeUTF8));
        b_ok->setText(QApplication::translate("mAdd", "Ok", 0, QApplication::UnicodeUTF8));
        b_cancel->setText(QApplication::translate("mAdd", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mAdd: public Ui_mAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MAIN_H
