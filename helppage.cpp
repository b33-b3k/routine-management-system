#include "helppage.h"
#include "ui_helppage.h"

helppage::helppage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helppage)
{
    ui->setupUi(this);
    setWindowFlags( windowFlags() | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint );

}

helppage::~helppage()
{
    delete ui;
}
