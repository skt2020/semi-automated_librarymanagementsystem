#ifndef XCV_H
#define XCV_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class xcv;
}

class xcv : public QDialog
{
    Q_OBJECT

public:
    explicit xcv(QWidget *parent = nullptr);
    ~xcv();

private:
    Ui::xcv *ui;
    QSqlDatabase database;
    QSqlQueryModel *querymodel;
};

#endif // XCV_H
