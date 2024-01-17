// dataentrybox.h
#ifndef DATAENTRYBOX_H
#define DATAENTRYBOX_H

#include <QDialog>
#include "secondpage.h"

namespace Ui {
class DataEntryBox;
}

class DataEntryBox : public QDialog
{
    Q_OBJECT

public:
    explicit DataEntryBox(SecondPage &parentPage, QWidget *parent = nullptr);
    ~DataEntryBox();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DataEntryBox *ui;
    SecondPage &passwordDataVector; // Reference to passwordDataVector
};

#endif // DATAENTRYBOX_H
