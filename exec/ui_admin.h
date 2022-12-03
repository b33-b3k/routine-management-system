/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QLineEdit *lineEdit_teacher;
    QLabel *label_3;
    QLineEdit *lineEdit_room;
    QLabel *label_2;
    QLineEdit *lineEdit_subject;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_email;
    QComboBox *comboBox_sem;
    QLineEdit *lineEdit_name;
    QComboBox *comboBox_course;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *lineEdit_email_2;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(1136, 408);
        admin->setStyleSheet(QString::fromUtf8("background-color:#3F72AF\n"
""));
        pushButton = new QPushButton(admin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 360, 131, 29));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    \n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    \n"
"    padding: 6px;\n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        pushButton_2 = new QPushButton(admin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(760, 360, 121, 29));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    \n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    \n"
"    padding: 6px;\n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        pushButton_3 = new QPushButton(admin);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(750, 90, 141, 29));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    \n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    \n"
"    padding: 6px;\n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        groupBox = new QGroupBox(admin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 511, 311));
        groupBox->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
""));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("border-radius:20px"));

        verticalLayout_3->addWidget(comboBox);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout_3->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        verticalLayout_3->addWidget(comboBox_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        lineEdit_teacher = new QLineEdit(groupBox);
        lineEdit_teacher->setObjectName(QString::fromUtf8("lineEdit_teacher"));

        verticalLayout_3->addWidget(lineEdit_teacher);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        lineEdit_room = new QLineEdit(groupBox);
        lineEdit_room->setObjectName(QString::fromUtf8("lineEdit_room"));

        verticalLayout_3->addWidget(lineEdit_room);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        lineEdit_subject = new QLineEdit(groupBox);
        lineEdit_subject->setObjectName(QString::fromUtf8("lineEdit_subject"));

        verticalLayout_3->addWidget(lineEdit_subject);

        groupBox_2 = new QGroupBox(admin);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(550, 130, 561, 211));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
""));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 132, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        lineEdit_email = new QLineEdit(groupBox_2);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(149, 12, 401, 28));
        comboBox_sem = new QComboBox(groupBox_2);
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
        comboBox_sem->setGeometry(QRect(149, 150, 693, 57));
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
        lineEdit_name = new QLineEdit(groupBox_2);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(149, 70, 401, 28));
        comboBox_course = new QComboBox(groupBox_2);
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->setObjectName(QString::fromUtf8("comboBox_course"));
        comboBox_course->setGeometry(QRect(149, 100, 693, 57));
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
        groupBox_3 = new QGroupBox(admin);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(550, 30, 561, 51));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:20px"));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 531, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        lineEdit_email_2 = new QLineEdit(layoutWidget1);
        lineEdit_email_2->setObjectName(QString::fromUtf8("lineEdit_email_2"));

        horizontalLayout_3->addWidget(lineEdit_email_2);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "Update", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin", "Update Profile", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admin", "Add Student Email", nullptr));
        groupBox->setTitle(QString());
        comboBox->setItemText(0, QCoreApplication::translate("admin", "Choose Routine", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("admin", "Computer I", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("admin", "Civil I", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("admin", "Choose Day", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("admin", "Sunday", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("admin", "Monday", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("admin", "Tuseday", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("admin", "Wednesday", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("admin", "Thursday", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("admin", "Friday", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("admin", "Choose Time", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("admin", "9-10", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("admin", "10-11", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("admin", "11-12", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("admin", "12-13", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("admin", "13-14", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("admin", "14-15", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("admin", "15-16", nullptr));

        label_4->setText(QCoreApplication::translate("admin", "Teacher", nullptr));
        label_3->setText(QCoreApplication::translate("admin", "Room Number", nullptr));
        label_2->setText(QCoreApplication::translate("admin", "Subject", nullptr));
        lineEdit_subject->setText(QString());
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("admin", "Enter Student email", nullptr));
        label_5->setText(QCoreApplication::translate("admin", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("admin", "Course", nullptr));
        label_7->setText(QCoreApplication::translate("admin", "Semester", nullptr));
        comboBox_sem->setItemText(0, QCoreApplication::translate("admin", "Choose the semester", nullptr));
        comboBox_sem->setItemText(1, QCoreApplication::translate("admin", "I", nullptr));
        comboBox_sem->setItemText(2, QCoreApplication::translate("admin", "II", nullptr));
        comboBox_sem->setItemText(3, QCoreApplication::translate("admin", "III", nullptr));
        comboBox_sem->setItemText(4, QCoreApplication::translate("admin", "IV", nullptr));
        comboBox_sem->setItemText(5, QCoreApplication::translate("admin", "V", nullptr));
        comboBox_sem->setItemText(6, QCoreApplication::translate("admin", "VI", nullptr));
        comboBox_sem->setItemText(7, QCoreApplication::translate("admin", "VII", nullptr));
        comboBox_sem->setItemText(8, QCoreApplication::translate("admin", "VIII", nullptr));

        comboBox_course->setItemText(0, QCoreApplication::translate("admin", "Choose the course", nullptr));
        comboBox_course->setItemText(1, QCoreApplication::translate("admin", "Computer Engineering", nullptr));
        comboBox_course->setItemText(2, QCoreApplication::translate("admin", "Civil Engineering", nullptr));
        comboBox_course->setItemText(3, QCoreApplication::translate("admin", "Mechanical Engineering", nullptr));
        comboBox_course->setItemText(4, QCoreApplication::translate("admin", "Geomatics Engineering", nullptr));
        comboBox_course->setItemText(5, QCoreApplication::translate("admin", "Environmental Engineering", nullptr));
        comboBox_course->setItemText(6, QCoreApplication::translate("admin", "Electrical Engineering", nullptr));

        groupBox_3->setTitle(QString());
        label_8->setText(QCoreApplication::translate("admin", "Enter Student email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
