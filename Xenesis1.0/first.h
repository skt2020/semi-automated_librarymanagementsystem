#ifndef FIRST_H
#define FIRST_H

#include <QMainWindow>
#include "home.h"
#include "ad_home.h"

namespace Ui {
class first;
}

class first : public QMainWindow
{
    Q_OBJECT

public:
    explicit first(QWidget *parent = nullptr);
    ~first();

private:
    Ui::first *ui;
    QSqlDatabase mydb;

    home *home1;
    ad_home *ad_home1;
private slots:


    void on_login_stu_clicked();


    void on_login_stu_2_clicked();
};

#endif // FIRST_H
