/********************************************************************************
** Form generated from reading UI file 'dataentrybox.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAENTRYBOX_H
#define UI_DATAENTRYBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DataEntryBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *websiteDATA;
    QLineEdit *usernameDATA;
    QLineEdit *passwordDATA;
    QPushButton *pushButton;

    void setupUi(QDialog *DataEntryBox)
    {
        if (DataEntryBox->objectName().isEmpty())
            DataEntryBox->setObjectName("DataEntryBox");
        DataEntryBox->resize(500, 388);
        label = new QLabel(DataEntryBox);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 120, 63, 20));
        label_2 = new QLabel(DataEntryBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 180, 71, 20));
        label_3 = new QLabel(DataEntryBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 250, 71, 20));
        websiteDATA = new QLineEdit(DataEntryBox);
        websiteDATA->setObjectName("websiteDATA");
        websiteDATA->setGeometry(QRect(200, 120, 171, 28));
        usernameDATA = new QLineEdit(DataEntryBox);
        usernameDATA->setObjectName("usernameDATA");
        usernameDATA->setGeometry(QRect(200, 180, 171, 28));
        passwordDATA = new QLineEdit(DataEntryBox);
        passwordDATA->setObjectName("passwordDATA");
        passwordDATA->setGeometry(QRect(200, 250, 171, 28));
        pushButton = new QPushButton(DataEntryBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 300, 83, 29));

        retranslateUi(DataEntryBox);

        QMetaObject::connectSlotsByName(DataEntryBox);
    } // setupUi

    void retranslateUi(QDialog *DataEntryBox)
    {
        DataEntryBox->setWindowTitle(QCoreApplication::translate("DataEntryBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DataEntryBox", "Website", nullptr));
        label_2->setText(QCoreApplication::translate("DataEntryBox", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("DataEntryBox", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("DataEntryBox", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataEntryBox: public Ui_DataEntryBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAENTRYBOX_H
