#include "singup.h"
#include "ui_singup.h"

singup::singup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::singup)
{
    ui->setupUi(this);


}

singup::~singup()
{
    delete ui;
}

void singup::on_pushButton_2_clicked()
{
    // /////////////////////////////////////////
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("library");
    if(db.open())
    {
        //QMessageBox::information(this,"connection","data base connected succesfully");
        QString FullName        = ui->lineEdit_en_7->text();
        QString CollegeId       = ui->lineEdit->text();
        QString Password        = ui->lineEdit_en_9->text();
        QString EmailId         = ui->lineEdit_en_8->text();
        QString MobileNumber    = ui->lineEdit_pass_4->text();



        //insert querty
        QSqlQuery qry;
        qry.prepare("INSERT INTO tblstudents (FullName,Password,EmailId,MobileNumber,CollegeId)"
                    "VALUES (:FullName,:Password,:EmailId,:MobileNumber,:CollegeID)");
        qry.bindValue(":FullName", FullName);
        qry.bindValue(":CollegeId",CollegeId);
        qry.bindValue(":Password",Password);
        qry.bindValue(":EmailId", EmailId);
        qry.bindValue(":MobileNumber",MobileNumber);
        //qry.bindValue(":StudentId",StudentId);
        if(qry.exec())
        {
          QMessageBox::information(this,"SignUp","SignUp Sucessfull");
        }
        else {
            QMessageBox::information(this,"Error","SignUp Not Sucessfull");
        }

    }
    else
    {
        QMessageBox::information(this,"Error","Connection not Sucessfull");

    }

    ////////////////////////////////////////////
}
