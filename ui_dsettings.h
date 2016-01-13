/********************************************************************************
** Form generated from reading UI file 'dsettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DSETTINGS_H
#define UI_DSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dSettings
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_file;
    QLineEdit *lne_path;
    QToolButton *tb_patch;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chb_splash;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *btn_box;

    void setupUi(QDialog *dSettings)
    {
        if (dSettings->objectName().isEmpty())
            dSettings->setObjectName(QString::fromUtf8("dSettings"));
        dSettings->setWindowModality(Qt::NonModal);
        dSettings->resize(289, 150);
        dSettings->setModal(false);
        gridLayout = new QGridLayout(dSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbl_file = new QLabel(dSettings);
        lbl_file->setObjectName(QString::fromUtf8("lbl_file"));

        horizontalLayout->addWidget(lbl_file);

        lne_path = new QLineEdit(dSettings);
        lne_path->setObjectName(QString::fromUtf8("lne_path"));

        horizontalLayout->addWidget(lne_path);

        tb_patch = new QToolButton(dSettings);
        tb_patch->setObjectName(QString::fromUtf8("tb_patch"));

        horizontalLayout->addWidget(tb_patch);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        chb_splash = new QCheckBox(dSettings);
        chb_splash->setObjectName(QString::fromUtf8("chb_splash"));
        chb_splash->setChecked(true);

        horizontalLayout_2->addWidget(chb_splash);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_box = new QDialogButtonBox(dSettings);
        btn_box->setObjectName(QString::fromUtf8("btn_box"));
        btn_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(btn_box);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        lbl_file->setBuddy(lne_path);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lne_path, tb_patch);
        QWidget::setTabOrder(tb_patch, chb_splash);
        QWidget::setTabOrder(chb_splash, btn_box);

        retranslateUi(dSettings);

        QMetaObject::connectSlotsByName(dSettings);
    } // setupUi

    void retranslateUi(QDialog *dSettings)
    {
        dSettings->setWindowTitle(QApplication::translate("dSettings", "Settings", 0, QApplication::UnicodeUTF8));
        lbl_file->setText(QApplication::translate("dSettings", "&Path to db", 0, QApplication::UnicodeUTF8));
        tb_patch->setText(QApplication::translate("dSettings", "...", 0, QApplication::UnicodeUTF8));
        chb_splash->setText(QApplication::translate("dSettings", "&Splash enable", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dSettings: public Ui_dSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DSETTINGS_H
