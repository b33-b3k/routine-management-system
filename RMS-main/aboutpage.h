#ifndef ABOUTPAGE_H
#define ABOUTPAGE_H

#include <QDialog>

namespace Ui {
class aboutpage;
}

class aboutpage : public QDialog
{
    Q_OBJECT

public:
    explicit aboutpage(QWidget *parent = nullptr);
    ~aboutpage();

private:
    Ui::aboutpage *ui;
};

#endif // ABOUTPAGE_H
