#ifndef XME_H
#define XME_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class xme;
}

class xme : public QDialog
{
    Q_OBJECT

public:
    explicit xme(QWidget *parent = nullptr);
    ~xme();

private:
    Ui::xme *ui;
    QSqlDatabase database;
    QSqlQueryModel *querymodel;
};

#endif // XME_H
