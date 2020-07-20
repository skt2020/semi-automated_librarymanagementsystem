#include "ad_books.h"
#include "ui_ad_books.h"
#include "ad_home.h"
#include "QMessageBox"
#include<iostream>
using namespace std;

ad_books::ad_books(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ad_books)
{
    ui->setupUi(this);

    // Database Connection

    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("");
    database.setDatabaseName("library");


    if(database.open())
    {
        tableModel = new QSqlTableModel();
        tableModel->setTable("bookdetails");
        tableModel->select();

        ui->tableView->setModel(tableModel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }




}

ad_books::~ad_books()
{
    delete ui;
}

