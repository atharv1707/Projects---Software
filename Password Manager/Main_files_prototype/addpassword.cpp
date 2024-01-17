#include "addpassword.h"
#include "ui_addpassword.h"

AddPassword::AddPassword(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPassword)
{
    ui->setupUi(this);
}

AddPassword::~AddPassword()
{
    delete ui;
}
