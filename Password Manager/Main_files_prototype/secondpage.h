#ifndef SECONDPAGE_H
#define SECONDPAGE_H


#include <QMainWindow>
#include <QTableWidgetItem>

namespace Ui {
class SecondPage;
}

class SecondPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondPage(QWidget *parent = nullptr);
    ~SecondPage();
    struct PasswordData{
        QString website;
        QString username;
        QString password;

        PasswordData(const QString &web, const QString &user, const QString &pass)
            : website(web), username(user), password(pass) {}

    };
    QVector<PasswordData> passwordDataVector;
    void updatingPasswordTable();

private slots:
    void onAddPasswordClicked();

    void on_viewpassword_clicked();

private:
    Ui::SecondPage *ui;
    // void addTableRow(const QString &website, const QString &username, const QString &password);







};

#endif // SECONDPAGE_H
