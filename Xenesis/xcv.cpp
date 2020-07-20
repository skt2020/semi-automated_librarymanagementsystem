#include "xcv.h"
#include "ui_xcv.h"
#include<QMessageBox>
xcv::xcv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xcv)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("library");

    if(database.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT *FROM bookdetails WHERE subject LIKE 'civil'; ");
        ui->tableView->setModel(querymodel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

xcv::~xcv()
{
    delete ui;
}
