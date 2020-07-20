#ifndef XEL_H
#define XEL_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class xel;
}

class xel : public QDialog
{
    Q_OBJECT

public:
    explicit xel(QWidget *parent = nullptr);
    ~xel();

private:
    Ui::xel *ui;
    QSqlDatabase database;
    QSqlQueryModel *querymodel;
};

#endif // XEL_H
