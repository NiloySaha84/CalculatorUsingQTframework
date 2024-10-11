/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLineEdit *lineEdit;
    QPushButton *addBtn;
    QPushButton *divBtn;
    QPushButton *multBtn;
    QPushButton *subBtn;
    QPushButton *pushButton_11;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(671, 411);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(80, 60, 521, 261));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 20, 481, 51));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);
        addBtn = new QPushButton(frame);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(20, 80, 100, 32));
        divBtn = new QPushButton(frame);
        divBtn->setObjectName("divBtn");
        divBtn->setGeometry(QRect(400, 80, 100, 32));
        multBtn = new QPushButton(frame);
        multBtn->setObjectName("multBtn");
        multBtn->setGeometry(QRect(280, 80, 100, 32));
        subBtn = new QPushButton(frame);
        subBtn->setObjectName("subBtn");
        subBtn->setGeometry(QRect(150, 80, 100, 32));
        pushButton_11 = new QPushButton(frame);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(420, 120, 81, 121));
        pushButton_14 = new QPushButton(frame);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(330, 140, 81, 32));
        pushButton_15 = new QPushButton(frame);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(330, 200, 81, 32));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 110, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("pushButton:QPushButton {\n"
"	background-color: #3b3c36\n"
"}"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 110, 101, 41));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(220, 110, 101, 41));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 140, 101, 41));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(120, 140, 101, 41));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(220, 140, 101, 41));
        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(20, 170, 101, 41));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(120, 170, 101, 41));
        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(220, 170, 101, 41));
        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(120, 200, 101, 41));
        pushButton_12 = new QPushButton(frame);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(20, 200, 101, 41));
        pushButton_13 = new QPushButton(frame);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(220, 200, 101, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 671, 36));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addBtn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        divBtn->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        multBtn->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        subBtn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Root", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Pi", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Pow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
