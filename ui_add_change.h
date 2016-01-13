/********************************************************************************
** Form generated from reading UI file 'add_change.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_CHANGE_H
#define UI_ADD_CHANGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addChForm
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *dwg;
    QLabel *Date;
    QTextEdit *pltw;
    QHBoxLayout *horizontalLayout;
    QPushButton *okbut;
    QSpacerItem *horizontalSpacer;
    QPushButton *cencelbut;

    void setupUi(QWidget *addChForm)
    {
        if (addChForm->objectName().isEmpty())
            addChForm->setObjectName(QString::fromUtf8("addChForm"));
        addChForm->resize(268, 259);
        addChForm->setMinimumSize(QSize(268, 259));
        addChForm->setMaximumSize(QSize(400, 300));
        gridLayout = new QGridLayout(addChForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dwg = new QDateEdit(addChForm);
        dwg->setObjectName(QString::fromUtf8("dwg"));
        dwg->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dwg);

        Date = new QLabel(addChForm);
        Date->setObjectName(QString::fromUtf8("Date"));

        horizontalLayout_2->addWidget(Date);


        verticalLayout->addLayout(horizontalLayout_2);

        pltw = new QTextEdit(addChForm);
        pltw->setObjectName(QString::fromUtf8("pltw"));

        verticalLayout->addWidget(pltw);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        okbut = new QPushButton(addChForm);
        okbut->setObjectName(QString::fromUtf8("okbut"));

        horizontalLayout->addWidget(okbut);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cencelbut = new QPushButton(addChForm);
        cencelbut->setObjectName(QString::fromUtf8("cencelbut"));

        horizontalLayout->addWidget(cencelbut);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        Date->setBuddy(dwg);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(dwg, pltw);
        QWidget::setTabOrder(pltw, okbut);
        QWidget::setTabOrder(okbut, cencelbut);

        retranslateUi(addChForm);

        QMetaObject::connectSlotsByName(addChForm);
    } // setupUi

    void retranslateUi(QWidget *addChForm)
    {
        addChForm->setWindowTitle(QApplication::translate("addChForm", "Add Change", 0, QApplication::UnicodeUTF8));
        Date->setText(QApplication::translate("addChForm", "&Date", 0, QApplication::UnicodeUTF8));
        okbut->setText(QApplication::translate("addChForm", "ADD", 0, QApplication::UnicodeUTF8));
        cencelbut->setText(QApplication::translate("addChForm", "CENCEL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addChForm: public Ui_addChForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CHANGE_H
