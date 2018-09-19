/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

<<<<<<< HEAD
#include "../../WeerProject/settings.h"
=======
#include "../../../../../../Desktop/QT_project/WeerProject/settings.h"
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Settings_t {
<<<<<<< HEAD
    QByteArrayData data[10];
    char stringdata0[191];
=======
    QByteArrayData data[7];
    char stringdata0[123];
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Settings_t qt_meta_stringdata_Settings = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Settings"
QT_MOC_LITERAL(1, 9, 22), // "on_cbTemp_stateChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "on_cbHumid_stateChanged"
QT_MOC_LITERAL(4, 57, 23), // "on_cbSpeed_stateChanged"
QT_MOC_LITERAL(5, 81, 24), // "on_cbBright_stateChanged"
<<<<<<< HEAD
QT_MOC_LITERAL(6, 106, 16), // "on_Apply_clicked"
QT_MOC_LITERAL(7, 123, 28), // "on_AmountSlider_valueChanged"
QT_MOC_LITERAL(8, 152, 5), // "value"
QT_MOC_LITERAL(9, 158, 32) // "on_ResolutionSlider_valueChanged"
=======
QT_MOC_LITERAL(6, 106, 16) // "on_Apply_clicked"
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8

    },
    "Settings\0on_cbTemp_stateChanged\0\0"
    "on_cbHumid_stateChanged\0on_cbSpeed_stateChanged\0"
<<<<<<< HEAD
    "on_cbBright_stateChanged\0on_Apply_clicked\0"
    "on_AmountSlider_valueChanged\0value\0"
    "on_ResolutionSlider_valueChanged"
=======
    "on_cbBright_stateChanged\0on_Apply_clicked"
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Settings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< HEAD
       7,   14, // methods
=======
       5,   14, // methods
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
<<<<<<< HEAD
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,
=======
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
<<<<<<< HEAD
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
=======
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8

       0        // eod
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Settings *_t = static_cast<Settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cbTemp_stateChanged(); break;
        case 1: _t->on_cbHumid_stateChanged(); break;
        case 2: _t->on_cbSpeed_stateChanged(); break;
        case 3: _t->on_cbBright_stateChanged(); break;
        case 4: _t->on_Apply_clicked(); break;
<<<<<<< HEAD
        case 5: _t->on_AmountSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_ResolutionSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
=======
        default: ;
        }
    }
    Q_UNUSED(_a);
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
}

QT_INIT_METAOBJECT const QMetaObject Settings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Settings.data,
      qt_meta_data_Settings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Settings.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
<<<<<<< HEAD
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
=======
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
