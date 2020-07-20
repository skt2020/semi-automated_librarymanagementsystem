#ifndef SINGUP_H
#define SINGUP_H
#include <QMainWindow>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include"first.h"

namespace Ui {
class singup;
}

class singup : public QMainWindow
{
    Q_OBJECT

public:
    explicit singup(QWidget *parent = nullptr);
    ~singup();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::singup *ui;
    QSqlDatabase database;
};

#endif // SINGUP_H
