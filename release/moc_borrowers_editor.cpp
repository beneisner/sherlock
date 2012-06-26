/****************************************************************************
** Meta object code from reading C++ file 'borrowers_editor.h'
**
** Created: Tue Jun 26 01:58:33 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include.d/borrowers_editor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'borrowers_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_borrowers_editor[] = {

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
      18,   17,   17,   17, 0x08,
      29,   17,   17,   17, 0x08,
      49,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_borrowers_editor[] = {
    "borrowers_editor\0\0slotSave()\0"
    "slotEraseBorrower()\0slotCloseCurrentBorrowers()\0"
};

const QMetaObject borrowers_editor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_borrowers_editor,
      qt_meta_data_borrowers_editor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &borrowers_editor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *borrowers_editor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *borrowers_editor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_borrowers_editor))
        return static_cast<void*>(const_cast< borrowers_editor*>(this));
    return QDialog::qt_metacast(_clname);
}

int borrowers_editor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotSave(); break;
        case 1: slotEraseBorrower(); break;
        case 2: slotCloseCurrentBorrowers(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
