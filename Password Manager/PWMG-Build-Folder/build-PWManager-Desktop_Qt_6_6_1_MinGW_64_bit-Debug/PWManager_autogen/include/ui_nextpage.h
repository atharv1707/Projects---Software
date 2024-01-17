/********************************************************************************
** Form generated from reading UI file 'nextpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXTPAGE_H
#define UI_NEXTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NextPage
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *NextPage)
    {
        if (NextPage->objectName().isEmpty())
            NextPage->setObjectName("NextPage");
        NextPage->resize(675, 469);
        pushButton_2 = new QPushButton(NextPage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 200, 121, 51));
        pushButton = new QPushButton(NextPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 198, 121, 51));
        pushButton_3 = new QPushButton(NextPage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(470, 200, 121, 51));

        retranslateUi(NextPage);

        QMetaObject::connectSlotsByName(NextPage);
    } // setupUi

    void retranslateUi(QDialog *NextPage)
    {
        NextPage->setWindowTitle(QCoreApplication::translate("NextPage", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("NextPage", "View Passwords", nullptr));
        pushButton->setText(QCoreApplication::translate("NextPage", "Add Password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("NextPage", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NextPage: public Ui_NextPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXTPAGE_H
