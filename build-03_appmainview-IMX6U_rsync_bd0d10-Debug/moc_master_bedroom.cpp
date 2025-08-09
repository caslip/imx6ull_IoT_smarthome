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
    QByteArrayData data[18];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_master_bedroom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_master_bedroom_t qt_meta_stringdata_master_bedroom = {
    {
QT_MOC_LITERAL(0, 0, 14), // "master_bedroom"
QT_MOC_LITERAL(1, 15, 15), // "open_main_light"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "close_main_light"
QT_MOC_LITERAL(4, 49, 14), // "open_bed_light"
QT_MOC_LITERAL(5, 64, 15), // "close_bed_light"
QT_MOC_LITERAL(6, 80, 14), // "open_dec_light"
QT_MOC_LITERAL(7, 95, 15), // "close_dec_light"
QT_MOC_LITERAL(8, 111, 10), // "updatetime"
QT_MOC_LITERAL(9, 122, 21), // "on_main_light_toggled"
QT_MOC_LITERAL(10, 144, 7), // "checked"
QT_MOC_LITERAL(11, 152, 20), // "on_bed_light_toggled"
QT_MOC_LITERAL(12, 173, 20), // "on_dec_light_toggled"
QT_MOC_LITERAL(13, 194, 15), // "on_fans_toggled"
QT_MOC_LITERAL(14, 210, 18), // "on_curtain_toggled"
QT_MOC_LITERAL(15, 229, 15), // "on_read_toggled"
QT_MOC_LITERAL(16, 245, 20), // "on_back_home_clicked"
QT_MOC_LITERAL(17, 266, 21) // "on_leave_home_clicked"

    },
    "master_bedroom\0open_main_light\0\0"
    "close_main_light\0open_bed_light\0"
    "close_bed_light\0open_dec_light\0"
    "close_dec_light\0updatetime\0"
    "on_main_light_toggled\0checked\0"
    "on_bed_light_toggled\0on_dec_light_toggled\0"
    "on_fans_toggled\0on_curtain_toggled\0"
    "on_read_toggled\0on_back_home_clicked\0"
    "on_leave_home_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_master_bedroom[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   95,    2, 0x08 /* Private */,
       9,    1,   96,    2, 0x08 /* Private */,
      11,    1,   99,    2, 0x08 /* Private */,
      12,    1,  102,    2, 0x08 /* Private */,
      13,    1,  105,    2, 0x08 /* Private */,
      14,    1,  108,    2, 0x08 /* Private */,
      15,    1,  111,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void master_bedroom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<master_bedroom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open_main_light(); break;
        case 1: _t->close_main_light(); break;
        case 2: _t->open_bed_light(); break;
        case 3: _t->close_bed_light(); break;
        case 4: _t->open_dec_light(); break;
        case 5: _t->close_dec_light(); break;
        case 6: _t->updatetime(); break;
        case 7: _t->on_main_light_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_bed_light_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_dec_light_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_fans_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_curtain_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_read_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_back_home_clicked(); break;
        case 14: _t->on_leave_home_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (master_bedroom::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&master_bedroom::open_main_light)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (master_bedroom::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&master_bedroom::close_main_light)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (master_bedroom::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&master_bedroom::open_bed_light)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (master_bedroom::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&master_bedroom::close_bed_light)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (master_bedroom::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&master_bedroom::open_dec_light)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (master_bedroom::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&master_bedroom::close_dec_light)) {
                *result = 5;
                return;
            }
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void master_bedroom::open_main_light()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void master_bedroom::close_main_light()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void master_bedroom::open_bed_light()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void master_bedroom::close_bed_light()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void master_bedroom::open_dec_light()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void master_bedroom::close_dec_light()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
