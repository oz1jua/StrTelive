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
int i7;
int r1, r2, r3, r4;
int dft = 1;
QString mtab, vis1, text, fifo;
char StartGNU;
char StartTD;

#endif

//**************************************************************************************************
//* Main Program
//**************************************************************************************************

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

     ui->setupUi(this);
     LoadSettings();
     CalcLCD();

  }

//**************************************************************************************************
//* End
//**************************************************************************************************

MainWindow::~MainWindow()
{
    delete ui;

}

//**************************************************************************************************
//* Start Bottom Pushed - Start Telive
//**************************************************************************************************


void MainWindow::on_pushButton_clicked()
{

    QProcess cmd;
    QString currPath = QDir::homePath();
    QDir::setCurrent(currPath + "/tetra/telive");
    if (fifo == "Y")
      {
         CreateFIFO();
      }

   if (i1 > 0)
    {
       // start Telive Terminal /rxx
       QProcess::startDetached("/usr/bin/xterm -hold -font fixed -bg black -fg white -geometry 203x60 -e ./rxx");

      // Start Telive Receivers 1
       mtab = "";
       for (r1 = 1; r1 <= i1; ++r1)
       {
        QThread::msleep(100);

        // Start UDP on Receiver 1
        if (fifo == "N")
        {
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 1:" + QString::number(r1) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver1udp " +
                          QString::number(r1) + "; done ; exec bash\'");
        }

        // Start Fifo on Receiver 1
        if (fifo == "Y")
        {
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 1:" + QString::number(r1) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver1 " +
                          QString::number(r1) + "; done ; exec bash\'");
        }

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

        // Start UDP on Receiver 2
        if (fifo == "N")
        {
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 2:" + QString::number(r2) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver2udp " +
                          QString::number(r1 + r2) + "; done ; exec bash\'");
        }

        // Start Fifo on Receiver 2
        if (fifo == "Y")
        {
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 2:" + QString::number(r2) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver2 " +
                          QString::number(r1 + r2) + "; done ; exec bash\'");
        }

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

        // Start UDP on Receiver 3
        if (fifo == "N")
        {
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 3:" + QString::number(r3) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver3udp " +
                          QString::number(r1 + r2 + r3) + "; done ; exec bash\'");
        }

        // Start Fifo on Receiver 3
        if (fifo == "Y")
        {
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 3:" + QString::number(r3) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver3 " +
                          QString::number(r1 + r2 + r3) + "; done ; exec bash\'");
        }

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

        // Start UDP on Receiver 4
        if (fifo == "N")
        {
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 4:" + QString::number(r4) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver4udp " +
                          QString::number(r1 + r2 + r3 + r4) + "; done ; exec bash\'");

        }

        // Start Fifo on Receiver 4
        if (fifo == "Y")
        {
        cmd.startDetached("mate-terminal", QStringList() <<
          mtab <<
          "--title" << "Receiver 4:" + QString::number(r4) <<
          "-e" <<
          "bash -c \'cd ~/tetra/osmo-tetra-sq5bpf/src; while true; do ./receiver4 " +
                          QString::number(r1 + r2 + r3 + r4) + "; done ; exec bash\'");
        }

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


//**************************************************************************************************
//* Receiver 1 Changed in GUI.
//**************************************************************************************************

void MainWindow::on_spinBox1_valueChanged(int arg1)
{
     i1 = arg1;
    CalcLCD();

}

//**************************************************************************************************
//* Receiver 2 Changed in GUI.
//**************************************************************************************************

void MainWindow::on_spinBox2_valueChanged(int arg1)
{
    i2 = arg1;
    CalcLCD();

    QString currPath = QDir::homePath();
    if (fifo == "N"){
      if (!QFileInfo(currPath + "/tetra/osmo-tetra-sq5bpf/src/receiver2udp").exists()){
        //The file doesn't exist
        QMessageBox msgBox;
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setText(QString("File receiver2udp missing !!"));
        msgBox.exec();
      }
    }

    if (fifo == "Y"){
      if (!QFileInfo(currPath + "/tetra/osmo-tetra-sq5bpf/src/receiver2").exists()){
        //The file doesn't exist
        QMessageBox msgBox;
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setText(QString("File receiver2 missing !!"));
        msgBox.exec();
      }
    }

}

//**************************************************************************************************
//* Receiver 3 Changed in GUI.
//**************************************************************************************************

void MainWindow::on_spinBox3_valueChanged(int arg1)
{
    i3 = arg1;
    CalcLCD();

    QString currPath = QDir::homePath();
    if (fifo == "N"){
      if (!QFileInfo(currPath + "/tetra/osmo-tetra-sq5bpf/src/receiver3udp").exists()){
        //The file doesn't exist
        QMessageBox msgBox;
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setText(QString("File receiver3udp missing !!"));
        msgBox.exec();
      }
    }

    if (fifo == "Y"){
      if (!QFileInfo(currPath + "/tetra/osmo-tetra-sq5bpf/src/receiver3").exists()){
        //The file doesn't exist
        QMessageBox msgBox;
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setText(QString("File receiver3 missing !!"));
        msgBox.exec();
      }
    }
}

