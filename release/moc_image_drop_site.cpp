/****************************************************************************
** Meta object code from reading C++ file 'image_drop_site.h'
**
** Created: Tue Jun 26 01:58:39 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include.d/image_drop_site.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'image_drop_site.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_image_drop_site[] = {

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

static const char qt_meta_stringdata_image_drop_site[] = {
    "image_drop_site\0"
};

const QMetaObject image_drop_site::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_image_drop_site,
      qt_meta_data_image_drop_site, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &image_drop_site::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *image_drop_site::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *image_drop_site::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_image_drop_site))
        return static_cast<void*>(const_cast< image_drop_site*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int image_drop_site::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
