// dataentrybox.cpp
#include "dataentrybox.h"
#include "ui_dataentrybox.h"

DataEntryBox::DataEntryBox(SecondPage &parentPage, QWidget *parent)
    : QDialog(parent), ui(new Ui::DataEntryBox), passwordDataVector(parentPage)
{
    ui->setupUi(this);
}

DataEntryBox::~DataEntryBox()
{
    delete ui;
}

void DataEntryBox::on_pushButton_clicked()
{
    QString website = ui->websiteDATA->text();
    QString username = ui->usernameDATA->text();
    QString password = ui->passwordDATA->text();

    // Add data to the password vector in SecondPage
    passwordDataVector.passwordDataVector.push_back({website, username, password});
    passwordDataVector.updatingPasswordTable(); // Update the password table

    // Close the dialog
    close();
}
