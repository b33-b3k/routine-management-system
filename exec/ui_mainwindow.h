/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QCommandLinkButton *commandLinkButton;
    QCheckBox *checkBox;
    QLabel *label_5;
    QCommandLinkButton *commandLinkButton_2;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_username;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QRadioButton *radioButton_student;
    QRadioButton *radioButton_admin;
    QPushButton *pushButton_closeEye;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1213, 587);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(650, 0, 561, 561));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 845px;\n"
"height: 1024px;\n"
"left: 0px;\n"
"top: 0px;\n"
"\n"
"background: #FFFFFF;"));
        groupBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        groupBox->setFlat(false);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(200, 380, 221, 51));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	position: absolute;\n"
"width: 195px;\n"
"height: 66px;\n"
"left: 368px;\n"
"top: 716px;\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.625, x2:1, y2:1, stop:0 rgba(135, 164, 255, 255), stop:1 rgba(255, 140, 140, 255));\n"
"border-radius: 25px;\n"
"\n"
"}\n"
"*:hover{\n"
"color: #f5E0E0;\n"
"}"));
        pushButton->setAutoDefault(true);
        commandLinkButton = new QCommandLinkButton(groupBox);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(380, 340, 161, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Inter")});
        font1.setBold(false);
        font1.setItalic(true);
        font1.setUnderline(true);
        commandLinkButton->setFont(font1);
        commandLinkButton->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 337px;\n"
"height: 39px;\n"
"left: 289px;\n"
"top: 647px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: italic;\n"
"font-weight: 100;\n"
"font-size: 15px;\n"
"line-height: 29px;\n"
"text-align: center;\n"
"text-decoration: underline;\n"
"\n"
"color: #000000;\n"
""));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(70, 350, 161, 21));
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8(""));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 460, 101, 20));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8(""));
        commandLinkButton_2 = new QCommandLinkButton(groupBox);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(400, 450, 141, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(commandLinkButton_2->sizePolicy().hasHeightForWidth());
        commandLinkButton_2->setSizePolicy(sizePolicy);
        commandLinkButton_2->setFont(font1);
        commandLinkButton_2->setStyleSheet(QString::fromUtf8("font-family: 'Inter';\n"
"font-style: italic;\n"
"font-weight: 100;\n"
"font-size: 15px;\n"
"line-height: 29px;\n"
"text-align: center;\n"
"text-decoration: underline;\n"
"\n"
"color: #000000;\n"
""));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(210, 290, 311, 51));
        QFont font3;
        font3.setBold(false);
        lineEdit_password->setFont(font3);
        lineEdit_password->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 660px;\n"
"height: 70px;\n"
"left: 144px;\n"
"top: 559px;\n"
"\n"
"background: #BCC1EA;\n"
"border-radius: 25px;\n"
"padding-left:20px;"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(210, 190, 311, 51));
        lineEdit_username->setFont(font3);
        lineEdit_username->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 660px;\n"
"height: 70px;\n"
"left: 144px;\n"
"top: 428px;\n"
"\n"
"background: #BCC1EA;\n"
"border-radius: 25px;\n"
"padding-left:20px;"));
        lineEdit_username->setCursorPosition(0);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 200, 101, 31));
        label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 364px;\n"
"height: 33px;\n"
"left: 180px;\n"
"top: 441px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: italic;\n"
"font-weight: 400;\n"
"font-size: 32px;\n"
"line-height: 39px;\n"
"\n"
"color: #000000;\n"
"\n"
""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 300, 151, 41));
        label_2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 364px;\n"
"height: 33px;\n"
"left: 180px;\n"
"top: 441px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: italic;\n"
"font-weight: 400;\n"
"font-size: 32px;\n"
"line-height: 39px;\n"
"\n"
"color: #000000;\n"
"\n"
""));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 30, 531, 71));
        label_4->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 551px;\n"
"height: 69px;\n"
"left: 198px;\n"
"top: 239px;\n"
"\n"
"font-family: 'Jua';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 48px;\n"
"line-height: 60px;\n"
"text-align: center;\n"
"\n"
"color: #000000;\n"
""));
        radioButton_student = new QRadioButton(groupBox);
        radioButton_student->setObjectName(QString::fromUtf8("radioButton_student"));
        radioButton_student->setGeometry(QRect(150, 120, 141, 31));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        radioButton_student->setFont(font4);
        radioButton_admin = new QRadioButton(groupBox);
        radioButton_admin->setObjectName(QString::fromUtf8("radioButton_admin"));
        radioButton_admin->setGeometry(QRect(320, 120, 191, 31));
        radioButton_admin->setFont(font4);
        pushButton_closeEye = new QPushButton(groupBox);
        pushButton_closeEye->setObjectName(QString::fromUtf8("pushButton_closeEye"));
        pushButton_closeEye->setGeometry(QRect(523, 305, 21, 21));
        pushButton_closeEye->setStyleSheet(QString::fromUtf8("border-image: url(:/img/IMG resources/hide.png);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-10, 0, 681, 561));
        label_3->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"left: 0%;\n"
"right: -37.9%;\n"
"top: 0%;\n"
"bottom: 9.62%;\n"
"\n"
"background: #4E61C8;"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 20, 611, 61));
        label_10->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"left: 1.97%;\n"
"right: -24.05%;\n"
"top: 12.78%;\n"
"bottom: 77.5%;\n"
"\n"
"font-family: Jua;\n"
"font-style: italic;\n"
"font-weight: 400;\n"
"font-size: 45px;\n"
"line-height: 76px;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;\n"
""));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 90, 651, 561));
        label_11->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/img/IMG resources/Rectangle 10.png);\n"
"position: absolute;\n"
"width: 660px;\n"
"height: 70px;\n"
"left: 144px;\n"
"top: 559px;\n"
"background-repeat:no-repeat;\n"
"\n"
"border-radius: 50px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1213, 31));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, pushButton);
        QWidget::setTabOrder(pushButton, checkBox);
        QWidget::setTabOrder(checkBox, commandLinkButton);
        QWidget::setTabOrder(commandLinkButton, commandLinkButton_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Routine Management System", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "LOG IN", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "Forgot Password?", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "     Stay logged in", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Not a member?", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("MainWindow", "Register Now", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Login into your account", nullptr));
        radioButton_student->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        radioButton_admin->setText(QCoreApplication::translate("MainWindow", "Administration", nullptr));
        pushButton_closeEye->setText(QString());
        label_3->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Routine Management System", nullptr));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
