/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginform
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *llbl;
    QLineEdit *ulne;
    QLabel *plbl;
    QLineEdit *plne;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginb;
    QSpacerItem *horizontalSpacer;
    QPushButton *quitb;

    void setupUi(QWidget *loginform)
    {
        if (loginform->objectName().isEmpty())
            loginform->setObjectName(QString::fromUtf8("loginform"));
        loginform->resize(208, 133);
        loginform->setMinimumSize(QSize(208, 133));
        loginform->setMaximumSize(QSize(208, 133));
        widget = new QWidget(loginform);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(3, 4, 201, 121));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        llbl = new QLabel(widget);
        llbl->setObjectName(QString::fromUtf8("llbl"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(llbl->sizePolicy().hasHeightForWidth());
        llbl->setSizePolicy(sizePolicy);

        gridLayout->addWidget(llbl, 0, 0, 1, 1);

        ulne = new QLineEdit(widget);
        ulne->setObjectName(QString::fromUtf8("ulne"));
        sizePolicy.setHeightForWidth(ulne->sizePolicy().hasHeightForWidth());
        ulne->setSizePolicy(sizePolicy);
        ulne->setMouseTracking(false);
        ulne->setFrame(false);
        ulne->setCursorMoveStyle(Qt::VisualMoveStyle);

        gridLayout->addWidget(ulne, 1, 0, 1, 1);

        plbl = new QLabel(widget);
        plbl->setObjectName(QString::fromUtf8("plbl"));
        sizePolicy.setHeightForWidth(plbl->sizePolicy().hasHeightForWidth());
        plbl->setSizePolicy(sizePolicy);
        plbl->setScaledContents(false);

        gridLayout->addWidget(plbl, 2, 0, 1, 1);

        plne = new QLineEdit(widget);
        plne->setObjectName(QString::fromUtf8("plne"));
        sizePolicy.setHeightForWidth(plne->sizePolicy().hasHeightForWidth());
        plne->setSizePolicy(sizePolicy);
        plne->setMouseTracking(false);
        plne->setFrame(false);
        plne->setEchoMode(QLineEdit::Password);
        plne->setCursorMoveStyle(Qt::VisualMoveStyle);

        gridLayout->addWidget(plne, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loginb = new QPushButton(widget);
        loginb->setObjectName(QString::fromUtf8("loginb"));
        sizePolicy.setHeightForWidth(loginb->sizePolicy().hasHeightForWidth());
        loginb->setSizePolicy(sizePolicy);
        loginb->setAutoDefault(true);
        loginb->setDefault(true);
        loginb->setFlat(false);

        horizontalLayout->addWidget(loginb);

        horizontalSpacer = new QSpacerItem(18, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        quitb = new QPushButton(widget);
        quitb->setObjectName(QString::fromUtf8("quitb"));
        sizePolicy.setHeightForWidth(quitb->sizePolicy().hasHeightForWidth());
        quitb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(quitb);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        llbl->setBuddy(ulne);
        plbl->setBuddy(plne);
#endif // QT_NO_SHORTCUT

        retranslateUi(loginform);

        QMetaObject::connectSlotsByName(loginform);
    } // setupUi

    void retranslateUi(QWidget *loginform)
    {
        loginform->setWindowTitle(QApplication::translate("loginform", "Login", 0, QApplication::UnicodeUTF8));
        llbl->setText(QApplication::translate("loginform", "&User", 0, QApplication::UnicodeUTF8));
        plbl->setText(QApplication::translate("loginform", "&Pass", 0, QApplication::UnicodeUTF8));
        loginb->setText(QApplication::translate("loginform", "Login", 0, QApplication::UnicodeUTF8));
        quitb->setText(QApplication::translate("loginform", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class loginform: public Ui_loginform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
