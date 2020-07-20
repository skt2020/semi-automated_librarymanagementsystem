#ifndef AD_BOOKS_H
#define AD_BOOKS_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>



namespace Ui {
class ad_books;
}

class ad_books : public QDialog
{
    Q_OBJECT

public:
    explicit ad_books(QWidget *parent = nullptr);
    ~ad_books();



private:
    Ui::ad_books *ui;


    QSqlDatabase database;
    QSqlTableModel *tableModel;

};

#endif // AD_BOOKS_H
