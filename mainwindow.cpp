#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileInfo"
#include <QProcess>
#include <QDir>
#include <QSpinBox>
#include <QDebug>
#include <QThread>
#include <QMessageBox>
#include <string>
#include <QSettings>
#include <iostream>

#ifndef MYGLOBALS
#define MYGLOBALS

int i1 = 1;
int i2 = 0;
int i3 = 0;
int i4 = 0;
int i5;
int i6;
int r1, r2, r3, r4;
int dft = 1;
QString mtab, vis1, text;
char StartGNU;
char StartTD;

#endif


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

     ui->setupUi(this);
     LoadSettings();

  }

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{

    QProcess cmd;
    QString currPath = QDir::homePath();
    QDir::setCurrent(currPath + "/tetra/telive");


   if (i1 > 0)
    {
       // start Telive Terminal /rxx
       QProcess::startDetached("/usr/bin/xterm -hold -font fixed -bg black -fg white -geometry 203x60 -e ./rxx");

      // Start Telive Receivers 1
       mtab = "";
       for (r1 = 1; r1 <= i1; ++r1)
       {
        QThread::msleep(100);

        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 1:" + QString::number(r1) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver1udp " +
                          QString::number(r1) + "; done ; exec bash\'");
        mtab = "--tab";
        text = "Start Receiver1:" + QString::number(r1);
        qDebug() << text;
       }

       // Subtract 1
       r1 = r1 - 1;

    }

   text = "Start1 :" + QString::number(r1);
   qDebug() << text;

   if (i2 > 0)
    {
       // start Telive Terminal /rxx2
       QProcess::startDetached("/usr/bin/xterm -hold -font fixed -bg black -fg white -geometry 203x60 -e ./rxx2");

       // Start Telive Receivers 2
       mtab = "";
       for (r2 = 1; r2 <= i2; ++r2)
       {
        QThread::msleep(100);
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 2:" + QString::number(r2) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver2udp " +
                          QString::number(r1 + r2) + "; done ; exec bash\'");
        mtab = "--tab";
        text = "Start Receiver2:" + QString::number(r1 + r2);
        qDebug() << text;// Subtract 1

       }

       // Subtract 1
       r2 = r2 - 1;

    }


    if (i3 > 0)
    {
       // start Telive Terminal /rxx3
       QProcess::startDetached("/usr/bin/xterm -hold -font fixed -bg black -fg white -geometry 203x60 -e ./rxx3");

       // Start Telive Receivers 3
       mtab = "";
       for (r3 = 1; r3 <= i3; ++r3)
       {
        QThread::msleep(100);
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 3:" + QString::number(r3) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver3udp " +
                          QString::number(r1 + r2 + r3) + "; done ; exec bash\'");
          mtab = "--tab";
          text = "Start Receiver3:" + QString::number(r1 + r2 + r3);
          qDebug() << text;
       }
       // Subtract 1
       r3 = r3 - 1;

    }


   if (i4 > 0)
    {
       QProcess::startDetached("/usr/bin/xterm -hold -font fixed -bg black -fg white -geometry 203x60 -e ./rxx4");


       // Start Telive Receivers 4int dft = 1;
       mtab = "";
       for (r4 = 1; r4 <= i4; ++r4)
       {
        QThread::msleep(100);
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 4:" + QString::number(r4) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver4udp " +
                          QString::number(r1 + r2 + r3 + r4) + "; done ; exec bash\'");
          mtab = "--tab";

          text = "Start Receiver2:" + QString::number(r1 + r2 + r3 + r4);
          qDebug() << text;
       }

       // Subtract 1
       r4 = r4 - 1;
    }



   if (ui->checkBox_TD->isChecked()) {
    // Start TETRAD.
    QProcess sh;
    sh.startDetached("mate-terminal", QStringList() << "--title" << "TETRAD" << "-e" << "bash -c \'cd /tetra/bin/; ./tetrad; exec bash\'");
    }

   if (ui->checkBox_GNU->isChecked()) {
    // Start gnuradio-companion
    QProcess::startDetached("gnuradio-companion");
    }

}



void MainWindow::on_spinBox1_valueChanged(int arg1)
{
     i1 = arg1;
    CalcLCD();

}

void MainWindow::on_spinBox2_valueChanged(int arg1)
{
    i2 = arg1;
    CalcLCD();

    QString currPath = QDir::homePath();
    if (!QFileInfo(currPath + "/tetra/osmo-tetra-sq5bpf/src/receiver2udp").exists()){
        //The file doesn't exist
        QMessageBox msgBox;
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setText(QString("File receiver2udp missing !!"));
        msgBox.exec();

    }


}

