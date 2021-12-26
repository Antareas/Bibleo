#ifndef USER_HPP
#define USER_HPP

#include <QString>

class user
{
public:
    user();
    ~user();
    void setName(QString);
    QString &getName();
    void setPassword(QString);
    QString &getPassword();
    void setNumber(QString);
    QString &getNumber();
    void setLogin(QString);
    QString &getLogin();
    void setAddress(QString);
    QString &getAddress();

    void save(QDataStream &ost) const;
    void load(QDataStream &ist);
private:
    QString name;
    QString login;
    QString password;
    QString number;
    QString address;
    int role;
};

inline QDataStream &operator<<(QDataStream &ost, const user &u)
{
    u.save(ost);
    return ost;
}

inline QDataStream &operator>>(QDataStream &ist, user &u)
{
    u.load(ist);
    return ist;
}

#endif // USER_HPP
