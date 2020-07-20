#include "xnv.h"
#include "ui_xnv.h"
#include<QMessageBox>
xnv::xnv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xnv)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("library");

    if(database.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT *FROM bookdetails WHERE subject LIKE 'novel'; ");
        ui->tableView->setModel(querymodel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

xnv::~xnv()
{
    delete ui;
}
