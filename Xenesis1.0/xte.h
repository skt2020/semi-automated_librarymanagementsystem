#ifndef XTE_H
#define XTE_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class xte;
}

class xte : public QDialog
{
    Q_OBJECT

public:
    explicit xte(QWidget *parent = nullptr);
    ~xte();

private:
    Ui::xte *ui;
    QSqlDatabase database;
    QSqlQueryModel *querymodel;
};

#endif // XTE_H
