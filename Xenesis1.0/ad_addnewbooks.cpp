#include "ad_addnewbooks.h"
#include "ui_ad_addnewbooks.h"
#include "ad_home.h"
#include "QMessageBox"
#include<iostream>
#include"ad_books.h"
ad_addnewbooks::ad_addnewbooks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ad_addnewbooks)
{
    ui->setupUi(this);
}

ad_addnewbooks::~ad_addnewbooks()
{
    delete ui;
}



void ad_addnewbooks::on_pushButton_clicked()
{
    // /////////////////////////////////////////
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("library");
    if(db.open())
    {
        //QMessageBox::information(this,"connection","data base connected succesfully");

        QString bookid        = ui->lineEdit->text();
        QString bookname       = ui->lineEdit_2->text();
        QString authorname      = ui->lineEdit_3->text();
        QString avalability         = ui->lineEdit_4->text();
        QString subject    = ui->lineEdit_5->text();



        //insert querty
        QSqlQuery qry;
        qry.prepare("INSERT INTO bookdetails (bookid,bookname,authorname,avalability,subject)"
                    "VALUES (:bookid,:bookname,:authorname,:avalability,:subject)");
        qry.bindValue(":bookid", bookid);
        qry.bindValue(":bookname",bookname);
        qry.bindValue(":authorname",authorname);
        qry.bindValue(":avalability", avalability);
        qry.bindValue(":subject",subject);

        if(qry.exec())
        {
          QMessageBox::information(this,"Add New Book","Book Added Succesfully");
        }
        else {
            QMessageBox::information(this,"Signup","SignUp Not Sucessfull");
        }

    }
    else
    {
        QMessageBox::information(this,"Error","Connection not Sucessfull");

    }
    ad_books1= new ad_books(this);
    ad_books1->showMaximized();
}
