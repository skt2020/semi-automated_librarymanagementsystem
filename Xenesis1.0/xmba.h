#ifndef XMBA_H
#define XMBA_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class xmba;
}

class xmba : public QDialog
{
    Q_OBJECT

public:
    explicit xmba(QWidget *parent = nullptr);
    ~xmba();

private:
    Ui::xmba *ui;
    QSqlDatabase database;
    QSqlQueryModel *querymodel;
};

#endif // XMBA_H
