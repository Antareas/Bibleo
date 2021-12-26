#include "user.h"

user::user()
{

}

user::~user()
{

}

void user::setName(QString name_)
{
    name = name_;
}

QString &user::getName()
{
    return name;
}

void user::setPassword(QString password_)
{
    password = password_;
}

QString &user::getPassword()
{
    return password;
}

void user::setNumber(QString number_)
{
    number = number_;
}

QString &user::getNumber()
{
    return number;
}

void user::setLogin(QString login_)
{
    login = login_;
}

QString &user::getLogin()
{
    return login;
}

void user::setAddress(QString address_)
{
    address = address_;
}

QString &user::getAddress()
{
    return address;
}

void user::save(QDataStream &ost) const
{
    ost << name << password << number << login << address << QString("%1").arg(role);
}

void user::load(QDataStream &ist)
{
    ist >> name >> password >> number >> login >> address;
    QString tmp;
    ist >> tmp;
    role = tmp.toInt();
}

