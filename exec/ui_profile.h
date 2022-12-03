/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *frame_3;
    QLabel *label_sem;
    QLabel *label_course;
    QLabel *label_name;
    QLabel *label_email;
    QFrame *frame_2;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_dashboard;
    QPushButton *pushButton_ToDo;
    QPushButton *pushButton_calender;
    QPushButton *pushButton_about;
    QPushButton *pushButton_help;
    QPushButton *pushButton_profile;
    QGroupBox *groupBox_editProfile;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_editName;
    QComboBox *comboBox_editCourse;
    QComboBox *comboBox_editSem;
    QPushButton *pushButton_update;
    QGroupBox *groupBox_editProfile_2;
    QPushButton *pushButton_passupdate;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_newpass;
    QLineEdit *lineEdit_cnewpass;
    QLineEdit *lineEdit_oldpass;
    QLabel *label_17;
    QPushButton *hamburgerButton;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QPushButton *pushButton_EditProfile;
    QPushButton *pushButton_editProfile_2;
    QPushButton *pushButton_logout;
    QLabel *label_editicon_2;
    QLabel *label_editicon_3;
    QLabel *label_3;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_13;

    void setupUi(QDialog *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName(QString::fromUtf8("profile"));
        profile->resize(1213, 587);
        label = new QLabel(profile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(960, 42, 251, 51));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size: 30px;\n"
"font-weight:bold;\n"
"color:black;\n"
"background-color:white;\n"
"border-radius:20px;\n"
"padding:5px;"));
        label_2 = new QLabel(profile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1213, 587));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: #3F72AF;\n"
"\n"
"\n"
"\n"
""));
        label_2->setFrameShape(QFrame::Box);
        label_2->setMidLineWidth(0);
        label_2->setMargin(0);
        frame_3 = new QFrame(profile);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(430, 110, 271, 211));
        frame_3->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:#DBE2EF;\n"
""));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Sunken);
        label_sem = new QLabel(frame_3);
        label_sem->setObjectName(QString::fromUtf8("label_sem"));
        label_sem->setGeometry(QRect(12, 170, 251, 27));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(14);
        font2.setBold(true);
        label_sem->setFont(font2);
        label_course = new QLabel(frame_3);
        label_course->setObjectName(QString::fromUtf8("label_course"));
        label_course->setGeometry(QRect(12, 120, 251, 27));
        label_course->setFont(font2);
        label_name = new QLabel(frame_3);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(12, 20, 241, 27));
        label_name->setFont(font2);
        label_email = new QLabel(frame_3);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setGeometry(QRect(12, 70, 251, 27));
        label_email->setFont(font2);
        frame_2 = new QFrame(profile);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(308, 110, 120, 211));
        frame_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:#DBE2EF"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(1);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 20, 71, 26));
        label_7->setFont(font2);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 70, 71, 26));
        label_4->setFont(font2);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 120, 91, 26));
        label_5->setFont(font2);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 170, 111, 26));
        label_6->setFont(font2);
        label_7->raise();
        label_5->raise();
        label_6->raise();
        label_4->raise();
        pushButton_dashboard = new QPushButton(profile);
        pushButton_dashboard->setObjectName(QString::fromUtf8("pushButton_dashboard"));
        pushButton_dashboard->setGeometry(QRect(15, 180, 241, 51));
        pushButton_dashboard->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 4px;\n"
