#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    double num1=0, num2=0, result=0;
    double getLineEditNum();
    void writeLabelResult(double tempResult);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_plus_buttn_clicked();

    void on_minus_buttn_clicked();

    void on_mult_buttn_clicked();

    void on_div_buttn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
