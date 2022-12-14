#ifndef DASHBOARD_1_H
#define DASHBOARD_1_H
#include "mainwindow.h"

// database connection
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

#include <QDialog>

namespace Ui {
class dashboard_1;
}

class dashboard_1 : public QDialog
{
    Q_OBJECT

public:

    MainWindow conn;
    explicit dashboard_1(QWidget *parent = nullptr);
    ~dashboard_1();

private slots:
    void on_pushButton_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_sun_clicked();

    void on_pushButton_mon_clicked();

    void on_pushButton_tue_clicked();

    void on_pushButton_wed_clicked();

    void on_pushButton_thu_clicked();

    void on_pushButton_friday_clicked();

    void loadTable (QString day);
    void loadTable (QString day, int isAdmin);


    void admin();


    void on_comboBox_chooseCourse_activated(int index);

    void on_comboBox_chooseCourse_currentTextChanged(const QString &arg1);

    void on_pushButton_updateTable_clicked();

private:
    Ui::dashboard_1 *ui;
    QSqlDatabase mydb;
    QString day;
    int isAdmin=0;
    QString table="Computer I";
};

#endif // DASHBOARD_1_H
