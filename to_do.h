#ifndef TO_DO_H
#define TO_DO_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class To_Do;
}

class To_Do : public QDialog
{
    Q_OBJECT

public:
    MainWindow conn;
    explicit To_Do(QWidget *parent = nullptr);
    ~To_Do();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_clicked();

    void on_checkBox_2_clicked();

    void on_checkBox_3_clicked();

    void on_checkBox_4_clicked();

    void on_checkBox_5_clicked();

    void on_checkBox_6_clicked();

    void on_checkBox_5_clicked(bool checked);

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::To_Do *ui;
};

#endif // TO_DO_H
