#include "home.h"
#include "first.h"
#include "ui_home.h"
#include "cs.h"
#include"xme.h"
#include"xmba.h"
#include"xte.h"
#include"xch.h"
#include"xcv.h"
#include"xel.h"
#include"xma.h"
#include"xnv.h"
#include"xpy.h"
home::home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);




    QPixmap pix("C:/Users/LENOVO/Documents/Xenesis/cs.jpg");
    ui->label_2->setPixmap(pix.scaled(120,200,Qt::KeepAspectRatio));//let us c image

    QPixmap pix1("C:/Users/LENOVO/Documents/Xenesis/ph.jpg");
    ui->label_9->setPixmap(pix1.scaled(120,200,Qt::KeepAspectRatio));//physics

    QPixmap pix2("C:/Users/LENOVO/Documents/Xenesis/tx.jpg");
    ui->label_3->setPixmap(pix2.scaled(120,200,Qt::KeepAspectRatio));//textile

    QPixmap pix3("C:/Users/LENOVO/Documents/Xenesis/maths.jpg");
    ui->label_8->setPixmap(pix3.scaled(120,200,Qt::KeepAspectRatio));//maths

    QPixmap pix4("C:/Users/LENOVO/Documents/Xenesis/ee.jpg");
    ui->label_4->setPixmap(pix4.scaled(120,200,Qt::KeepAspectRatio));//electrical

    QPixmap pix5("C:/Users/LENOVO/Documents/Xenesis/ci.jpg");
    ui->label_6->setPixmap(pix5.scaled(120,200,Qt::KeepAspectRatio));//civil

    QPixmap pix6("C:/Users/LENOVO/Documents/Xenesis/me.jpg");
    ui->label_5->setPixmap(pix6.scaled(120,200,Qt::KeepAspectRatio));//mechenical

    QPixmap pix7("C:/Users/LENOVO/Documents/Xenesis/al.jpg");
    ui->label_7->setPixmap(pix7.scaled(120,200,Qt::KeepAspectRatio));//novel

    QPixmap pix8("C:/Users/LENOVO/Documents/Xenesis/ch.jpg");
    ui->label_10->setPixmap(pix8.scaled(120,200,Qt::KeepAspectRatio));//chemistry

    QPixmap pix9("C:/Users/LENOVO/Documents/Xenesis/ma.jpg");
    ui->label_11->setPixmap(pix9.scaled(120,200,Qt::KeepAspectRatio));//management



}

home::~home()
{
    delete ui;
}

void home::on_pushButton_clicked()
{
    cs1 = new cs(this);
    cs1->showMaximized();
}

void home::on_pushButton_2_clicked()
{
    xte1 = new xte(this);
    xte1->showMaximized();
}

void home::on_pushButton_4_clicked()
{
    xme1 = new xme(this);
    xme1->showMaximized();
}

void home::on_pushButton_3_clicked()
{
    xel1 = new xel(this);
    xel1->showMaximized();
}

void home::on_pushButton_5_clicked()
{
    xcv1 = new xcv(this);
    xcv1->showMaximized();
}

void home::on_pushButton_7_clicked()
{
    xma1 = new xma(this);
    xma1->showMaximized();
}

void home::on_pushButton_8_clicked()
{
    xpy1 = new xpy(this);
    xpy1->showMaximized();
}

void home::on_pushButton_9_clicked()
{
    xch1 = new xch(this);
    xch1->showMaximized();
}

void home::on_pushButton_10_clicked()
{
    xmba1 = new xmba(this);
    xmba1->showMaximized();
}

void home::on_pushButton_6_clicked()
{
    xnv1 = new xnv(this);
    xnv1->showMaximized();
}


void home::on_pushButton_14_clicked()
{
    dialog = new Dialog1(this);
    dialog->showMinimized();
}
