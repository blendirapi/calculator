#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow :: getLineEditNum() {
    num1=ui->lineEdit->text().toDouble();
    num2=ui->lineEdit_2->text().toDouble();
}

void MainWindow :: writeLabelResult(double tempResult) {
    ui->label->setText(QString :: number(tempResult));
    result=0;
}

void MainWindow::on_plus_buttn_clicked()
{
    getLineEditNum();
    result=num1+num2;
    writeLabelResult(result);
}

void MainWindow::on_minus_buttn_clicked()
{
    getLineEditNum();
    result=num1-num2;
    writeLabelResult(result);
}

void MainWindow::on_mult_buttn_clicked()
{
    getLineEditNum();
    result=num1*num2;
    writeLabelResult(result);
}

void MainWindow::on_div_buttn_clicked()
{
    getLineEditNum();
    result=num1/num2;
    writeLabelResult(result);
}

