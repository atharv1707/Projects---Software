/********************************************************************************
** Form generated from reading UI file 'passwordtablewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDTABLEWIDGET_H
#define UI_PASSWORDTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_passwordtablewidget
{
public:
    QWidget *centralwidget;
    QTableWidget *passwordTableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *passwordtablewidget)
    {
        if (passwordtablewidget->objectName().isEmpty())
            passwordtablewidget->setObjectName("passwordtablewidget");
        passwordtablewidget->resize(800, 600);
        centralwidget = new QWidget(passwordtablewidget);
        centralwidget->setObjectName("centralwidget");
        passwordTableWidget = new QTableWidget(centralwidget);
        passwordTableWidget->setObjectName("passwordTableWidget");
        passwordTableWidget->setGeometry(QRect(155, 31, 461, 321));
        passwordtablewidget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(passwordtablewidget);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        passwordtablewidget->setMenuBar(menubar);
        statusbar = new QStatusBar(passwordtablewidget);
        statusbar->setObjectName("statusbar");
        passwordtablewidget->setStatusBar(statusbar);

        retranslateUi(passwordtablewidget);

        QMetaObject::connectSlotsByName(passwordtablewidget);
    } // setupUi

    void retranslateUi(QMainWindow *passwordtablewidget)
    {
        passwordtablewidget->setWindowTitle(QCoreApplication::translate("passwordtablewidget", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class passwordtablewidget: public Ui_passwordtablewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDTABLEWIDGET_H
