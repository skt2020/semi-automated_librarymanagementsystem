#ifndef XPY_H
#define XPY_H

#include <QDialog>

#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class xpy;
}

class xpy : public QDialog
{
    Q_OBJECT

public:
    explicit xpy(QWidget *parent = nullptr);
    ~xpy();

private:
    Ui::xpy *ui;
    QSqlDatabase database;
    QSqlQueryModel *querymodel;
};

#endif // XPY_H