"  border-radius: 15px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"hover{\n"
"color: #f5E0E0;\n"
"}\n"
"   \n"
"  \n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        pushButton_ToDo = new QPushButton(profile);
        pushButton_ToDo->setObjectName(QString::fromUtf8("pushButton_ToDo"));
        pushButton_ToDo->setGeometry(QRect(14, 332, 241, 51));
        pushButton_ToDo->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 4px;\n"
"  border-radius: 15px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"hover{\n"
"color: #f5E0E0;\n"
"}\n"
"   \n"
"  \n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        pushButton_calender = new QPushButton(profile);
        pushButton_calender->setObjectName(QString::fromUtf8("pushButton_calender"));
        pushButton_calender->setGeometry(QRect(15, 254, 241, 51));
        pushButton_calender->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 4px;\n"
"  border-radius: 15px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"hover{\n"
"color: #f5E0E0;\n"
"}\n"
"   \n"
"  \n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        pushButton_about = new QPushButton(profile);
        pushButton_about->setObjectName(QString::fromUtf8("pushButton_about"));
        pushButton_about->setGeometry(QRect(15, 408, 241, 51));
        pushButton_about->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 4px;\n"
"  border-radius: 15px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"hover{\n"
"color: #f5E0E0;\n"
"}\n"
"   \n"
"  \n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        pushButton_help = new QPushButton(profile);
        pushButton_help->setObjectName(QString::fromUtf8("pushButton_help"));
        pushButton_help->setGeometry(QRect(15, 480, 241, 51));
        pushButton_help->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 4px;\n"
"  border-radius: 15px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"hover{\n"
"color: #f5E0E0;\n"
"}\n"
"   \n"
"  \n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        pushButton_profile = new QPushButton(profile);
        pushButton_profile->setObjectName(QString::fromUtf8("pushButton_profile"));
        pushButton_profile->setGeometry(QRect(15, 100, 241, 51));
        pushButton_profile->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 4px;\n"
"  border-radius: 15px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"hover{\n"
"color: #f5E0E0;\n"
"}\n"
"   \n"
"  \n"
":pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        groupBox_editProfile = new QGroupBox(profile);
        groupBox_editProfile->setObjectName(QString::fromUtf8("groupBox_editProfile"));
        groupBox_editProfile->setGeometry(QRect(300, 340, 431, 241));
        groupBox_editProfile->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:#DBE2EF;"));
        label_8 = new QLabel(groupBox_editProfile);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 50, 71, 26));
        label_8->setFont(font2);
        label_9 = new QLabel(groupBox_editProfile);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 100, 81, 26));
        label_9->setFont(font2);
        label_10 = new QLabel(groupBox_editProfile);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 150, 111, 26));
        label_10->setFont(font2);
        lineEdit_editName = new QLineEdit(groupBox_editProfile);
        lineEdit_editName->setObjectName(QString::fromUtf8("lineEdit_editName"));
        lineEdit_editName->setGeometry(QRect(130, 50, 291, 31));
        comboBox_editCourse = new QComboBox(groupBox_editProfile);
        comboBox_editCourse->addItem(QString());
        comboBox_editCourse->addItem(QString());
        comboBox_editCourse->addItem(QString());
        comboBox_editCourse->addItem(QString());
        comboBox_editCourse->addItem(QString());
        comboBox_editCourse->addItem(QString());
        comboBox_editCourse->addItem(QString());
        comboBox_editCourse->setObjectName(QString::fromUtf8("comboBox_editCourse"));
        comboBox_editCourse->setGeometry(QRect(130, 90, 291, 41));
        comboBox_editCourse->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 675px;\n"
"height: 57px;\n"
"left: 785px;\n"
"top: 252px;\n"
"\n"
"\n"
"border-radius: 20px;\n"
"font-size:20px;\n"
""));
        comboBox_editSem = new QComboBox(groupBox_editProfile);
        comboBox_editSem->addItem(QString());
        comboBox_editSem->addItem(QString());
        comboBox_editSem->addItem(QString());
        comboBox_editSem->addItem(QString());
        comboBox_editSem->addItem(QString());
        comboBox_editSem->addItem(QString());
        comboBox_editSem->addItem(QString());
        comboBox_editSem->addItem(QString());
        comboBox_editSem->addItem(QString());
        comboBox_editSem->setObjectName(QString::fromUtf8("comboBox_editSem"));
        comboBox_editSem->setGeometry(QRect(130, 140, 291, 41));
        comboBox_editSem->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 675px;\n"
"height: 57px;\n"
"left: 785px;\n"
"top: 252px;\n"
"\n"
"\n"
"border-radius: 20px;\n"
"font-size:20px;\n"
""));
        pushButton_update = new QPushButton(groupBox_editProfile);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        pushButton_update->setGeometry(QRect(150, 200, 121, 29));
        pushButton_update->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:10px"));
        groupBox_editProfile_2 = new QGroupBox(profile);
        groupBox_editProfile_2->setObjectName(QString::fromUtf8("groupBox_editProfile_2"));
        groupBox_editProfile_2->setGeometry(QRect(770, 340, 371, 241));
        groupBox_editProfile_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:#DBE2EF;\n"