//**************************************************************************************************
//* Receiver 4 Changed in GUI.
//**************************************************************************************************

void MainWindow::on_spinBox4_valueChanged(int arg1)
{
    i4 = arg1;
    CalcLCD();

    QString currPath = QDir::homePath();
    if (fifo == "N"){
      if (!QFileInfo(currPath + "/tetra/osmo-tetra-sq5bpf/src/receiver4udp").exists()){
        //The file doesn't exist
        QMessageBox msgBox;
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setText(QString("File receiver4udp missing !!"));
        msgBox.exec();
       }
    }

    if (fifo == "Y"){
      if (!QFileInfo(currPath + "/tetra/osmo-tetra-sq5bpf/src/receiver4").exists()){
        //The file doesn't exist
        QMessageBox msgBox;
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setText(QString("File receiver4 missing !!"));
        msgBox.exec();
      }
    }

}

//**************************************************************************************************
//* Save Settings
//**************************************************************************************************

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

   // Save Settings for FIFO
   if (ui->radioButton_FIFO->isChecked()) {
       settings.setValue("FIFO", 1);
    }
    else {
       settings.setValue("FIFO", 0);
    }



}

//**************************************************************************************************
//* Load Settings
//**************************************************************************************************

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
    i7 = settings.value("FIFO",dft).toInt();

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

    // Set FIFO
    if (i7 == 0){
        fifo = "N";
        ui->radioButton_FIFO->setChecked(false);
        ui->radioButton_UDP->setChecked(true);
      }
    else {
        ui->radioButton_FIFO->setChecked(true);
        ui->radioButton_UDP->setChecked(false);
        fifo = "Y";
     }



}

//**************************************************************************************************
//* Calculate Numbers in Telive Receivers UDP or FIFO
//**************************************************************************************************

void MainWindow::CalcLCD()
{

    if (fifo == "N")
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
      }

    if (fifo == "Y")
      {
        // set UDP Port for Receiver 1
        ui->lcdNumber_FR1->display(1);
        ui->lcdNumber_TO1->display(0 + i1);

        // set UDP Port for Receiver 2
        ui->lcdNumber_FR2->display(0 + i1 + 1);
        ui->lcdNumber_TO2->display(0 + i1 + i2);

        // set UDP Port for Receiver 3
        ui->lcdNumber_FR3->display(0 + i1 + i2 + 1);
        ui->lcdNumber_TO3->display(0 + i1 + i2 + i3);

        // set UDP Port for Receiver 4
        ui->lcdNumber_FR4->display(0 + i1 + i2 + i3 + 1);
        ui->lcdNumber_TO4->display(0 + i1 + i2 + i3 + i4);
      }


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

//**************************************************************************************************
//* Create FIFO Files if FIFO Selected
//**************************************************************************************************

void MainWindow::CreateFIFO()
{
    QProcess cmd;
    if (i1 > 0)
      {
        cmd.start("mkfifo /tmp/fifo1");
        cmd.write("mkfifo /tmp/fifo2");
        cmd.write("mkfifo /tmp/fifo3");
        cmd.write("mkfifo /tmp/fifo4");
      }
    if (i2 > 0)
      {
        cmd.write("mkfifo /tmp/fifo5");
        cmd.write("mkfifo /tmp/fifo6");
        cmd.write("mkfifo /tmp/fifo7");
        cmd.write("mkfifo /tmp/fifo8");
      }
    if (i3 > 0)
      {
        cmd.write("mkfifo /tmp/fifo9");
        cmd.write("mkfifo /tmp/fifo10");
        cmd.write("mkfifo /tmp/fifo11");
        cmd.write("mkfifo /tmp/fifo12");
      }
    if (i4 > 0)
      {
        cmd.write("mkfifo /tmp/fifo13");
        cmd.write("mkfifo /tmp/fifo14");
        cmd.write("mkfifo /tmp/fifo15");
        cmd.write("mkfifo /tmp/fifo16");
      }
        cmd.close();

}

//**************************************************************************************************
//* Exit Applaication Selected in Menu
//**************************************************************************************************

void MainWindow::on_actionExit_triggered()
{
     QApplication::quit();
}

//**************************************************************************************************
//* About Panel Selected
//**************************************************************************************************

void MainWindow::on_actionAbout_triggered()
{
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();

}

//**************************************************************************************************
//* FIFO Selected
//**************************************************************************************************

void MainWindow::on_radioButton_FIFO_toggled(bool checked)
{
    ui->label_rcv1->setText("/tmp/fifo");
    ui->label_rcv2->setText("/tmp/fifo");
    ui->label_rcv3->setText("/tmp/fifo");
    ui->label_rcv4->setText("/tmp/fifo");
    fifo = "Y";
    CalcLCD();
}

//**************************************************************************************************
//* UDP Selected
//**************************************************************************************************

void MainWindow::on_radioButton_UDP_toggled(bool checked)
{
    ui->label_rcv1->setText("UDP Port");
    ui->label_rcv2->setText("UDP Port");
    ui->label_rcv3->setText("UDP Port");
    ui->label_rcv4->setText("UDP Port");
    fifo = "N";
    CalcLCD();
}
