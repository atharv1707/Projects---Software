/********************************************************************************
** Form generated from reading UI file 'secondpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDPAGE_H
#define UI_SECONDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondPage
{
public:
    QWidget *centralwidget;
    QPushButton *addpassword;
    QPushButton *viewpassword;
    QPushButton *exit;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondPage)
    {
        if (SecondPage->objectName().isEmpty())
            SecondPage->setObjectName("SecondPage");
        SecondPage->resize(800, 600);
        centralwidget = new QWidget(SecondPage);
        centralwidget->setObjectName("centralwidget");
        addpassword = new QPushButton(centralwidget);
        addpassword->setObjectName("addpassword");
        addpassword->setGeometry(QRect(70, 190, 121, 29));
        viewpassword = new QPushButton(centralwidget);
        viewpassword->setObjectName("viewpassword");
        viewpassword->setGeometry(QRect(300, 190, 121, 29));
        exit = new QPushButton(centralwidget);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(540, 190, 111, 29));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(550, 230, 256, 192));
        SecondPage->setCentralWidget(centralwidget);
        tableWidget->raise();
        addpassword->raise();
        viewpassword->raise();
        exit->raise();
        menubar = new QMenuBar(SecondPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        SecondPage->setMenuBar(menubar);
        statusbar = new QStatusBar(SecondPage);
        statusbar->setObjectName("statusbar");
        SecondPage->setStatusBar(statusbar);

        retranslateUi(SecondPage);

        QMetaObject::connectSlotsByName(SecondPage);
    } // setupUi

    void retranslateUi(QMainWindow *SecondPage)
    {
        SecondPage->setWindowTitle(QCoreApplication::translate("SecondPage", "MainWindow", nullptr));
        addpassword->setText(QCoreApplication::translate("SecondPage", "Add Password", nullptr));
        viewpassword->setText(QCoreApplication::translate("SecondPage", "View Passwords", nullptr));
        exit->setText(QCoreApplication::translate("SecondPage", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondPage: public Ui_SecondPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDPAGE_H
