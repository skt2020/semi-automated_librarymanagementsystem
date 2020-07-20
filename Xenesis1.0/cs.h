#ifndef CS_H
#define CS_H

#include <QDialog>
#include "cs_c_language.h"


namespace Ui {
class cs;
}

class cs : public QDialog
{
    Q_OBJECT

public:
    explicit cs(QWidget *parent = nullptr);
    ~cs();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cs *ui;
    cs_c_language *cs_c_language1;
};

#endif // CS_H
