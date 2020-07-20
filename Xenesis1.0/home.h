
#ifndef HOME_H

#define HOME_H

#include <QDialog>

#include "cs.h"
#include"dialog1.h"
#include"xme.h"
#include"xmba.h"
#include"xte.h"
#include"xch.h"
#include"xcv.h"
#include"xel.h"
#include"xma.h"
#include"xnv.h"
#include"xpy.h"





namespace Ui {
class home;
}

class home : public QDialog
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_6_clicked();



    void on_pushButton_14_clicked();

private:
    Ui::home *ui;
    cs *cs1;
    xme *xme1;
    xch *xch1;
    xma *xma1;
    xcv *xcv1;
    xmba *xmba1;
    xel *xel1;
    xnv *xnv1;
    xpy *xpy1;
    xte *xte1;
    Dialog1 *dialog;






};
#endif // HOME_H
