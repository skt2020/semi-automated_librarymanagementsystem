#include "xpy.h"
#include "ui_xpy.h"
#include<QMessageBox>
xpy::xpy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xpy)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("library");

    if(database.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT *FROM bookdetails WHERE subject LIKE 'physics'; ");
        ui->tableView->setModel(querymodel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

xpy::~xpy()
{
    delete ui;
}
