#include "ad_student.h"
#include "ui_ad_student.h"
#include "ad_home.h"

#include "QMessageBox"
#include"ad_students_2.h"


ad_student::ad_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ad_student)
{
    ui->setupUi(this);

    // Database Connection

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

ad_student::~ad_student()
{
    delete ui;
}



