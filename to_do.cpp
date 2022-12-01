#include "to_do.h"
#include "ui_to_do.h"
#include <QMessageBox>

extern QString email;
To_Do::To_Do(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::To_Do)
{
    ui->setupUi(this);
    ui->lineEdit_toDo1->setPlaceholderText("To-Do");
    ui->lineEdit_toDo2->setPlaceholderText("To-Do");
    ui->lineEdit_toDo3->setPlaceholderText("To-Do");
    ui->lineEdit_toDo4->setPlaceholderText("To-Do");
    ui->lineEdit_toDo5->setPlaceholderText("To-Do");
    ui->lineEdit_toDo6->setPlaceholderText("To-Do");
    conn.connOpen();

    if(conn.connOpen())
    {
        QSqlQuery qry;
        qry.prepare("select * from Info where Email='"+email+"'");

        if(qry.exec())
            {
                while(qry.next())
                {
                    ui->label_name->setText(qry.value(0).toString()+"'s To-Do");
                    ui->lineEdit_toDo1->setText(qry.value(6).toString());
                    ui->lineEdit_toDo2->setText(qry.value(7).toString());
                    ui->lineEdit_toDo3->setText(qry.value(8).toString());
                    ui->lineEdit_toDo4->setText(qry.value(9).toString());
                    ui->lineEdit_toDo5->setText(qry.value(10).toString());
                    ui->lineEdit_toDo6->setText(qry.value(11).toString());


}
        }
}
}


To_Do::~To_Do()
{
    delete ui;
}


void To_Do::on_pushButton_clicked()
{
    QString ToDo1 = ui->lineEdit_toDo1->text();
    QString ToDo2 = ui->lineEdit_toDo2->text();
    QString ToDo3 = ui->lineEdit_toDo3->text();
    QString ToDo4 = ui->lineEdit_toDo4->text();
    QString ToDo5 = ui->lineEdit_toDo5->text();
    QString ToDo6 = ui->lineEdit_toDo6->text();

    conn.connOpen();

    QSqlQuery qry;
    qry.prepare("Update Info set ToDo1='"+ToDo1+"',ToDo2='"+ToDo2+"',ToDo3='"+ToDo3+"',ToDo4='"+ToDo4+"',ToDo5='"+ToDo5+"',ToDo6='"+ToDo6+"' where Email=:x");
    qry.bindValue(":x",email);

    qry.exec();
    if(qry.exec())
    {
        QMessageBox::information(this,"To-Do","Your To-Do has been updated");
    }
    else if(!qry.exec())
    {
        QMessageBox::information(this,"To-Do","DB not connected");
    }}

