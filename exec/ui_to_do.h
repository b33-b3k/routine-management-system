/********************************************************************************
** Form generated from reading UI file 'to_do.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TO_DO_H
#define UI_TO_DO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_To_Do
{
public:
    QLabel *label_name;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_toDo1;
    QLineEdit *lineEdit_toDo2;
    QLineEdit *lineEdit_toDo3;
    QLineEdit *lineEdit_toDo4;
    QLineEdit *lineEdit_toDo5;
    QLineEdit *lineEdit_toDo6;
    QFrame *frame;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;

    void setupUi(QDialog *To_Do)
    {
        if (To_Do->objectName().isEmpty())
            To_Do->setObjectName(QString::fromUtf8("To_Do"));
        To_Do->resize(438, 598);
        To_Do->setStyleSheet(QString::fromUtf8("background-color:#3F72AF\n"
""));
        label_name = new QLabel(To_Do);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(120, 20, 231, 31));
        QFont font;
        font.setPointSize(14);
        label_name->setFont(font);
        label_name->setAutoFillBackground(false);
        label_name->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color: black;\n"
"text-align:center;\n"
""));
        pushButton = new QPushButton(To_Do);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 540, 83, 29));
        pushButton->setStyleSheet(QString::fromUtf8(" background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"  border-radius: 20px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"hover{\n"
"color: #f5E0E0;\n"
"}\n"
"   \n"
"  \n"
"\n"
""));
        layoutWidget = new QWidget(To_Do);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 80, 291, 431));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_toDo1 = new QLineEdit(layoutWidget);
        lineEdit_toDo1->setObjectName(QString::fromUtf8("lineEdit_toDo1"));
        lineEdit_toDo1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius\n"
"color:white;"));

        verticalLayout->addWidget(lineEdit_toDo1);

        lineEdit_toDo2 = new QLineEdit(layoutWidget);
        lineEdit_toDo2->setObjectName(QString::fromUtf8("lineEdit_toDo2"));
        lineEdit_toDo2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius\n"
"color:white;"));

        verticalLayout->addWidget(lineEdit_toDo2);

        lineEdit_toDo3 = new QLineEdit(layoutWidget);
        lineEdit_toDo3->setObjectName(QString::fromUtf8("lineEdit_toDo3"));
        lineEdit_toDo3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius\n"
"color:white;"));

        verticalLayout->addWidget(lineEdit_toDo3);

        lineEdit_toDo4 = new QLineEdit(layoutWidget);
        lineEdit_toDo4->setObjectName(QString::fromUtf8("lineEdit_toDo4"));
        lineEdit_toDo4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius\n"
"color:white;"));

        verticalLayout->addWidget(lineEdit_toDo4);

        lineEdit_toDo5 = new QLineEdit(layoutWidget);
        lineEdit_toDo5->setObjectName(QString::fromUtf8("lineEdit_toDo5"));
        lineEdit_toDo5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius\n"
"color:white;"));

        verticalLayout->addWidget(lineEdit_toDo5);

        lineEdit_toDo6 = new QLineEdit(layoutWidget);
        lineEdit_toDo6->setObjectName(QString::fromUtf8("lineEdit_toDo6"));
        lineEdit_toDo6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius\n"
"color:white;"));

        verticalLayout->addWidget(lineEdit_toDo6);

        frame = new QFrame(To_Do);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 80, 91, 431));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 33, 31, 31));
        checkBox_2 = new QCheckBox(frame);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(30, 100, 21, 26));
        checkBox_3 = new QCheckBox(frame);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(30, 167, 21, 26));
        checkBox_4 = new QCheckBox(frame);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(30, 234, 21, 26));
        checkBox_5 = new QCheckBox(frame);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(30, 301, 21, 26));
        checkBox_6 = new QCheckBox(frame);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(30, 368, 21, 26));

        retranslateUi(To_Do);

        QMetaObject::connectSlotsByName(To_Do);
    } // setupUi

    void retranslateUi(QDialog *To_Do)
    {
        To_Do->setWindowTitle(QCoreApplication::translate("To_Do", "Dialog", nullptr));
        label_name->setText(QString());
        pushButton->setText(QCoreApplication::translate("To_Do", "Update", nullptr));
        checkBox->setText(QString());
        checkBox_2->setText(QString());
        checkBox_3->setText(QString());
        checkBox_4->setText(QString());
        checkBox_5->setText(QString());
        checkBox_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class To_Do: public Ui_To_Do {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TO_DO_H
