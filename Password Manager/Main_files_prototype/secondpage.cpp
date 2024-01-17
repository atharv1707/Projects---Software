#include "secondpage.h"
#include "ui_secondpage.h"
#include "dataentrybox.h"
#include "passwordtablewidget.h"


SecondPage::SecondPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SecondPage)
{
    ui->setupUi(this);
    connect(ui->addpassword, &QPushButton::clicked, this, &SecondPage::onAddPasswordClicked);
    connect(ui->viewpassword, &QPushButton::clicked, this,&SecondPage::on_viewpassword_clicked);


    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels({"Website", "Username", "Password"});

    ui->tableWidget->hide();


}

SecondPage::~SecondPage()
{
    delete ui;
}

void SecondPage::onAddPasswordClicked()
{
    DataEntryBox *box = new DataEntryBox(*this);
    box->show();
}



void SecondPage::on_viewpassword_clicked()
{
    passwordtablewidget *viewDialog = new passwordtablewidget(this);
    viewDialog->show();
}


void SecondPage::updatingPasswordTable()
{
    qDebug() << "Updating password table...";
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    for(const auto &data : passwordDataVector){
        int rowPosition = ui->tableWidget->rowCount();

        qDebug() << "Adding entry: " << data.website << ", " << data.username << ", " << data.password;

        ui->tableWidget->setItem(rowPosition, 0, new QTableWidgetItem(data.website));
        ui->tableWidget->setItem(rowPosition, 1, new QTableWidgetItem(data.username));
        ui->tableWidget->setItem(rowPosition, 2, new QTableWidgetItem(data.password));
    }

    qDebug() << "Is tableWidget visible: " << ui->tableWidget->isVisible();
    ui->tableWidget->setVisible(true);
    qDebug() << "Is tableWidget visible: " << ui->tableWidget->isVisible();
}
