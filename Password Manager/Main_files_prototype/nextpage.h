// nextpage.h
#ifndef NEXTPAGE_H
#define NEXTPAGE_H

#include <QMainWindow>

namespace Ui {
class NextPage;
}

class NextPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit NextPage(QWidget *parent = nullptr);
    ~NextPage();

private slots:
    void onAddPasswordClicked();
    void onViewPasswordClicked();
    void onExitClicked();

private:
    Ui::NextPage *ui;
};

#endif // NEXTPAGE_H
