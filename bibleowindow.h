#ifndef BIBLEOWINDOW_H
#define BIBLEOWINDOW_H

#include <QMainWindow>

namespace Ui {
class BibleoWindow;
}

class BibleoWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BibleoWindow(QWidget *parent = nullptr);
    ~BibleoWindow();

private:
    Ui::BibleoWindow *ui;
};

#endif // BIBLEOWINDOW_H
