#ifndef AD_STUDENTS_2_H
#define AD_STUDENTS_2_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
namespace Ui {
class ad_students_2;
}

class ad_students_2 : public QDialog
{
    Q_OBJECT

public:
    explicit ad_students_2(QWidget *parent = nullptr);
    ~ad_students_2();

private:
    Ui::ad_students_2 *ui;
    QSqlDatabase database;
    QSqlTableModel *tableModel;

};

#endif // AD_STUDENTS_2_H
