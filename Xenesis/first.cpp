#include "first.h"
#include "ui_first.h"
#include "home.h"
#include "QMessageBox"
#include "ad_home.h"
first::first(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::first)
{
    ui->setupUi(this);

}

first::~first()
{
    delete ui;
}

void first::on_login_stu_clicked()
{
    QString EnrollmentNo= ui->lineEdit_en->text();
    QString password = ui->lineEdit_pass->text();


    if(EnrollmentNo == "root"  && password ==""){

        home1= new home(this);
        home1->showMaximized();
    }

    else {
        QMessageBox::warning(this,"Login","Username and password is not correct");
    }

}

void first::on_login_stu_2_clicked()
{
    QString username= ui->lineEdit_en_4->text();
    QString password = ui->lineEdit_pass_2->text();


    if(username == "root"  && password ==""){

        ad_home1= new ad_home(this);
        ad_home1->showMaximized();
    }

    else {
        QMessageBox::warning(this,"Login","Username and password is not correct");
    }
}
