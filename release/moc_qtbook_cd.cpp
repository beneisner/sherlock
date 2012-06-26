/****************************************************************************
** Meta object code from reading C++ file 'qtbook_cd.h'
**
** Created: Tue Jun 26 01:58:43 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include.d/qtbook_cd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtbook_cd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qtbook_cd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      20,   10,   10,   10, 0x08,
      32,   10,   10,   10, 0x08,
      44,   10,   10,   10, 0x08,
      56,   10,   10,   10, 0x08,
      69,   10,   10,   10, 0x08,
      85,   10,   10,   10, 0x08,
     102,   10,   10,   10, 0x08,
     120,   10,   10,   10, 0x08,
     138,   10,   10,   10, 0x08,
     156,   10,   10,   10, 0x08,
     177,   10,   10,   10, 0x08,
     202,   10,   10,   10, 0x08,
     229,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qtbook_cd[] = {
    "qtbook_cd\0\0slotGo()\0slotPrint()\0"
    "slotQuery()\0slotReset()\0slotCancel()\0"
    "slotShowUsers()\0slotSaveTracks()\0"
    "slotDeleteTrack()\0slotInsertTrack()\0"
    "slotSelectImage()\0slotComputeRuntime()\0"
    "slotCloseTracksBrowser()\0"
    "slotPopulateCopiesEditor()\0"
    "slotPopulateTracksBrowser()\0"
};

const QMetaObject qtbook_cd::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qtbook_cd,
      qt_meta_data_qtbook_cd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qtbook_cd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qtbook_cd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qtbook_cd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qtbook_cd))
        return static_cast<void*>(const_cast< qtbook_cd*>(this));
    if (!strcmp(_clname, "qtbook_item"))
        return static_cast< qtbook_item*>(const_cast< qtbook_cd*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int qtbook_cd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 6: slotSaveTracks(); break;
        case 7: slotDeleteTrack(); break;
        case 8: slotInsertTrack(); break;
        case 9: slotSelectImage(); break;
        case 10: slotComputeRuntime(); break;
        case 11: slotCloseTracksBrowser(); break;
        case 12: slotPopulateCopiesEditor(); break;
        case 13: slotPopulateTracksBrowser(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
