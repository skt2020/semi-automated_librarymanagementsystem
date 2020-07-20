#ifndef XNV_H
#define XNV_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class xnv;
}

class xnv : public QDialog
{
    Q_OBJECT

public:
    explicit xnv(QWidget *parent = nullptr);
    ~xnv();

private:
    Ui::xnv *ui;
    QSqlDatabase database;
    QSqlQueryModel *querymodel;
};

#endif // XNV_H
