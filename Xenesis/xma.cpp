#include "xma.h"
#include "ui_xma.h"
#include<QMessageBox>
xma::xma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xma)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("library");

    if(database.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT *FROM bookdetails WHERE subject LIKE 'maths'; ");
        ui->tableView->setModel(querymodel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

xma::~xma()
{
    delete ui;
}
