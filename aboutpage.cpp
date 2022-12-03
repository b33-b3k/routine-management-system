#include "aboutpage.h"
#include "ui_aboutpage.h"

aboutpage::aboutpage(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::aboutpage)
{
    ui->setupUi(this);
    setWindowFlags( windowFlags() | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint );

}


aboutpage::~aboutpage()
{
    delete ui;
}
