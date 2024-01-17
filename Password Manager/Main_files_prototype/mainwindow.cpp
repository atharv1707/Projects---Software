#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "secondPage.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString correctUsername = "root";
    QString correctPassword = "toor";

    // Get user-entered username and password
    QString enteredUsername = ui->Username->text();
    QString enteredPassword = ui->Password->text();

    // Check if username and password are correct
    if (enteredUsername == correctUsername && enteredPassword == correctPassword) {
        // Emit the signal for successful login
        QMessageBox::information(this, "Login Successful", "Welcome, " + enteredUsername + "!");

        // Create an instance of NextPage
        SecondPage *secondPage = new SecondPage;

        // Show the NextPage window
        secondPage->show();
    } else {
        QMessageBox::warning(this, "Login Failed", "Incorrect username or password. Please try again.");
    }





}

