#include "ad_students_2.h"
#include "ui_ad_students_2.h"

ad_students_2::ad_students_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ad_students_2)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("");
    database.setDatabaseName("library");


    if(database.open())
    {
        tableModel = new QSqlTableModel();
        tableModel->setTable("tblstudents");
        tableModel->select();

        ui->tableView->setModel(tableModel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

ad_students_2::~ad_students_2()
{
    delete ui;
}
