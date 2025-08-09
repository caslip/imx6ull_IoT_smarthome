/****************************************************************************
** Meta object code from reading C++ file 'master_bedroom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appdemo/master_bedroom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'master_bedroom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_master_bedroom_t {
    QByteArrayData data[12];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_master_bedroom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_master_bedroom_t qt_meta_stringdata_master_bedroom = {
    {
QT_MOC_LITERAL(0, 0, 14), // "master_bedroom"
QT_MOC_LITERAL(1, 15, 10), // "updatetime"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 21), // "on_main_light_toggled"
QT_MOC_LITERAL(4, 49, 7), // "checked"
QT_MOC_LITERAL(5, 57, 20), // "on_bed_light_toggled"
QT_MOC_LITERAL(6, 78, 20), // "on_dec_light_toggled"
QT_MOC_LITERAL(7, 99, 15), // "on_fans_toggled"
QT_MOC_LITERAL(8, 115, 18), // "on_curtain_toggled"
QT_MOC_LITERAL(9, 134, 15), // "on_read_toggled"
QT_MOC_LITERAL(10, 150, 20), // "on_back_home_toggled"
QT_MOC_LITERAL(11, 171, 21) // "on_leave_home_toggled"

    },
    "master_bedroom\0updatetime\0\0"
    "on_main_light_toggled\0checked\0"
    "on_bed_light_toggled\0on_dec_light_toggled\0"
    "on_fans_toggled\0on_curtain_toggled\0"
    "on_read_toggled\0on_back_home_toggled\0"
    "on_leave_home_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_master_bedroom[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
       9,    1,   75,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void master_bedroom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<master_bedroom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatetime(); break;
        case 1: _t->on_main_light_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_bed_light_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_dec_light_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_fans_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_curtain_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_read_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_back_home_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_leave_home_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject master_bedroom::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_master_bedroom.data,
    qt_meta_data_master_bedroom,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *master_bedroom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *master_bedroom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_master_bedroom.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int master_bedroom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
