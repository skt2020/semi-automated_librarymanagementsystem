#ifndef AD_HOME_H
#define AD_HOME_H

#include <QDialog>

#include "ad_student.h"
#include "ad_books.h"
#include "ad_deposit.h"
#include "ad_addnewbooks.h"
namespace Ui {
class ad_home;
}

class ad_home : public QDialog
{
    Q_OBJECT

public:
    explicit ad_home(QWidget *parent = nullptr);
    ~ad_home();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


    void on_pushButton_4_clicked();

private:
    Ui::ad_home *ui;
    ad_student *ad_student1;
    ad_books *ad_books1;
    ad_deposit *ad_deposit1;
    ad_addnewbooks *ad_addnewbooks1;
};

#endif // AD_HOME_H
