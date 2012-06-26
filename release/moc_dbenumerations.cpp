/****************************************************************************
** Meta object code from reading C++ file 'dbenumerations.h'
**
** Created: Tue Jun 26 01:58:36 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include.d/dbenumerations.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbenumerations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dbenumerations[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      26,   15,   15,   15, 0x08,
      37,   15,   15,   15, 0x08,
      49,   15,   15,   15, 0x08,
      62,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_dbenumerations[] = {
    "dbenumerations\0\0slotAdd()\0slotSave()\0"
    "slotClose()\0slotReload()\0slotRemove()\0"
};

const QMetaObject dbenumerations::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_dbenumerations,
      qt_meta_data_dbenumerations, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dbenumerations::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dbenumerations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dbenumerations::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dbenumerations))
        return static_cast<void*>(const_cast< dbenumerations*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int dbenumerations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotAdd(); break;
        case 1: slotSave(); break;
        case 2: slotClose(); break;
        case 3: slotReload(); break;
        case 4: slotRemove(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
