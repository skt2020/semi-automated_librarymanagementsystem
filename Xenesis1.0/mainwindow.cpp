#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QPixmap>
#include "first.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);






}
MainWindow::~MainWindow()
{
    delete ui;
}








void MainWindow::on_pushButton_clicked()
{

    first1= new first(this);
    first1->showMaximized();


}

void MainWindow::on_pushButton_2_clicked()
{
    singup1= new singup(this);
    singup1->showMaximized();
}

