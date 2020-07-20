#include "xte.h"
#include "ui_xte.h"
#include<QMessageBox>
xte::xte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xte)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("library");

    if(database.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT *FROM bookdetails WHERE subject LIKE 'textile'; ");
        ui->tableView->setModel(querymodel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

xte::~xte()
{
    delete ui;
}
