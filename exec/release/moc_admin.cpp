/****************************************************************************
** Meta object code from reading C++ file 'admin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rmsfinalproject/RMS-main/admin.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_admin_t {
    const uint offsetsAndSize[24];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_admin_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_admin_t qt_meta_stringdata_admin = {
    {
QT_MOC_LITERAL(0, 5), // "admin"
QT_MOC_LITERAL(6, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 30), // "on_comboBox_currentTextChanged"
QT_MOC_LITERAL(60, 4), // "arg1"
QT_MOC_LITERAL(65, 32), // "on_comboBox_2_currentTextChanged"
QT_MOC_LITERAL(98, 33), // "on_comboBox_2_currentIndexCha..."
QT_MOC_LITERAL(132, 5), // "index"
QT_MOC_LITERAL(138, 33), // "on_comboBox_3_currentIndexCha..."
QT_MOC_LITERAL(172, 7), // "display"
QT_MOC_LITERAL(180, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(204, 23) // "on_pushButton_3_clicked"

    },
    "admin\0on_pushButton_clicked\0\0"
    "on_comboBox_currentTextChanged\0arg1\0"
    "on_comboBox_2_currentTextChanged\0"
    "on_comboBox_2_currentIndexChanged\0"
    "index\0on_comboBox_3_currentIndexChanged\0"
    "display\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_admin[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    1,   63,    2, 0x08,    2 /* Private */,
       5,    1,   66,    2, 0x08,    4 /* Private */,
       6,    1,   69,    2, 0x08,    6 /* Private */,
       8,    1,   72,    2, 0x08,    8 /* Private */,
       9,    0,   75,    2, 0x08,   10 /* Private */,
      10,    0,   76,    2, 0x08,   11 /* Private */,
      11,    0,   77,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<admin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_comboBox_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        //case 2: _t->on_comboBox_2_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_comboBox_2_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_comboBox_3_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->display(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject admin::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_admin.offsetsAndSize,
    qt_meta_data_admin,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_admin_t
, QtPrivate::TypeAndForceComplete<admin, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *admin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_admin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
