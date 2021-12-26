#include <QMessageBox>
#include <QFile>
#include <QSaveFile>

#include "registration.h"
#include "entrance.h"
#include "ui_mainwindow.h"
#include "config.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    load_users();
    load_calls();
    user admin;
    admin.setName(config::nameAdmin);
    admin.setLogin(config::loginAdmin);
    admin.setPassword(config::passwordAdmin);
    admin.setNumber(config::numberAdmin);
    admin.setAddress(config::addressAdmin);
    m_users.push_back(admin);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::save_users()
{
    QSaveFile outf(config::fileUsers);
    outf.open(QIODevice::WriteOnly);
    QDataStream ost(&outf);
    for (size_t i = 0; i < m_users.size(); i++)
    {
            ost << m_users[i];
    }
    outf.commit();
}

void MainWindow::load_users()
{
    QFile inf(config::fileUsers);
    inf.open(QIODevice::ReadOnly);
    QDataStream ist(&inf);
    m_users.clear();
    while (!ist.atEnd())
    {
        user u;
        ist >> u;
        m_users.push_back(u);
    }
}


/*void MainWindow::authorization()
{

    bool try_auth = true;
    QString login = ui_authform.nameEdit->text();
    QString password = ui_authform.passwordEdit->text();

    for (size_t i = 0; i < m_users.size(); i++)
    {
        if ((m_users[i].getName() == login) && (m_users[i].getPassword() == password))
        {
            role = m_users[i].getRole();
            index = i;
        }
    }



    if (try_auth)
    {
        if (role > 0)
        {
            QMessageBox::information(0, config::applicationName, "You'r succeful authorisation.");
            managerMainWindow *mmw = new managerMainWindow;
            mmw->setUsers(m_users);
            mmw->setCalls(m_calls);
            mmw->setIndex(index);
            mmw->show();
            this->close();
        }
        else if (role == 0)
        {
            QMessageBox::information(0, config::applicationName, "You'r succeful authorisation.");
            clientMainWindow *cmw = new clientMainWindow;
            cmw->setUsers(m_users);
            cmw->setCalls(m_calls);
            cmw->setIndexUser(index);
            cmw->show();
            this->close();
        }
        else
        {
            QMessageBox::information(0, config::applicationName, "User not finding.\nTry again.");
            authorization();
        }
    }

}


void MainWindow::registration()
{
    user m_user;
    registration ru;
    ru.setUser(&m_user);
    if (ru.exec() != register::Accepted)
    {
        return;
    }
    m_users.push_back(m_user);
    save_users();
}
*/

void MainWindow::exit()
{
    MainWindow::close();
}

