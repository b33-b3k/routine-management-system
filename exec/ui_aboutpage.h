/********************************************************************************
** Form generated from reading UI file 'aboutpage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTPAGE_H
#define UI_ABOUTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_aboutpage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *aboutpage)
    {
        if (aboutpage->objectName().isEmpty())
            aboutpage->setObjectName(QString::fromUtf8("aboutpage"));
        aboutpage->setEnabled(true);
        aboutpage->resize(996, 519);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aboutpage->sizePolicy().hasHeightForWidth());
        aboutpage->setSizePolicy(sizePolicy);
        aboutpage->setMaximumSize(QSize(1213, 519));
        aboutpage->setStyleSheet(QString::fromUtf8("background-color:#3F72AF\n"
""));
        label = new QLabel(aboutpage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 241, 61));
        QFont font;
        font.setPointSize(28);
        font.setUnderline(true);
        label->setFont(font);
        label_2 = new QLabel(aboutpage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 100, 731, 381));
        label_2->setStyleSheet(QString::fromUtf8("border-radius:50;\n"
""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/IMG resources/about.jpeg")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(aboutpage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 200, 471, 171));
        label_3->setStyleSheet(QString::fromUtf8("border-radius:50px;\n"
"font: 8pt \"Segoe Print\";\n"
"color:#112D4E;\n"
"background-color:#DBE2EF"));
        label_3->setScaledContents(false);

        retranslateUi(aboutpage);

        QMetaObject::connectSlotsByName(aboutpage);
    } // setupUi

    void retranslateUi(QDialog *aboutpage)
    {
        aboutpage->setWindowTitle(QCoreApplication::translate("aboutpage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("aboutpage", "About Page", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("aboutpage", "Routine Management System is the smart program that dynamically\n"
" organizes the routine of an academic institution. The program \n"
"stores the user detail, saves routine, let admin change routine and \n"
"a lot of day to day features that the student need.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutpage: public Ui_aboutpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPAGE_H
