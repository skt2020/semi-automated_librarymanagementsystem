#include "ad_home.h"
#include "ui_ad_home.h"
#include "ad_student.h"
#include "ad_books.h"
#include "ad_deposit.h"
#include "ad_addnewbooks.h"
ad_home::ad_home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ad_home)
{
    ui->setupUi(this);
}

ad_home::~ad_home()
{
    delete ui;
}

void ad_home::on_pushButton_clicked()
{
    ad_student1= new ad_student(this);
    ad_student1->showMaximized();
}

void ad_home::on_pushButton_2_clicked()
{

    ad_books1= new ad_books(this);
    ad_books1->showMaximized();
}

void ad_home::on_pushButton_3_clicked()
{
    ad_addnewbooks1= new ad_addnewbooks(this);
    ad_addnewbooks1->showMaximized();
}


void ad_home::on_pushButton_4_clicked()
{
    ad_deposit1= new ad_deposit(this);
    ad_deposit1->showMaximized();
}
