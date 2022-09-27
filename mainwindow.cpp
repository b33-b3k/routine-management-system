#include "mainwindow.h"
#include "passbackup.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "registration.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Shaswat/OneDrive/Pictures/fg.png");
    ui->label_6->setPixmap(pix);
    QPixmap pic("C:/Users/Shaswat/OneDrive/Pictures/Screenshots/routine.jpg");
    ui->label_4->setPixmap(pic);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();

    if( username =="Test" && password=="Test"){
        QMessageBox::information(this,"Login","Username and password is correct");
        MainWindow::close();
    }
    else{
       QMessageBox::StandardButton reply = QMessageBox::critical(this,"Login","Username or password is not correct \n \n Try again?",QMessageBox::Yes | QMessageBox:: No);
        if (reply == QMessageBox::Yes){

        }
        else QApplication:: quit();
}
}



void MainWindow::on_commandLinkButton_2_clicked()
{
    registration registration;
    registration.setModal (true);
    registration.exec();

}


void MainWindow::on_commandLinkButton_clicked()
{
    passbackup passbackup;
    passbackup.setModal(true);
    passbackup.exec();
}

