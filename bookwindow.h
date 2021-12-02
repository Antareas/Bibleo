#ifndef BOOKWINDOW_H
#define BOOKWINDOW_H

#include <QMainWindow>

namespace Ui {
class bookwindow;
}

class bookwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit bookwindow(QWidget *parent = nullptr);
    ~bookwindow();

private:
    Ui::bookwindow *ui;
};

#endif // BOOKWINDOW_H
