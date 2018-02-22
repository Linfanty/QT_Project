#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

const static double PI = 3.1415926;

void Dialog::on_countBtn_clicked()
{
    bool ok;
    QString tempstr;
    QString valuestr = ui->radiusLineEdit->text(); // input

    int valueint = valuestr.toInt((&ok));  // 将字符串变为int类型存到valueint中
    double area = valueint * valueint * PI; // 面积 pi r r

    ui->areaLable_2->setText( tempstr.setNum(area) ); // output
}

void Dialog::on_radiusLineEdit_textChanged(const QString &arg1)
{
    bool ok;
    QString tempstr;
    QString valuestr = ui->radiusLineEdit->text(); // input

    int valueint = valuestr.toInt((&ok));  // 将字符串变为int类型存到valueint中
    double area = valueint * valueint * PI; // 面积 pi r r

    ui->areaLable_2->setText( tempstr.setNum(area) ); // output
}

