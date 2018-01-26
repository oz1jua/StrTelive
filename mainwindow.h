#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:

    void on_pushButton_clicked();

    void on_spinBox1_valueChanged(int arg1);

    void on_spinBox2_valueChanged(int arg1);

    void on_spinBox3_valueChanged(int arg1);

    void on_spinBox4_valueChanged(int arg1);

    void on_actionSave_Settings_triggered();

    void LoadSettings();

    void CalcLCD();

    void CreateFIFO();

    void on_actionExit_triggered();

    void on_actionAbout_triggered();

    void on_radioButton_FIFO_toggled(bool checked);

    void on_radioButton_UDP_toggled(bool checked);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
