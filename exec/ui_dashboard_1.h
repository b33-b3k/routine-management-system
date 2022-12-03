/********************************************************************************
** Form generated from reading UI file 'dashboard_1.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_1_H
#define UI_DASHBOARD_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard_1
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_sun;
    QPushButton *pushButton_mon;
    QPushButton *pushButton_tue;
    QPushButton *pushButton_wed;
    QPushButton *pushButton_thu;
    QPushButton *pushButton_friday;
    QComboBox *comboBox_chooseCourse;
    QPushButton *pushButton_updateTable;

    void setupUi(QDialog *dashboard_1)
    {
        if (dashboard_1->objectName().isEmpty())
            dashboard_1->setObjectName(QString::fromUtf8("dashboard_1"));
        dashboard_1->resize(1213, 587);
        dashboard_1->setStyleSheet(QString::fromUtf8("background-color:#3F72AF"));
        tableView = new QTableView(dashboard_1);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(180, 160, 841, 349));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setMaximumSize(QSize(841, 349));
        tableView->setAutoFillBackground(true);
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(96, 96, 96);\n"
"selection-background-color: rgb(40, 40, 40);"));
        tableView->setGridStyle(Qt::DashDotLine);
        tableView->horizontalHeader()->setDefaultSectionSize(205);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView->verticalHeader()->setMinimumSectionSize(30);
        tableView->verticalHeader()->setDefaultSectionSize(46);
        layoutWidget = new QWidget(dashboard_1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 80, 841, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_sun = new QPushButton(layoutWidget);
        pushButton_sun->setObjectName(QString::fromUtf8("pushButton_sun"));
        pushButton_sun->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(pushButton_sun);

        pushButton_mon = new QPushButton(layoutWidget);
        pushButton_mon->setObjectName(QString::fromUtf8("pushButton_mon"));
        pushButton_mon->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(pushButton_mon);

        pushButton_tue = new QPushButton(layoutWidget);
        pushButton_tue->setObjectName(QString::fromUtf8("pushButton_tue"));
        pushButton_tue->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(pushButton_tue);

        pushButton_wed = new QPushButton(layoutWidget);
        pushButton_wed->setObjectName(QString::fromUtf8("pushButton_wed"));
        pushButton_wed->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(pushButton_wed);

        pushButton_thu = new QPushButton(layoutWidget);
        pushButton_thu->setObjectName(QString::fromUtf8("pushButton_thu"));
        pushButton_thu->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(pushButton_thu);

        pushButton_friday = new QPushButton(layoutWidget);
        pushButton_friday->setObjectName(QString::fromUtf8("pushButton_friday"));
        pushButton_friday->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(pushButton_friday);

        comboBox_chooseCourse = new QComboBox(dashboard_1);
        comboBox_chooseCourse->addItem(QString());
        comboBox_chooseCourse->addItem(QString());
        comboBox_chooseCourse->addItem(QString());
        comboBox_chooseCourse->setObjectName(QString::fromUtf8("comboBox_chooseCourse"));
        comboBox_chooseCourse->setGeometry(QRect(220, 20, 141, 26));
        comboBox_chooseCourse->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    \n"
"   \n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    \n"
"    padding: 6px;\n"
"\n"
"QPushButton#evilButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        pushButton_updateTable = new QPushButton(dashboard_1);
        pushButton_updateTable->setObjectName(QString::fromUtf8("pushButton_updateTable"));
        pushButton_updateTable->setGeometry(QRect(880, 20, 111, 29));
        pushButton_updateTable->setStyleSheet(QString::fromUtf8("\n"
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
"}\n"
""));

        retranslateUi(dashboard_1);

        QMetaObject::connectSlotsByName(dashboard_1);
    } // setupUi

    void retranslateUi(QDialog *dashboard_1)
    {
        dashboard_1->setWindowTitle(QCoreApplication::translate("dashboard_1", "Routine Management System", nullptr));
        pushButton_sun->setText(QCoreApplication::translate("dashboard_1", "Sunday", nullptr));
        pushButton_mon->setText(QCoreApplication::translate("dashboard_1", "Monday", nullptr));
        pushButton_tue->setText(QCoreApplication::translate("dashboard_1", "Tuesday", nullptr));
        pushButton_wed->setText(QCoreApplication::translate("dashboard_1", "Wednesday", nullptr));
        pushButton_thu->setText(QCoreApplication::translate("dashboard_1", "Thursday", nullptr));
        pushButton_friday->setText(QCoreApplication::translate("dashboard_1", "Friday", nullptr));
        comboBox_chooseCourse->setItemText(0, QCoreApplication::translate("dashboard_1", "Choose Routine", nullptr));
        comboBox_chooseCourse->setItemText(1, QCoreApplication::translate("dashboard_1", "Computer I", nullptr));
        comboBox_chooseCourse->setItemText(2, QCoreApplication::translate("dashboard_1", "Civil I", nullptr));

        pushButton_updateTable->setText(QCoreApplication::translate("dashboard_1", "Update Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard_1: public Ui_dashboard_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_1_H
