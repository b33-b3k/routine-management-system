/********************************************************************************
** Form generated from reading UI file 'helppage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPPAGE_H
#define UI_HELPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_helppage
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *helppage)
    {
        if (helppage->objectName().isEmpty())
            helppage->setObjectName(QString::fromUtf8("helppage"));
        helppage->resize(927, 554);
        helppage->setStyleSheet(QString::fromUtf8("background-color:#4E61C8;\n"
"\n"
""));
        label = new QLabel(helppage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 131, 91));
        QFont font;
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size:60px;\n"
"color: white;\n"
"\n"
""));
        label_2 = new QLabel(helppage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 200, 391, 171));
        QFont font1;
        font1.setPointSize(26);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color: rgb(78, 97, 200);\n"
"border-radius:50px;\n"
"padding:auto;"));

        retranslateUi(helppage);

        QMetaObject::connectSlotsByName(helppage);
    } // setupUi

    void retranslateUi(QDialog *helppage)
    {
        helppage->setWindowTitle(QCoreApplication::translate("helppage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("helppage", "Help", nullptr));
        label_2->setText(QCoreApplication::translate("helppage", "Contact to your\n"
" administration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helppage: public Ui_helppage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPPAGE_H
