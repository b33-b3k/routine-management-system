/****************************************************************************
** Meta object code from reading C++ file 'dashboard_1.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rmsfinalproject/RMS-main/dashboard_1.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dashboard_1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dashboard_1_t {
    const uint offsetsAndSize[40];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_dashboard_1_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_dashboard_1_t qt_meta_stringdata_dashboard_1 = {
    {
QT_MOC_LITERAL(0, 11), // "dashboard_1"
QT_MOC_LITERAL(12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 22), // "on_tableView_activated"
QT_MOC_LITERAL(58, 11), // "QModelIndex"
QT_MOC_LITERAL(70, 5), // "index"
QT_MOC_LITERAL(76, 25), // "on_pushButton_sun_clicked"
QT_MOC_LITERAL(102, 25), // "on_pushButton_mon_clicked"
QT_MOC_LITERAL(128, 25), // "on_pushButton_tue_clicked"
QT_MOC_LITERAL(154, 25), // "on_pushButton_wed_clicked"
QT_MOC_LITERAL(180, 25), // "on_pushButton_thu_clicked"
QT_MOC_LITERAL(206, 28), // "on_pushButton_friday_clicked"
QT_MOC_LITERAL(235, 9), // "loadTable"
QT_MOC_LITERAL(245, 3), // "day"
QT_MOC_LITERAL(249, 7), // "isAdmin"
QT_MOC_LITERAL(257, 5), // "admin"
QT_MOC_LITERAL(263, 34), // "on_comboBox_chooseCourse_acti..."
QT_MOC_LITERAL(298, 43), // "on_comboBox_chooseCourse_curr..."
QT_MOC_LITERAL(342, 4), // "arg1"
QT_MOC_LITERAL(347, 33) // "on_pushButton_updateTable_cli..."

    },
    "dashboard_1\0on_pushButton_clicked\0\0"
    "on_tableView_activated\0QModelIndex\0"
    "index\0on_pushButton_sun_clicked\0"
    "on_pushButton_mon_clicked\0"
    "on_pushButton_tue_clicked\0"
    "on_pushButton_wed_clicked\0"
    "on_pushButton_thu_clicked\0"
    "on_pushButton_friday_clicked\0loadTable\0"
    "day\0isAdmin\0admin\0on_comboBox_chooseCourse_activated\0"
    "on_comboBox_chooseCourse_currentTextChanged\0"
    "arg1\0on_pushButton_updateTable_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dashboard_1[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    1,   99,    2, 0x08,    2 /* Private */,
       6,    0,  102,    2, 0x08,    4 /* Private */,
       7,    0,  103,    2, 0x08,    5 /* Private */,
       8,    0,  104,    2, 0x08,    6 /* Private */,
       9,    0,  105,    2, 0x08,    7 /* Private */,
      10,    0,  106,    2, 0x08,    8 /* Private */,
      11,    0,  107,    2, 0x08,    9 /* Private */,
      12,    1,  108,    2, 0x08,   10 /* Private */,
      12,    2,  111,    2, 0x08,   12 /* Private */,
      15,    0,  116,    2, 0x08,   15 /* Private */,
      16,    1,  117,    2, 0x08,   16 /* Private */,
      17,    1,  120,    2, 0x08,   18 /* Private */,
      19,    0,  123,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,

       0        // eod
};

void dashboard_1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dashboard_1 *>(_o);
        (void)_t;
        switch (_id) {
        //case 0: _t->on_pushButton_clicked(); break;
        //case 1: _t->on_tableView_activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->on_pushButton_sun_clicked(); break;
        case 3: _t->on_pushButton_mon_clicked(); break;
        case 4: _t->on_pushButton_tue_clicked(); break;
        case 5: _t->on_pushButton_wed_clicked(); break;
        case 6: _t->on_pushButton_thu_clicked(); break;
        case 7: _t->on_pushButton_friday_clicked(); break;
        case 8: _t->loadTable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        //case 9: _t->loadTable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->admin(); break;
        //case 11: _t->on_comboBox_chooseCourse_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_comboBox_chooseCourse_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->on_pushButton_updateTable_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject dashboard_1::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_dashboard_1.offsetsAndSize,
    qt_meta_data_dashboard_1,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_dashboard_1_t
, QtPrivate::TypeAndForceComplete<dashboard_1, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *dashboard_1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dashboard_1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dashboard_1.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dashboard_1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
