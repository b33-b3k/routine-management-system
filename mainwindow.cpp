#include "mainwindow.h"
#include "passback.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "registration.h"
#include "profile.h"

extern QString email;
QString password;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowFlags( windowFlags() | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint );
    ui->radioButton_student->setChecked(true);


    ui->lineEdit_username->setPlaceholderText("Enter Your Email");
    ui->lineEdit_password->setPlaceholderText("Enter Your Password");


    if(!connOpen())
        ui->label_4->setText("Failed to open db");
    else
        ui->label_4->setText("Login into your account");
}




MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

   if(ui->radioButton_student->isChecked())
{


    email=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();

    connOpen();
    QSqlQuery qry;
qry.prepare("select * from Info where Email='"+email+"' and Password ='"+password+"'and checkAdmin='0'");
    if (qry.exec())
    {
        int count=0;
        while (qry.next())
        {
                count++;
        }
        if (count==1)
        {
            connClose();
            hide();
            profile profile;                // opening profile window
            profile.setModal (true);
            profile.exec();


        }
        if (count<1)
      QMessageBox::warning(this,"Login Failed!","Email or password is wrong!");
    }
    }
    else if(ui->radioButton_admin->isChecked())              // for admin page
    {
    email=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();


    connOpen();
    QSqlQuery qry;
qry.prepare("select * from Info where Email='"+email+"' and Password ='"+password+"' and checkAdmin='1'");
    if (qry.exec())
    {
        int count=0;
        while (qry.next())
        {
                count++;
        }
        if (count==1)
        {
            connClose();
            hide();
            profile profile;                // opening profile window
            profile.setModal (true);
            profile.exec();

    }
        if (count<1)
        QMessageBox::warning(this,"Login Failed!","Entered details does not match!");
   }
}
}

   /* pback = new class pback(this);    // another way of opening new window for this we need to create an instance of 'profile' in private of mainwondow.h
    pr->show();*/

   /*
       QMessageBox::StandardButton reply = QMessageBox::critical(this,"Login","Username or password is not correct \n \n Try again?",QMessageBox::Yes | QMessageBox:: No);
        if (reply == QMessageBox::Yes){

        }
        else QApplication:: quit();
}*/




void MainWindow::on_commandLinkButton_2_clicked()
{
    connClose();
    registration registration;
    registration.setModal(true);
    registration.exec();

}







extern int count;
void MainWindow::on_pushButton_closeEye_clicked()
{
    if (count==0){
    ui->pushButton_closeEye->setStyleSheet("border-image: url(:/img/IMG resources/view.png);");
    ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
    count=1;
    }
    else
    {
        ui->pushButton_closeEye->setStyleSheet("border-image: url(:/img/IMG resources/hide.png);");
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);\
        count=0;
    }
}

//print







void MainWindow::on_commandLinkButton_clicked()
{
    passback passback;
    passback.setModal(true);
    passback.exec();
    connClose();

}




