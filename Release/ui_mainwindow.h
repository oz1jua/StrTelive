/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_Settings;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QCheckBox *checkBox_TD;
    QPushButton *pushButton;
    QCheckBox *checkBox_GNU;
    QLabel *label_5;
    QSplitter *splitter;
    QLabel *label;
    QSpinBox *spinBox1;
    QLabel *label_rcv1;
    QLCDNumber *lcdNumber_FR1;
    QLabel *label_10;
    QLCDNumber *lcdNumber_TO1;
    QSplitter *splitter_2;
    QLabel *label_2;
    QSpinBox *spinBox2;
    QLabel *label_rcv2;
    QLCDNumber *lcdNumber_FR2;
    QLabel *label_11;
    QLCDNumber *lcdNumber_TO2;
    QSplitter *splitter_3;
    QLabel *label_3;
    QSpinBox *spinBox3;
    QLabel *label_rcv3;
    QLCDNumber *lcdNumber_FR3;
    QLabel *label_12;
    QLCDNumber *lcdNumber_TO3;
    QSplitter *splitter_4;
    QLabel *label_4;
    QSpinBox *spinBox4;
    QLabel *label_rcv4;
    QLCDNumber *lcdNumber_FR4;
    QLabel *label_13;
    QLCDNumber *lcdNumber_TO4;
    QLabel *MyMsg;
    QRadioButton *radioButton_FIFO;
    QRadioButton *radioButton_UDP;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(433, 327);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionSave_Settings = new QAction(MainWindow);
        actionSave_Settings->setObjectName(QStringLiteral("actionSave_Settings"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        checkBox_TD = new QCheckBox(centralWidget);
        checkBox_TD->setObjectName(QStringLiteral("checkBox_TD"));
        checkBox_TD->setGeometry(QRect(160, 200, 111, 23));
        checkBox_TD->setChecked(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 240, 80, 25));
        checkBox_GNU = new QCheckBox(centralWidget);
        checkBox_GNU->setObjectName(QStringLiteral("checkBox_GNU"));
        checkBox_GNU->setGeometry(QRect(40, 200, 85, 23));
        checkBox_GNU->setChecked(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 10, 261, 17));
        QFont font;
        font.setPointSize(11);
        label_5->setFont(font);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(40, 40, 361, 27));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QStringLiteral("label"));
        splitter->addWidget(label);
        spinBox1 = new QSpinBox(splitter);
        spinBox1->setObjectName(QStringLiteral("spinBox1"));
        spinBox1->setMinimum(1);
        spinBox1->setMaximum(6);
        spinBox1->setValue(6);
        splitter->addWidget(spinBox1);
        label_rcv1 = new QLabel(splitter);
        label_rcv1->setObjectName(QStringLiteral("label_rcv1"));
        splitter->addWidget(label_rcv1);
        lcdNumber_FR1 = new QLCDNumber(splitter);
        lcdNumber_FR1->setObjectName(QStringLiteral("lcdNumber_FR1"));
        lcdNumber_FR1->setProperty("intValue", QVariant(42000));
        splitter->addWidget(lcdNumber_FR1);
        label_10 = new QLabel(splitter);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font1;
        font1.setPointSize(14);
        label_10->setFont(font1);
        splitter->addWidget(label_10);
        lcdNumber_TO1 = new QLCDNumber(splitter);
        lcdNumber_TO1->setObjectName(QStringLiteral("lcdNumber_TO1"));
        splitter->addWidget(lcdNumber_TO1);
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(40, 80, 361, 27));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter_2->addWidget(label_2);
        spinBox2 = new QSpinBox(splitter_2);
        spinBox2->setObjectName(QStringLiteral("spinBox2"));
        spinBox2->setMaximum(6);
        spinBox2->setValue(6);
        splitter_2->addWidget(spinBox2);
        label_rcv2 = new QLabel(splitter_2);
        label_rcv2->setObjectName(QStringLiteral("label_rcv2"));
        splitter_2->addWidget(label_rcv2);
        lcdNumber_FR2 = new QLCDNumber(splitter_2);
        lcdNumber_FR2->setObjectName(QStringLiteral("lcdNumber_FR2"));
        splitter_2->addWidget(lcdNumber_FR2);
        label_11 = new QLabel(splitter_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);
        splitter_2->addWidget(label_11);
        lcdNumber_TO2 = new QLCDNumber(splitter_2);
        lcdNumber_TO2->setObjectName(QStringLiteral("lcdNumber_TO2"));
        splitter_2->addWidget(lcdNumber_TO2);
        splitter_3 = new QSplitter(centralWidget);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(41, 120, 361, 27));
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter_3->addWidget(label_3);
        spinBox3 = new QSpinBox(splitter_3);
        spinBox3->setObjectName(QStringLiteral("spinBox3"));
        spinBox3->setMaximum(6);
        spinBox3->setValue(0);
        splitter_3->addWidget(spinBox3);
        label_rcv3 = new QLabel(splitter_3);
        label_rcv3->setObjectName(QStringLiteral("label_rcv3"));
        splitter_3->addWidget(label_rcv3);
        lcdNumber_FR3 = new QLCDNumber(splitter_3);
        lcdNumber_FR3->setObjectName(QStringLiteral("lcdNumber_FR3"));
        splitter_3->addWidget(lcdNumber_FR3);
        label_12 = new QLabel(splitter_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);
        splitter_3->addWidget(label_12);
        lcdNumber_TO3 = new QLCDNumber(splitter_3);
        lcdNumber_TO3->setObjectName(QStringLiteral("lcdNumber_TO3"));
        splitter_3->addWidget(lcdNumber_TO3);
        splitter_4 = new QSplitter(centralWidget);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(41, 160, 361, 27));
        splitter_4->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        splitter_4->addWidget(label_4);
        spinBox4 = new QSpinBox(splitter_4);
        spinBox4->setObjectName(QStringLiteral("spinBox4"));
        spinBox4->setMaximum(6);
        splitter_4->addWidget(spinBox4);
        label_rcv4 = new QLabel(splitter_4);
        label_rcv4->setObjectName(QStringLiteral("label_rcv4"));
        splitter_4->addWidget(label_rcv4);
        lcdNumber_FR4 = new QLCDNumber(splitter_4);
        lcdNumber_FR4->setObjectName(QStringLiteral("lcdNumber_FR4"));
        splitter_4->addWidget(lcdNumber_FR4);
        label_13 = new QLabel(splitter_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);
        splitter_4->addWidget(label_13);
        lcdNumber_TO4 = new QLCDNumber(splitter_4);
        lcdNumber_TO4->setObjectName(QStringLiteral("lcdNumber_TO4"));
        splitter_4->addWidget(lcdNumber_TO4);
        MyMsg = new QLabel(centralWidget);
        MyMsg->setObjectName(QStringLiteral("MyMsg"));
        MyMsg->setGeometry(QRect(160, 240, 231, 20));
        radioButton_FIFO = new QRadioButton(centralWidget);
        radioButton_FIFO->setObjectName(QStringLiteral("radioButton_FIFO"));
        radioButton_FIFO->setGeometry(QRect(300, 230, 100, 23));
        radioButton_UDP = new QRadioButton(centralWidget);
        radioButton_UDP->setObjectName(QStringLiteral("radioButton_UDP"));
        radioButton_UDP->setGeometry(QRect(300, 200, 100, 23));
        radioButton_UDP->setChecked(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 433, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave_Settings);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "StrTelive", Q_NULLPTR));
        actionSave_Settings->setText(QApplication::translate("MainWindow", "Save Settings", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        checkBox_TD->setText(QApplication::translate("MainWindow", "Start TETRAD", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Start Telive", Q_NULLPTR));
        checkBox_GNU->setText(QApplication::translate("MainWindow", "Start GNU", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Select number of Telive Receivers", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Receiver1", Q_NULLPTR));
        label_rcv1->setText(QApplication::translate("MainWindow", "UDP Port", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "  -", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Receiver2", Q_NULLPTR));
        label_rcv2->setText(QApplication::translate("MainWindow", "UDP Port", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "  -", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Receiver3", Q_NULLPTR));
        label_rcv3->setText(QApplication::translate("MainWindow", "UDP Port", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "  -", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Receiver4", Q_NULLPTR));
        label_rcv4->setText(QApplication::translate("MainWindow", "UDP Port", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "  -", Q_NULLPTR));
        MyMsg->setText(QString());
        radioButton_FIFO->setText(QApplication::translate("MainWindow", "Use FIFO File", Q_NULLPTR));
        radioButton_UDP->setText(QApplication::translate("MainWindow", "Use UDP", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
