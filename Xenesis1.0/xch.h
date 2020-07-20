#ifndef XCH_H
#define XCH_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class xch;
}

class xch : public QDialog
{
    Q_OBJECT

public:
    explicit xch(QWidget *parent = nullptr);
    ~xch();

private:
    Ui::xch *ui;
    QSqlDatabase database;
    QSqlQueryModel *querymodel;
};

#endif // XCH_H
