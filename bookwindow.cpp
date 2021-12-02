#include "bookwindow.h"
#include "ui_bookwindow.h"

bookwindow::bookwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bookwindow)
{
    ui->setupUi(this);
}

bookwindow::~bookwindow()
{
    delete ui;
}
