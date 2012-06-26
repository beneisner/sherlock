/****************************************************************************
** Meta object code from reading C++ file 'z3950results.h'
**
** Created: Tue Jun 26 01:58:52 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include.d/z3950results.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'z3950results.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_z3950results[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      26,   13,   13,   13, 0x08,
      45,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_z3950results[] = {
    "z3950results\0\0slotClose()\0slotSelectRecord()\0"
    "slotUpdateQueryText()\0"
};

const QMetaObject z3950results::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_z3950results,
      qt_meta_data_z3950results, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &z3950results::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *z3950results::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *z3950results::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_z3950results))
        return static_cast<void*>(const_cast< z3950results*>(this));
    return QDialog::qt_metacast(_clname);
}

int z3950results::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotClose(); break;
        case 1: slotSelectRecord(); break;
        case 2: slotUpdateQueryText(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
