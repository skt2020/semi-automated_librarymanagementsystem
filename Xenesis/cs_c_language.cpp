#include "cs_c_language.h"
#include "ui_cs_c_language.h"
#include<QMessageBox>
#include "cs.h"
#include <QDesktopServices>
#include <QUrl>

cs_c_language::cs_c_language(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cs_c_language)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("library");

    if(database.open())
    {
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT *FROM bookdetails WHERE subject LIKE 'c'; ");
        ui->tableView->setModel(querymodel);

    }

    else{
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}


cs_c_language::~cs_c_language()
{   database.close();
    delete ui;
}

void cs_c_language::on_pushButton_clicked()
{
    QString link = "file:///C:/Users/LENOVO/Documents/Xenesis/instascan-master/instascan-master/docs/index.html";
    QDesktopServices::openUrl(QUrl(link));

}

void cs_c_language::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Sucessfull","Your Book has been Issued :: Kindly Collect it from Issue counter");
    QString link = "file:///C:/wamp64/www/ibm/card/card_home.html";
    QDesktopServices::openUrl(QUrl(link));
}

void cs_c_language::on_pushButton_3_clicked()
{
    QString link = "file:///C:/Users/LENOVO/Documents/Xenesis/instascan-master/instascan-master/docs/index.html";
    QDesktopServices::openUrl(QUrl(link));
}
