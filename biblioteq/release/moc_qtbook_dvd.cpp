/****************************************************************************
** Meta object code from reading C++ file 'qtbook_dvd.h'
**
** Created: Tue Jun 26 01:58:45 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include.d/qtbook_dvd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtbook_dvd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qtbook_dvd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      21,   11,   11,   11, 0x08,
      33,   11,   11,   11, 0x08,
      45,   11,   11,   11, 0x08,
      57,   11,   11,   11, 0x08,
      70,   11,   11,   11, 0x08,
      86,   11,   11,   11, 0x08,
     104,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qtbook_dvd[] = {
    "qtbook_dvd\0\0slotGo()\0slotPrint()\0"
    "slotQuery()\0slotReset()\0slotCancel()\0"
    "slotShowUsers()\0slotSelectImage()\0"
    "slotPopulateCopiesEditor()\0"
};

const QMetaObject qtbook_dvd::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qtbook_dvd,
      qt_meta_data_qtbook_dvd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qtbook_dvd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qtbook_dvd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qtbook_dvd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qtbook_dvd))
        return static_cast<void*>(const_cast< qtbook_dvd*>(this));
    if (!strcmp(_clname, "qtbook_item"))
        return static_cast< qtbook_item*>(const_cast< qtbook_dvd*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int qtbook_dvd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotGo(); break;
        case 1: slotPrint(); break;
        case 2: slotQuery(); break;
        case 3: slotReset(); break;
        case 4: slotCancel(); break;
        case 5: slotShowUsers(); break;
        case 6: slotSelectImage(); break;
        case 7: slotPopulateCopiesEditor(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
