/****************************************************************************
** Meta object code from reading C++ file 'generic_thread.h'
**
** Created: Tue Jun 26 01:58:37 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include.d/generic_thread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generic_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_generic_thread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_generic_thread[] = {
    "generic_thread\0"
};

const QMetaObject generic_thread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_generic_thread,
      qt_meta_data_generic_thread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &generic_thread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *generic_thread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *generic_thread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_generic_thread))
        return static_cast<void*>(const_cast< generic_thread*>(this));
    return QThread::qt_metacast(_clname);
}

int generic_thread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
