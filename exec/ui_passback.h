/********************************************************************************
** Form generated from reading UI file 'passback.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSBACK_H
#define UI_PASSBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_passback
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_newpass;
    QLineEdit *lineEdit_cnewpass;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_eye;
    QPushButton *pushButton_ceye;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QDialog *passback)
    {
        if (passback->objectName().isEmpty())
            passback->setObjectName(QString::fromUtf8("passback"));
        passback->resize(1213, 587);
        passback->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(passback);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(700, 110, 501, 361));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(false);
        groupBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        groupBox->setFlat(false);
        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(153, 101, 261, 26));
        QFont font1;
        font1.setBold(false);
        lineEdit_email->setFont(font1);
        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(153, 50, 261, 26));
        lineEdit_name->setFont(font1);
        lineEdit_newpass = new QLineEdit(groupBox);
        lineEdit_newpass->setObjectName(QString::fromUtf8("lineEdit_newpass"));
        lineEdit_newpass->setGeometry(QRect(153, 152, 261, 26));
        lineEdit_newpass->setFont(font1);
        lineEdit_newpass->setEchoMode(QLineEdit::Password);
        lineEdit_cnewpass = new QLineEdit(groupBox);
        lineEdit_cnewpass->setObjectName(QString::fromUtf8("lineEdit_cnewpass"));
        lineEdit_cnewpass->setGeometry(QRect(153, 203, 261, 26));
        lineEdit_cnewpass->setFont(font1);
        lineEdit_cnewpass->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(13, 50, 46, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(13, 101, 38, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(13, 152, 67, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(13, 203, 133, 20));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 270, 171, 51));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	position: absolute;\n"
"width: 195px;\n"
"height: 66px;\n"
"left: 368px;\n"
"top: 716px;\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.625, x2:1, y2:1, stop:0 rgba(135, 164, 255, 255), stop:1 rgba(255, 140, 140, 255));\n"
"border-radius: 15px;\n"
"\n"
"}\n"
"*:hover{\n"
"color: #f5E0E0;\n"
"}"));
        pushButton_eye = new QPushButton(groupBox);
        pushButton_eye->setObjectName(QString::fromUtf8("pushButton_eye"));
        pushButton_eye->setGeometry(QRect(420, 155, 21, 21));
        pushButton_eye->setStyleSheet(QString::fromUtf8(""));
        pushButton_ceye = new QPushButton(groupBox);
        pushButton_ceye->setObjectName(QString::fromUtf8("pushButton_ceye"));
        pushButton_ceye->setGeometry(QRect(420, 205, 21, 21));
        label_10 = new QLabel(passback);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(50, 10, 611, 61));
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
        label_4 = new QLabel(passback);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 681, 587));
        label_4->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"left: 0%;\n"
"right: -37.9%;\n"
"top: 0%;\n"
"bottom: 9.62%;\n"
"\n"
"background: #112D4E;"));
        label_2 = new QLabel(passback);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(750, 0, 391, 81));
        label_2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
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
        label_11 = new QLabel(passback);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(15, 110, 651, 561));
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
        label_12 = new QLabel(passback);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 0, 611, 61));
        label_12->setStyleSheet(QString::fromUtf8("position: absolute;\n"
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
        label_10->raise();
        label_4->raise();
        label_2->raise();
        label_11->raise();
        label_12->raise();
        groupBox->raise();

        retranslateUi(passback);

        QMetaObject::connectSlotsByName(passback);
    } // setupUi

    void retranslateUi(QDialog *passback)
    {
        passback->setWindowTitle(QCoreApplication::translate("passback", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("passback", "Name ", nullptr));
        label_3->setText(QCoreApplication::translate("passback", "Email", nullptr));
        label_5->setText(QCoreApplication::translate("passback", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("passback", "Confirm Password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("passback", "Change", nullptr));
        pushButton_eye->setText(QString());
        pushButton_ceye->setText(QString());
        label_10->setText(QCoreApplication::translate("passback", "Routine Management System", nullptr));
        label_4->setText(QString());
        label_2->setText(QCoreApplication::translate("passback", "Forgot Password?", nullptr));
        label_11->setText(QString());
        label_12->setText(QCoreApplication::translate("passback", "Routine Management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class passback: public Ui_passback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSBACK_H
