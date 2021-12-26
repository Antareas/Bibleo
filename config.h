/*!
 * \file
 * \brief РљРѕРЅС„РёРі С„Р°Р№Р»
 */
#ifndef CONFIG_H
#define CONFIG_H

#include <QtGlobal>
#include <QString>

namespace config
{

    const char applicationName[] = QT_TRANSLATE_NOOP("Config", "biblo");

    const char applicationVersion[] = "20211226";

    const QString fileUsers = "users.tnb";

    const QString fileBooks = "books.tnb";

    const QString nameAdmin = "BibloAdmin";
    const QString loginAdmin = "Admin";
    const QString passwordAdmin = "12345";
    const QString numberAdmin = "+79999999999";
    const QString addressAdmin = "Krasnoyarsk";

}


#endif // CONFIG_H
