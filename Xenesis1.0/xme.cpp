#include "xme.h"
#include "ui_xme.h"
#include<QMessageBox>

xme::xme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xme)
{
    ui->setupUi(this);

    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("library");

    if(database.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT *FROM bookdetails WHERE subject LIKE 'mechanical'; ");
        ui->tableView->setModel(querymodel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

xme::~xme()
{
    delete ui;
}
