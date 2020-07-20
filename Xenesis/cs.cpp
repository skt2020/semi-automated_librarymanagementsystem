#include "cs.h"
#include "ui_cs.h"
#include "cs_c_language.h"
cs::cs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cs)
{
    ui->setupUi(this);

}

cs::~cs()
{
    delete ui;
}

void cs::on_pushButton_clicked()
{
    cs_c_language1 = new cs_c_language(this);
    cs_c_language1->showMaximized();


}
