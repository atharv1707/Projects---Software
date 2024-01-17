#ifndef ADDPASSWORD_H
#define ADDPASSWORD_H

#include <QDialog>

namespace Ui {
class AddPassword;
}

class AddPassword : public QDialog
{
    Q_OBJECT

public:
    explicit AddPassword(QWidget *parent = nullptr);
    ~AddPassword();
// private slots:
//     void onAddPasswordClicked();

private:
    Ui::AddPassword *ui;
};

#endif // ADDPASSWORD_H
