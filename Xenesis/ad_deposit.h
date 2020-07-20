#ifndef AD_DEPOSIT_H
#define AD_DEPOSIT_H

#include <QDialog>

namespace Ui {
class ad_deposit;
}

class ad_deposit : public QDialog
{
    Q_OBJECT

public:
    explicit ad_deposit(QWidget *parent = nullptr);
    ~ad_deposit();

private slots:
    void on_login_stu_2_clicked();

private:
    Ui::ad_deposit *ui;
};

#endif // AD_DEPOSIT_H