""));
        pushButton_passupdate = new QPushButton(groupBox_editProfile_2);
        pushButton_passupdate->setObjectName(QString::fromUtf8("pushButton_passupdate"));
        pushButton_passupdate->setGeometry(QRect(130, 190, 93, 29));
        pushButton_passupdate->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:10px"));
        label_15 = new QLabel(groupBox_editProfile_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 90, 111, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(11);
        font3.setBold(true);
        label_15->setFont(font3);
        label_16 = new QLabel(groupBox_editProfile_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 140, 151, 31));
        label_16->setFont(font3);
        lineEdit_newpass = new QLineEdit(groupBox_editProfile_2);
        lineEdit_newpass->setObjectName(QString::fromUtf8("lineEdit_newpass"));
        lineEdit_newpass->setGeometry(QRect(160, 90, 191, 31));
        lineEdit_newpass->setEchoMode(QLineEdit::Password);
        lineEdit_cnewpass = new QLineEdit(groupBox_editProfile_2);
        lineEdit_cnewpass->setObjectName(QString::fromUtf8("lineEdit_cnewpass"));
        lineEdit_cnewpass->setGeometry(QRect(160, 140, 191, 31));
        lineEdit_cnewpass->setEchoMode(QLineEdit::Password);
        lineEdit_oldpass = new QLineEdit(groupBox_editProfile_2);
        lineEdit_oldpass->setObjectName(QString::fromUtf8("lineEdit_oldpass"));
        lineEdit_oldpass->setGeometry(QRect(160, 40, 191, 31));
        label_17 = new QLabel(groupBox_editProfile_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 40, 111, 31));
        label_17->setFont(font3);
        hamburgerButton = new QPushButton(profile);
        hamburgerButton->setObjectName(QString::fromUtf8("hamburgerButton"));
        hamburgerButton->setGeometry(QRect(0, 50, 31, 31));
        hamburgerButton->setStyleSheet(QString::fromUtf8("border-image: url(:/img/IMG resources/menu.png);\n"
"border-width: 2px;\n"
" \n"
"border-color: beige;\n"
"QPushButton#evilButton:pressed {\n"
"    \n"
"    border-style: inset;\n"
"}"));
        pushButton = new QPushButton(profile);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1164, 52, 41, 31));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"  background-color:white;\n"
"  border-radius: 15px;\n"
"border-image: url(:/img/IMG resources/settings.png);"));
        groupBox = new QGroupBox(profile);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(960, 100, 251, 141));
        groupBox->setStyleSheet(QString::fromUtf8("color:black;\n"
"border-color: rgb(63, 114, 175);\n"
"border:none;\n"
""));
        pushButton_EditProfile = new QPushButton(groupBox);
        pushButton_EditProfile->setObjectName(QString::fromUtf8("pushButton_EditProfile"));
        pushButton_EditProfile->setGeometry(QRect(0, 10, 251, 31));
        pushButton_EditProfile->setStyleSheet(QString::fromUtf8(" background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"  border-radius: 15px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"hover{\n"
"color: #f5E0E0;\n"
"}\n"
"   \n"
"  \n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    \n"
"    border-style: inset;\n"
"}"));
        pushButton_editProfile_2 = new QPushButton(groupBox);
        pushButton_editProfile_2->setObjectName(QString::fromUtf8("pushButton_editProfile_2"));
        pushButton_editProfile_2->setGeometry(QRect(0, 60, 251, 31));
        pushButton_editProfile_2->setStyleSheet(QString::fromUtf8(" background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"  border-radius: 15px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"hover{\n"
"color: #f5E0E0;\n"
"}\n"
"   \n"
"  \n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    \n"
"    border-style: inset;\n"
"}"));
        pushButton_logout = new QPushButton(groupBox);
        pushButton_logout->setObjectName(QString::fromUtf8("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(0, 110, 251, 31));
        pushButton_logout->setStyleSheet(QString::fromUtf8(" background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"  border-radius: 15px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"hover{\n"
"color: #f5E0E0;\n"
"}\n"
"   \n"
"  \n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    \n"
"    border-style: inset;\n"
"}"));
        label_editicon_2 = new QLabel(groupBox);
        label_editicon_2->setObjectName(QString::fromUtf8("label_editicon_2"));
        label_editicon_2->setGeometry(QRect(0, 60, 41, 31));
        label_editicon_2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/IMG resources/change pass.png);"));
        label_editicon_3 = new QLabel(groupBox);
        label_editicon_3->setObjectName(QString::fromUtf8("label_editicon_3"));
        label_editicon_3->setGeometry(QRect(10, 10, 31, 31));
        label_editicon_3->setStyleSheet(QString::fromUtf8("border-image: url(:/img/IMG resources/edit-pencil-icon.png);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 116, 33, 21));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/IMG resources/logout.png")));
        label_3->setScaledContents(true);
        label_12 = new QLabel(profile);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(60, 0, 821, 81));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font4.setBold(false);
        font4.setItalic(true);
        font4.setUnderline(true);
        label_12->setFont(font4);
        label_12->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"left: 1.97%;\n"
