/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QLabel *label_3;
    QSplitter *splitter;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(426, 243);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 190, 80, 25));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 110, 271, 17));
        splitter = new QSplitter(Dialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(150, 140, 174, 68));
        splitter->setOrientation(Qt::Vertical);
        label_4 = new QLabel(splitter);
        label_4->setObjectName(QStringLiteral("label_4"));
        splitter->addWidget(label_4);
        label_5 = new QLabel(splitter);
        label_5->setObjectName(QStringLiteral("label_5"));
        splitter->addWidget(label_5);
        label_7 = new QLabel(splitter);
        label_7->setObjectName(QStringLiteral("label_7"));
        splitter->addWidget(label_7);
        label_6 = new QLabel(splitter);
        label_6->setObjectName(QStringLiteral("label_6"));
        splitter->addWidget(label_6);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 0, 281, 51));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 121, 91));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/prefix/TeliveDialog.jpg")));
        label_9->setScaledContents(true);
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 90, 201, 17));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 50, 261, 41));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "About", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "Close", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "The program starts the following:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "* Number of Telive GUI.", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "* Number of Telive Receivers", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "* TETRAD", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "* GNU Radio Companion", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "Start Telive Beta Version 0.10", Q_NULLPTR));
        label_9->setText(QString());
        label_8->setText(QApplication::translate("Dialog", "<html><head/><body><p><a href=\"https://github.com/sq5bpf/telive\"><span style=\" text-decoration: underline; color:#0000ff;\">https://github.com/sq5bpf/telive</span></a></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "Start Telive application is created \n"
"for starting Telive version 1.9 from sq5bpf", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
