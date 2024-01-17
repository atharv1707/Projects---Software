// nextpage.cpp
#include "nextpage.h"
#include "addpassword.h"
#include "ui_nextpage.h"

NextPage::NextPage(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::NextPage)
{
    ui->setupUi(this);

    // Connect the "Add Password" button to the slot
    connect(ui->addpassword, &QPushButton::clicked, this, &NextPage::onAddPasswordClicked);

    // Connect the "View Password" button to the slot
    connect(ui->viewpassword, &QPushButton::clicked, this, &NextPage::onViewPasswordClicked);

    // Connect the "Exit" button to the slot
    connect(ui->exit, &QPushButton::clicked, this, &NextPage::onExitClicked);
}

NextPage::~NextPage()
{
    delete ui;
}

void NextPage::onAddPasswordClicked()
{
    // Create an instance of the AddPasswordWindow
    AddPassword addPwdWindow;

    // Show the AddPasswordWindow
    int result = addPwdWindow.exec();

    // Check the result if needed (e.g., user clicked "OK" or "Cancel")
    if (result == QDialog::Accepted) {
        // Retrieve data from the AddPasswordWindow if necessary
        QString website = addPwdWindow.getWebsite();
        // Process the data as needed
    }
}

void NextPage::onViewPasswordClicked()
{
    // Implement functionality for the "View Password" button
}

void NextPage::onExitClicked()
{
    // Implement functionality for the "Exit" button
    close(); // Close the current window
}
