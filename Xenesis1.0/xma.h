#ifndef XMA_H
#define XMA_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class xma;
}

class xma : public QDialog
{
    Q_OBJECT

public:
    explicit xma(QWidget *parent = nullptr);
    ~xma();

private:
    Ui::xma *ui;
    QSqlDatabase database;
    QSqlQueryModel *querymodel;
};

#endif // XMA_H
