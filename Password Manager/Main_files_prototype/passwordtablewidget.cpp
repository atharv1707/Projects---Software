#include "passwordtablewidget.h"
#include "ui_passwordtablewidget.h"

passwordtablewidget::passwordtablewidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::passwordtablewidget)
{
    ui->setupUi(this);
}

passwordtablewidget::~passwordtablewidget()
{
    delete ui;
}
