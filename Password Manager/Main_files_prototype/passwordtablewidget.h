#ifndef PASSWORDTABLEWIDGET_H
#define PASSWORDTABLEWIDGET_H

#include <QMainWindow>

namespace Ui {
class passwordtablewidget;
}

class passwordtablewidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit passwordtablewidget(QWidget *parent = nullptr);
    ~passwordtablewidget();

private:
    Ui::passwordtablewidget *ui;
};

#endif // PASSWORDTABLEWIDGET_H
