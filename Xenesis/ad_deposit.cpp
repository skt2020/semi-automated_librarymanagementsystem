#include "ad_deposit.h"
#include "ui_ad_deposit.h"
#include<QMessageBox>
ad_deposit::ad_deposit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ad_deposit)
{
    ui->setupUi(this);
}

ad_deposit::~ad_deposit()
{
    delete ui;
}

void ad_deposit::on_login_stu_2_clicked()
{
    QMessageBox::information(this,"Deposit","Your Book Has Been Submibited");
}