void MainWindow::on_spinBox3_valueChanged(int arg1)
{
    i3 = arg1;
    CalcLCD();

    QString currPath = QDir::homePath();
    if (!QFileInfo(currPath + "/tetra/osmo-tetra-sq5bpf/src/receiver3udp").exists()){
        //The file doesn't exist
        QMessageBox msgBox;
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setText(QString("File receiver3udp missing !!"));
        msgBox.exec();

    }
}


void MainWindow::on_spinBox4_valueChanged(int arg1)
{
    i4 = arg1;
    CalcLCD();

    QString currPath = QDir::homePath();
    if (!QFileInfo(currPath + "/tetra/osmo-tetra-sq5bpf/src/receiver4udp").exists()){
        //The file doesn't exist
        QMessageBox msgBox;
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setText(QString("File receiver4udp missing !!"));
        msgBox.exec();

    }
    //qDebug("her");
}


void MainWindow::on_actionSave_Settings_triggered()
{
    // set Home path.
    QString currPath = QDir::homePath();
    // Save settings
    QSettings settings(QString(currPath + "/tetra/config.ini"), QSettings::IniFormat);
    settings.setValue("RCV1", i1);
    settings.setValue("RCV2", i2);
    settings.setValue("RCV3", i3);
    settings.setValue("RCV4", i4);

    // Save Settings for GNU
    if (ui->checkBox_GNU->isChecked()) {
       settings.setValue("GNU", 1);
    }
    else {
       settings.setValue("GNU", 0);
    }

   // Save Settings for TETRAD
   if (ui->checkBox_TD->isChecked()) {
       settings.setValue("TD", 1);
    }
    else {
       settings.setValue("TD", 0);
    }




}


void MainWindow::LoadSettings()
{
    // set Home path.
    QString currPath = QDir::homePath();
        // Get setting from file
    QSettings settings(QString(currPath + "/tetra/config.ini"), QSettings::IniFormat);
    i1 = settings.value("RCV1",dft).toInt();
    i2 = settings.value("RCV2",dft).toInt();
    i3 = settings.value("RCV3",dft).toInt();
    i4 = settings.value("RCV4",dft).toInt();
    i5 = settings.value("GNU",dft).toInt();
    i6 = settings.value("TD",dft).toInt();

    // set settings to GUI.
    ui->spinBox1->setValue(i1);
    ui->spinBox2->setValue(i2);
    ui->spinBox3->setValue(i3);
    ui->spinBox4->setValue(i4);

    // Set GNU to GUI
    ui->checkBox_GNU->setChecked(true);
    if (i5 == 0){
        ui->checkBox_GNU->setChecked(false);
    }

    // Set TETRAD to GUI
    ui->checkBox_TD->setChecked(true);
    if (i6 == 0){
         ui->checkBox_TD->setChecked(false);
    }



}


void MainWindow::CalcLCD()
{
    // set UDP Port for Receiver 1
    ui->lcdNumber_FR1->display(42001);
    ui->lcdNumber_TO1->display(42000 + i1);

    // set UDP Port for Receiver 2
    ui->lcdNumber_FR2->display(42000 + i1 + 1);
    ui->lcdNumber_TO2->display(42000 + i1 + i2);

    // set UDP Port for Receiver 3
    ui->lcdNumber_FR3->display(42000 + i1 + i2 + 1);
    ui->lcdNumber_TO3->display(42000 + i1 + i2 + i3);

    // set UDP Port for Receiver 4
    ui->lcdNumber_FR4->display(42000 + i1 + i2 + i3 + 1);
    ui->lcdNumber_TO4->display(42000 + i1 + i2 + i3 + i4);


    // Set alwais UDP to 0 if Receiver 2 not selected
    if (i2 == 0){
        ui->lcdNumber_FR2->display(0);
        ui->lcdNumber_TO2->display(0);
    }

    // Set alwais UDP to 0 if Receiver 3 not selected
    if (i3 == 0){
        ui->lcdNumber_FR3->display(0);
        ui->lcdNumber_TO3->display(0);
    }

    // Set alwais UDP to 0 if Receiver 4 not selected
    if (i4 == 0){
        ui->lcdNumber_FR4->display(0);
        ui->lcdNumber_TO4->display(0);
    }

    // set Home path.
    QString currPath = QDir::homePath();
    if (!QFileInfo(currPath + "/tetra/telive/telive").exists()){
        //The file doesn't exist
        ui->MyMsg->setText("<font color='red'>Warning Telive not installed !");
      }


}


void MainWindow::on_actionExit_triggered()
{
     QApplication::quit();
}

void MainWindow::on_actionAbout_triggered()
{
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();

}
