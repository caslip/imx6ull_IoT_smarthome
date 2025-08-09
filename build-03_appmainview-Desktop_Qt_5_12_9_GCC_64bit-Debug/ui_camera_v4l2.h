/********************************************************************************
** Form generated from reading UI file 'camera_v4l2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_V4L2_H
#define UI_CAMERA_V4L2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_camera_v4l2
{
public:
    QWidget *centralwidget;
    QPushButton *btn_toHome;
    QLabel *label_imageshow;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *camera_v4l2)
    {
        if (camera_v4l2->objectName().isEmpty())
            camera_v4l2->setObjectName(QString::fromUtf8("camera_v4l2"));
        camera_v4l2->resize(800, 480);
        camera_v4l2->setMaximumSize(QSize(800, 480));
        centralwidget = new QWidget(camera_v4l2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_toHome = new QPushButton(centralwidget);
        btn_toHome->setObjectName(QString::fromUtf8("btn_toHome"));
        btn_toHome->setGeometry(QRect(710, 430, 89, 25));
        label_imageshow = new QLabel(centralwidget);
        label_imageshow->setObjectName(QString::fromUtf8("label_imageshow"));
        label_imageshow->setGeometry(QRect(0, 0, 800, 480));
        camera_v4l2->setCentralWidget(centralwidget);
        label_imageshow->raise();
        btn_toHome->raise();
        menubar = new QMenuBar(camera_v4l2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        camera_v4l2->setMenuBar(menubar);
        statusbar = new QStatusBar(camera_v4l2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        camera_v4l2->setStatusBar(statusbar);

        retranslateUi(camera_v4l2);

        QMetaObject::connectSlotsByName(camera_v4l2);
    } // setupUi

    void retranslateUi(QMainWindow *camera_v4l2)
    {
        camera_v4l2->setWindowTitle(QApplication::translate("camera_v4l2", "MainWindow", nullptr));
        btn_toHome->setText(QApplication::translate("camera_v4l2", "Back", nullptr));
        label_imageshow->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class camera_v4l2: public Ui_camera_v4l2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_V4L2_H
