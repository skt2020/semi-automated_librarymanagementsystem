#include "xch.h"
#include "ui_xch.h"
#include<QMessageBox>
xch::xch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xch)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("library");

    if(database.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT *FROM bookdetails WHERE subject LIKE 'chemistry'; ");
        ui->tableView->setModel(querymodel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

xch::~xch()
{
    delete ui;
}
