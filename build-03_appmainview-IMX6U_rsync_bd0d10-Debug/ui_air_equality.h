/********************************************************************************
** Form generated from reading UI file 'air_equality.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIR_EQUALITY_H
#define UI_AIR_EQUALITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_air_equality
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *air_equality)
    {
        if (air_equality->objectName().isEmpty())
            air_equality->setObjectName(QString::fromUtf8("air_equality"));
        air_equality->resize(800, 600);
        centralwidget = new QWidget(air_equality);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        air_equality->setCentralWidget(centralwidget);

        retranslateUi(air_equality);

        QMetaObject::connectSlotsByName(air_equality);
    } // setupUi

    void retranslateUi(QMainWindow *air_equality)
    {
        air_equality->setWindowTitle(QApplication::translate("air_equality", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class air_equality: public Ui_air_equality {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIR_EQUALITY_H