"right: -24.05%;\n"
"top: 12.78%;\n"
"bottom: 77.5%;\n"
"\n"
";\n"
"font-style: italic;\n"
"font-weight: 400;\n"
"font-size: 60px;\n"
"line-height: 76px;\n"
"text-align: center;\n"
"\n"
"\n"
"color: #112D4E;\n"
""));
        label_11 = new QLabel(profile);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(910, 46, 45, 41));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/img/IMG resources/profile-user.png")));
        label_11->setScaledContents(true);
        label_13 = new QLabel(profile);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(780, 180, 63, 20));
        label_2->raise();
        frame_3->raise();
        pushButton_dashboard->raise();
        pushButton_ToDo->raise();
        pushButton_calender->raise();
        pushButton_about->raise();
        pushButton_help->raise();
        pushButton_profile->raise();
        groupBox_editProfile->raise();
        groupBox_editProfile_2->raise();
        hamburgerButton->raise();
        frame_2->raise();
        groupBox->raise();
        label->raise();
        label_11->raise();
        label_13->raise();
        pushButton->raise();
        label_12->raise();

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QDialog *profile)
    {
        profile->setWindowTitle(QCoreApplication::translate("profile", "Routine Management System", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_sem->setText(QString());
        label_course->setText(QString());
        label_name->setText(QString());
        label_email->setText(QString());
        label_7->setText(QCoreApplication::translate("profile", "Name ", nullptr));
        label_4->setText(QCoreApplication::translate("profile", "Email ", nullptr));
        label_5->setText(QCoreApplication::translate("profile", "Course ", nullptr));
        label_6->setText(QCoreApplication::translate("profile", "Semester ", nullptr));
        pushButton_dashboard->setText(QCoreApplication::translate("profile", "Dashboard", nullptr));
        pushButton_ToDo->setText(QCoreApplication::translate("profile", "To-Do", nullptr));
        pushButton_calender->setText(QCoreApplication::translate("profile", "Calender", nullptr));
        pushButton_about->setText(QCoreApplication::translate("profile", "About us", nullptr));
        pushButton_help->setText(QCoreApplication::translate("profile", "Help", nullptr));
        pushButton_profile->setText(QCoreApplication::translate("profile", "Profile", nullptr));
        groupBox_editProfile->setTitle(QCoreApplication::translate("profile", "Edit Profile", nullptr));
        label_8->setText(QCoreApplication::translate("profile", "Name ", nullptr));
        label_9->setText(QCoreApplication::translate("profile", "Course ", nullptr));
        label_10->setText(QCoreApplication::translate("profile", "Semester ", nullptr));
        comboBox_editCourse->setItemText(0, QCoreApplication::translate("profile", "Choose your course", nullptr));
        comboBox_editCourse->setItemText(1, QCoreApplication::translate("profile", "Computer Engineering", nullptr));
        comboBox_editCourse->setItemText(2, QCoreApplication::translate("profile", "Civil Engineeing ", nullptr));
        comboBox_editCourse->setItemText(3, QCoreApplication::translate("profile", "Mechanical Engineering", nullptr));
        comboBox_editCourse->setItemText(4, QCoreApplication::translate("profile", "Geomatics Engineering", nullptr));
        comboBox_editCourse->setItemText(5, QCoreApplication::translate("profile", "Environmental Engineering", nullptr));
        comboBox_editCourse->setItemText(6, QCoreApplication::translate("profile", "Electrical Engineering", nullptr));

        comboBox_editSem->setItemText(0, QCoreApplication::translate("profile", "Choose your semester", nullptr));
        comboBox_editSem->setItemText(1, QCoreApplication::translate("profile", "I", nullptr));
        comboBox_editSem->setItemText(2, QCoreApplication::translate("profile", "II", nullptr));
        comboBox_editSem->setItemText(3, QCoreApplication::translate("profile", "III", nullptr));
        comboBox_editSem->setItemText(4, QCoreApplication::translate("profile", "IV", nullptr));
        comboBox_editSem->setItemText(5, QCoreApplication::translate("profile", "V", nullptr));
        comboBox_editSem->setItemText(6, QCoreApplication::translate("profile", "VI", nullptr));
        comboBox_editSem->setItemText(7, QCoreApplication::translate("profile", "VII", nullptr));
        comboBox_editSem->setItemText(8, QCoreApplication::translate("profile", "VIII", nullptr));

        pushButton_update->setText(QCoreApplication::translate("profile", "Update", nullptr));
        groupBox_editProfile_2->setTitle(QCoreApplication::translate("profile", "Change Password", nullptr));
        pushButton_passupdate->setText(QCoreApplication::translate("profile", "Update", nullptr));
        label_15->setText(QCoreApplication::translate("profile", "New Password", nullptr));
        label_16->setText(QCoreApplication::translate("profile", "Confirm Password", nullptr));
        label_17->setText(QCoreApplication::translate("profile", "Old Password", nullptr));
        hamburgerButton->setText(QString());
        pushButton->setText(QString());
        groupBox->setTitle(QString());
        pushButton_EditProfile->setText(QCoreApplication::translate("profile", "    Edit Profile", nullptr));
        pushButton_editProfile_2->setText(QCoreApplication::translate("profile", "        Change Password?", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("profile", "Log Out", nullptr));
        label_editicon_2->setText(QString());
        label_editicon_3->setText(QString());
        label_3->setText(QString());
        label_12->setText(QCoreApplication::translate("profile", "Routine Management System", nullptr));
        label_11->setText(QString());
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
