#include "first.h"
#include "ui_first.h"
#include "home.h"
#include "QMessageBox"
#include "ad_home.h"
first::first(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::first)
{
    ui->setupUi(this);
    mydb=QSqlDatabase::addDatabase("QMYSQL");
    mydb.setHostName("127.0.0.1");
    mydb.setUserName("root");
    mydb.setPassword("");
    mydb.setDatabaseName("library");
    if(!mydb.open())
    //ui->label_3->setText("Failed to open database");
    {QMessageBox::warning(this,"Not Connected"," Database Not connected.");}
   // else
   // ui->label_3->setText("connected.......");


}

first::~first()
{
    delete ui;
}

void first::on_login_stu_clicked()
{
    QString EnrollmentNo= ui->lineEdit_en->text();
    QString password = ui->lineEdit_pass->text();


   // if(EnrollmentNo == "root"  && password ==""){

     //   home1= new home(this);
     //   home1->showMaximized();
    //}

    //else {
      //  QMessageBox::warning(this,"Login","Username and password is not correct");
    //}

    /////////////////////////////////////////////////////////////////
    //QString username,password;
    //username=ui-> lineEdit_2->text();
    //password=ui-> lineEdit->text();
    if(!mydb.open())
    {qDebug()<<"Failed to open database";
        return;

    }
    QSqlQuery qry;
    if(qry.exec("select*from tblstudents where CollegeId='"+EnrollmentNo+"' and Password='"+password+"' and Status='0'"));
    {    int count=0;
                    while (qry.next())
                    {count++;}
                    if(count==1)
                       { //ui->label_3->setText("username and password are correct");

                        {home1 = new home(this);
                         home1->showMaximized();}}
                    else if(count>1)
                    {//ui->label_3->setText(" Duplicate username and password are correct");
                         QMessageBox::warning(this,"Login"," Duplicate Username and password");
                        {home1 = new home(this);
                        home1->showMaximized();}}
                     else if(count<1)
                        //ui->label_3->setText("username and password are not correct");
                        {  QMessageBox::warning(this,"Login","Username and password are not correct");}
    }




////////////////////////////////////////////////////////////
}

void first::on_login_stu_2_clicked()
{
    QString username= ui->lineEdit_en_4->text();
   QString password = ui->lineEdit_pass_2->text();


    if(username == "root"  && password =="123"){

        ad_home1= new ad_home(this);
        ad_home1->showMaximized();
    }

    else {
       QMessageBox::warning(this,"Login","Username and password is not correct");
    }

    /*if(!mydb.open())
    {qDebug()<<"Failed to open database";
        return;

    }
    QSqlQuery qry;
    if(qry.exec("select*from tblstudents where CollegeId='"+username+"' and Password='"+password+"' and Status='1'"));
    {    int count=0;
                    while (qry.next())
                    {count++;}
                    if(count==1)
                    {//ui->label_3->setText("username and password are correct");

                        {ad_home1 = new ad_home(this);
                         ad_home1->showMaximized();}}
                   else if(count>1)
                       { //ui->label_3->setText(" Duplicate username and password are correct");
                         QMessageBox::warning(this,"Login"," Duplicate Username and password");
                        {ad_home1 = new ad_home(this);
                        ad_home1->showMaximized();}}
                  else if(count<1)
                        //ui->label_3->setText("username and password are not correct");
                        { QMessageBox::warning(this,"Login","Username and password are not correct");}
    }*/



    ///////////////////////////////////////////////////////////////
}
