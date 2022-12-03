/********************************************************************************
** Form generated from reading UI file 'calender.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDER_H
#define UI_CALENDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Calender
{
public:
    QCalendarWidget *calendarWidget;

    void setupUi(QDialog *Calender)
    {
        if (Calender->objectName().isEmpty())
            Calender->setObjectName(QString::fromUtf8("Calender"));
        Calender->resize(510, 324);
        calendarWidget = new QCalendarWidget(Calender);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(40, 30, 424, 237));

        retranslateUi(Calender);

        QMetaObject::connectSlotsByName(Calender);
    } // setupUi

    void retranslateUi(QDialog *Calender)
    {
        Calender->setWindowTitle(QCoreApplication::translate("Calender", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calender: public Ui_Calender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDER_H
