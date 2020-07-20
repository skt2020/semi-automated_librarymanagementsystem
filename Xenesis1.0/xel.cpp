#include "xel.h"
#include "ui_xel.h"
#include<QMessageBox>
xel::xel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xel)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("library");

    if(database.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT *FROM bookdetails WHERE subject LIKE 'electrical'; ");
        ui->tableView->setModel(querymodel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

xel::~xel()
{
    delete ui;
}
