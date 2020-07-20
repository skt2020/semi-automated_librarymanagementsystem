#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "first.h"
#include "singup.h"
#include <QMainWindow>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    first *first1;
    singup *singup1;
    QSqlDatabase database;

};

#endif // MAINWINDOW_H
