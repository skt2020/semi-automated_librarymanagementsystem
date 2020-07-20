#ifndef AD_STUDENT_H
#define AD_STUDENT_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include"ad_students_2.h"

namespace Ui {
class ad_student;
}

class ad_student : public QDialog
{
    Q_OBJECT

public:
    explicit ad_student(QWidget *parent = nullptr);
    ~ad_student();



private:
    Ui::ad_student *ui;
    ad_students_2 *ad_students_21;
    QSqlDatabase database;
    QSqlTableModel *tableModel;




};

#endif // AD_STUDENT_H
