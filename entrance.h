#ifndef ENTRANCE_H
#define ENTRANCE_H

#include <QMainWindow>
#include <vector>
#include "user.h"
#include "book.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void authorization();
    void registration();
    void about();
    void exit();

private:
    void load_users();
    void load_calls();
    void save_users();

    int role = -1;
    int index = -1;
    Ui::MainWindow *ui;
    std::vector<user> m_users;
    std::vector<book> m_calls;
};
#endif // MAINWINDOW_HPP

