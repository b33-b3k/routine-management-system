#ifndef HELPPAGE_H
#define HELPPAGE_H

#include <QDialog>

namespace Ui {
class helppage;
}

class helppage : public QDialog
{
    Q_OBJECT

public:
    explicit helppage(QWidget *parent = nullptr);
    ~helppage();

private:
    Ui::helppage *ui;
};

#endif // HELPPAGE_H
