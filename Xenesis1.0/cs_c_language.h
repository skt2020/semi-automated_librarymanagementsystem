#ifndef CS_C_LANGUAGE_H
#define CS_C_LANGUAGE_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>



namespace Ui {
class cs_c_language;
}

class cs_c_language : public QDialog
{
    Q_OBJECT

public:
    explicit cs_c_language(QWidget *parent = nullptr);
    ~cs_c_language();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::cs_c_language *ui;
    QSqlDatabase database;
    QSqlQueryModel *querymodel;

};

#endif // CS_C_LANGUAGE_H
