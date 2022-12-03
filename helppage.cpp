#include "helppage.h"
#include "ui_helppage.h"

helppage::helppage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helppage)
{
    ui->setupUi(this);
}

helppage::~helppage()
{
    delete ui;
}
