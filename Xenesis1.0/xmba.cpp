#include "xmba.h"
#include "ui_xmba.h"
#include<QMessageBox>
xmba::xmba(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xmba)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("library");

    if(database.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT *FROM bookdetails WHERE subject LIKE 'management'; ");
        ui->tableView->setModel(querymodel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

xmba::~xmba()
{
    delete ui;
}
