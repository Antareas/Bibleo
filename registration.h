#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QMainWindow>

namespace Ui {
class Registration;
}

class Registration : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();

private:
    Ui::Registration *ui;
};

#endif // REGISTRATION_H
