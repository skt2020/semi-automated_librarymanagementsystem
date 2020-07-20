#ifndef AD_ADDNEWBOOKS_H
#define AD_ADDNEWBOOKS_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include"ad_books.h"

namespace Ui {
class ad_addnewbooks;
}

class ad_addnewbooks : public QDialog
{
    Q_OBJECT

public:
    explicit ad_addnewbooks(QWidget *parent = nullptr);
    ~ad_addnewbooks();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ad_addnewbooks *ui;


    QSqlDatabase database;
    ad_books *ad_books1;

};

#endif // AD_ADDNEWBOOKS_H
