/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QLabel *label_3;
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_cpass;
    QComboBox *comboBox_course;
    QComboBox *comboBox_sem;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QLabel *label_8;
    QPushButton *pushButton_eye;
    QPushButton *pushButton_eye_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label;

    void setupUi(QDialog *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName(QString::fromUtf8("registration"));
        registration->resize(1213, 587);
        registration->setStyleSheet(QString::fromUtf8(".QLineEdit{\n"
"	border-radius:6px;\n"
"}\n"
"*{\n"
"	background:none;\n"
"}"));
        label_3 = new QLabel(registration);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 260, 191, 121));
        groupBox = new QGroupBox(registration);
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
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 470, 191, 51));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 150, 101, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Coda")});
        font1.setBold(false);
        font1.setItalic(false);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 250px;\n"
"height: 63px;\n"
"left: 493px;\n"
"top: 254px;\n"
"\n"
"font-family: 'Coda';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 28px;\n"
"line-height: 51px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 210, 141, 31));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 250px;\n"
"height: 63px;\n"
"left: 493px;\n"
"top: 254px;\n"
"\n"
"font-family: 'Coda';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 28px;\n"
"line-height: 51px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 270, 241, 31));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 250px;\n"
"height: 63px;\n"
"left: 493px;\n"
"top: 254px;\n"
"\n"
"font-family: 'Coda';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 28px;\n"
"line-height: 51px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 330, 101, 31));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 250px;\n"
"height: 63px;\n"
"left: 493px;\n"
"top: 254px;\n"
"\n"
"font-family: 'Coda';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 28px;\n"
"line-height: 51px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 390, 131, 31));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 250px;\n"
"height: 63px;\n"
"left: 493px;\n"
"top: 254px;\n"
"\n"
"font-family: 'Coda';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 28px;\n"
"line-height: 51px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setEnabled(true);
        lineEdit_email->setGeometry(QRect(260, 140, 271, 41));
        QFont font2;
        font2.setBold(false);
        lineEdit_email->setFont(font2);
        lineEdit_email->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 675px;\n"
"height: 57px;\n"
"left: 785px;\n"
"top: 252px;\n"
"\n"
"background: #D9D9D9;\n"
"border-radius: 20px;\n"
"padding-left:15px;"));
        lineEdit_pass = new QLineEdit(groupBox);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setEnabled(true);
        lineEdit_pass->setGeometry(QRect(260, 200, 271, 41));
        lineEdit_pass->setFont(font2);
        lineEdit_pass->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 675px;\n"
"height: 57px;\n"
"left: 785px;\n"
"top: 252px;\n"
"\n"
"background: #D9D9D9;\n"
"border-radius: 20px;\n"
"padding-left:15px;"));
        lineEdit_pass->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_pass->setEchoMode(QLineEdit::Password);
        lineEdit_cpass = new QLineEdit(groupBox);
        lineEdit_cpass->setObjectName(QString::fromUtf8("lineEdit_cpass"));
        lineEdit_cpass->setEnabled(true);
        lineEdit_cpass->setGeometry(QRect(260, 260, 271, 41));
        lineEdit_cpass->setFont(font2);
        lineEdit_cpass->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 675px;\n"
"height: 57px;\n"
"left: 785px;\n"
"top: 252px;\n"
"\n"
"background: #D9D9D9;\n"
"border-radius: 20px;\n"
"padding-left:15px;"));
        lineEdit_cpass->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_cpass->setEchoMode(QLineEdit::Password);
        comboBox_course = new QComboBox(groupBox);
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->setObjectName(QString::fromUtf8("comboBox_course"));
        comboBox_course->setGeometry(QRect(270, 320, 221, 41));
        comboBox_course->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 675px;\n"
"height: 57px;\n"
"left: 785px;\n"
"top: 252px;\n"
"\n"
"\n"
"border-radius: 20px;\n"
"font-size:20px;\n"
""));
        comboBox_sem = new QComboBox(groupBox);
        comboBox_sem->addItem(QString());
        comboBox_sem->addItem(QString());
        comboBox_sem->addItem(QString());
        comboBox_sem->addItem(QString());
        comboBox_sem->addItem(QString());
        comboBox_sem->addItem(QString());
        comboBox_sem->addItem(QString());
        comboBox_sem->addItem(QString());
        comboBox_sem->addItem(QString());
        comboBox_sem->setObjectName(QString::fromUtf8("comboBox_sem"));
        comboBox_sem->setGeometry(QRect(270, 380, 221, 41));
        comboBox_sem->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 675px;\n"
"height: 57px;\n"
"left: 785px;\n"
"top: 252px;\n"
"\n"
"\n"
"border-radius: 20px;\n"
"font-size:20px;\n"
""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 10, 411, 61));
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
        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setEnabled(true);
        lineEdit_name->setGeometry(QRect(260, 80, 271, 41));
        lineEdit_name->setFont(font2);
        lineEdit_name->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 675px;\n"
