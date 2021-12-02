#include "bibleowindow.h"
#include "ui_bibleowindow.h"

BibleoWindow::BibleoWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BibleoWindow)
{
    ui->setupUi(this);
}

BibleoWindow::~BibleoWindow()
{
    delete ui;
}