"height: 57px;\n"
"left: 785px;\n"
"top: 252px;\n"
"\n"
"background: #D9D9D9;\n"
"border-radius: 20px;\n"
"padding-left:15px;"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 90, 101, 31));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 250px;\n"
"height: 63px;\n"
"left: 493px;\n"
"top: 254px;\n"
"\n"
"font-family: 'Coda';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 28px;\n"
"line-height: 51px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        pushButton_eye = new QPushButton(groupBox);
        pushButton_eye->setObjectName(QString::fromUtf8("pushButton_eye"));
        pushButton_eye->setGeometry(QRect(535, 210, 21, 21));
        pushButton_eye->setStyleSheet(QString::fromUtf8("border-image: url(:/img/IMG resources/hide.png);"));
        pushButton_eye_2 = new QPushButton(groupBox);
        pushButton_eye_2->setObjectName(QString::fromUtf8("pushButton_eye_2"));
        pushButton_eye_2->setGeometry(QRect(535, 270, 21, 21));
        pushButton_eye_2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/IMG resources/hide.png);"));
        label_10 = new QLabel(registration);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 20, 611, 61));
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
        label_11 = new QLabel(registration);
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
        label = new QLabel(registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, 0, 681, 561));
        label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"left: 0%;\n"
"right: -37.9%;\n"
"top: 0%;\n"
"bottom: 9.62%;\n"
"\n"
"background: #4E61C8;"));
        groupBox->raise();
        label->raise();
        label_3->raise();
        label_10->raise();
        label_11->raise();
        QWidget::setTabOrder(lineEdit_name, lineEdit_email);
        QWidget::setTabOrder(lineEdit_email, lineEdit_pass);
        QWidget::setTabOrder(lineEdit_pass, lineEdit_cpass);
        QWidget::setTabOrder(lineEdit_cpass, comboBox_course);
        QWidget::setTabOrder(comboBox_course, comboBox_sem);
        QWidget::setTabOrder(comboBox_sem, pushButton_3);

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QDialog *registration)
    {
        registration->setWindowTitle(QCoreApplication::translate("registration", "register", nullptr));
        label_3->setText(QString());
        groupBox->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("registration", "Register", nullptr));
        label_9->setText(QCoreApplication::translate("registration", "Email", nullptr));
        label_12->setText(QCoreApplication::translate("registration", "Password", nullptr));
        label_13->setText(QCoreApplication::translate("registration", "Confirm Password", nullptr));
        label_14->setText(QCoreApplication::translate("registration", "Course", nullptr));
        label_15->setText(QCoreApplication::translate("registration", "Semester", nullptr));
        comboBox_course->setItemText(0, QCoreApplication::translate("registration", "Choose your course", nullptr));
        comboBox_course->setItemText(1, QCoreApplication::translate("registration", "Computer Engineering", nullptr));
        comboBox_course->setItemText(2, QCoreApplication::translate("registration", "Civil Engineering", nullptr));
        comboBox_course->setItemText(3, QCoreApplication::translate("registration", "Mechanical Engineering", nullptr));
        comboBox_course->setItemText(4, QCoreApplication::translate("registration", "Geomatics Engineering", nullptr));
        comboBox_course->setItemText(5, QCoreApplication::translate("registration", "Environmental Engineering", nullptr));
        comboBox_course->setItemText(6, QCoreApplication::translate("registration", "Electrical Engineering", nullptr));

        comboBox_sem->setItemText(0, QCoreApplication::translate("registration", "Choose your semester", nullptr));
        comboBox_sem->setItemText(1, QCoreApplication::translate("registration", "I", nullptr));
        comboBox_sem->setItemText(2, QCoreApplication::translate("registration", "II", nullptr));
        comboBox_sem->setItemText(3, QCoreApplication::translate("registration", "III", nullptr));
        comboBox_sem->setItemText(4, QCoreApplication::translate("registration", "IV", nullptr));
        comboBox_sem->setItemText(5, QCoreApplication::translate("registration", "V", nullptr));
        comboBox_sem->setItemText(6, QCoreApplication::translate("registration", "VI", nullptr));
        comboBox_sem->setItemText(7, QCoreApplication::translate("registration", "VII", nullptr));
        comboBox_sem->setItemText(8, QCoreApplication::translate("registration", "VIII", nullptr));

        label_2->setText(QCoreApplication::translate("registration", "Register Here", nullptr));
        lineEdit_name->setText(QString());
        label_8->setText(QCoreApplication::translate("registration", "Name", nullptr));
        pushButton_eye->setText(QString());
        pushButton_eye_2->setText(QString());
        label_10->setText(QCoreApplication::translate("registration", "Routine Management System", nullptr));
        label_11->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
