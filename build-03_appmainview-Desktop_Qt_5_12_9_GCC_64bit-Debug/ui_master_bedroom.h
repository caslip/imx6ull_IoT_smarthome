/********************************************************************************
** Form generated from reading UI file 'master_bedroom.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTER_BEDROOM_H
#define UI_MASTER_BEDROOM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_master_bedroom
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *main_light;
    QPushButton *bed_light;
    QPushButton *dec_light;
    QPushButton *fans;
    QPushButton *curtain;
    QPushButton *read;
    QPushButton *back_home;
    QPushButton *leave_home;
    QLabel *time_label;
    QLabel *position_label;

    void setupUi(QWidget *master_bedroom)
    {
        if (master_bedroom->objectName().isEmpty())
            master_bedroom->setObjectName(QString::fromUtf8("master_bedroom"));
        master_bedroom->resize(800, 480);
        master_bedroom->setStyleSheet(QString::fromUtf8("QWidget{\n"
"		background-color: #696969\n"
"}"));
        widget = new QWidget(master_bedroom);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 771, 421));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 1, 10, -1);
        main_light = new QPushButton(widget);
        main_light->setObjectName(QString::fromUtf8("main_light"));
        main_light->setMinimumSize(QSize(100, 160));
        main_light->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/\344\270\273\347\201\257.png"), QSize(), QIcon::Normal, QIcon::Off);
        main_light->setIcon(icon);
        main_light->setIconSize(QSize(90, 90));
        main_light->setCheckable(true);

        gridLayout->addWidget(main_light, 0, 0, 1, 1);

        bed_light = new QPushButton(widget);
        bed_light->setObjectName(QString::fromUtf8("bed_light"));
        bed_light->setMinimumSize(QSize(100, 160));
        bed_light->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/\345\272\212\345\244\264\347\201\257.png"), QSize(), QIcon::Normal, QIcon::Off);
        bed_light->setIcon(icon1);
        bed_light->setIconSize(QSize(90, 90));
        bed_light->setCheckable(true);

        gridLayout->addWidget(bed_light, 0, 1, 1, 1);

        dec_light = new QPushButton(widget);
        dec_light->setObjectName(QString::fromUtf8("dec_light"));
        dec_light->setMinimumSize(QSize(100, 160));
        dec_light->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/\350\243\205\351\245\260\347\201\257.png"), QSize(), QIcon::Normal, QIcon::Off);
        dec_light->setIcon(icon2);
        dec_light->setIconSize(QSize(90, 90));
        dec_light->setCheckable(true);

        gridLayout->addWidget(dec_light, 0, 2, 1, 1);

        fans = new QPushButton(widget);
        fans->setObjectName(QString::fromUtf8("fans"));
        fans->setMinimumSize(QSize(100, 160));
        fans->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/\346\216\222\346\260\224\346\211\207.png"), QSize(), QIcon::Normal, QIcon::Off);
        fans->setIcon(icon3);
        fans->setIconSize(QSize(90, 90));
        fans->setCheckable(true);

        gridLayout->addWidget(fans, 0, 3, 1, 1);

        curtain = new QPushButton(widget);
        curtain->setObjectName(QString::fromUtf8("curtain"));
        curtain->setMinimumSize(QSize(100, 160));
        curtain->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/\347\252\227\345\270\230.png"), QSize(), QIcon::Normal, QIcon::Off);
        curtain->setIcon(icon4);
        curtain->setIconSize(QSize(90, 90));
        curtain->setCheckable(true);

        gridLayout->addWidget(curtain, 1, 0, 1, 1);

        read = new QPushButton(widget);
        read->setObjectName(QString::fromUtf8("read"));
        read->setMinimumSize(QSize(100, 160));
        read->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/\351\230\205\350\257\273.png"), QSize(), QIcon::Normal, QIcon::Off);
        read->setIcon(icon5);
        read->setIconSize(QSize(90, 90));
        read->setCheckable(true);

        gridLayout->addWidget(read, 1, 1, 1, 1);

        back_home = new QPushButton(widget);
        back_home->setObjectName(QString::fromUtf8("back_home"));
        back_home->setMinimumSize(QSize(100, 160));
        back_home->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/\345\233\236\346\210\277.png"), QSize(), QIcon::Normal, QIcon::Off);
        back_home->setIcon(icon6);
        back_home->setIconSize(QSize(90, 90));
        back_home->setCheckable(false);

        gridLayout->addWidget(back_home, 1, 2, 1, 1);

        leave_home = new QPushButton(widget);
        leave_home->setObjectName(QString::fromUtf8("leave_home"));
        leave_home->setMinimumSize(QSize(100, 160));
        leave_home->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/\347\246\273\346\210\277.png"), QSize(), QIcon::Normal, QIcon::Off);
        leave_home->setIcon(icon7);
        leave_home->setIconSize(QSize(90, 90));
        leave_home->setCheckable(false);

        gridLayout->addWidget(leave_home, 1, 3, 1, 1);

        time_label = new QLabel(master_bedroom);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setGeometry(QRect(490, 10, 201, 41));
        QFont font;
        font.setPointSize(15);
        time_label->setFont(font);
        time_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: white;\n"
"}"));
        time_label->setAlignment(Qt::AlignCenter);
        position_label = new QLabel(master_bedroom);
        position_label->setObjectName(QString::fromUtf8("position_label"));
        position_label->setGeometry(QRect(10, 10, 771, 41));
        position_label->setFont(font);
        position_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: white;\n"
"}"));
        position_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        widget->raise();
        position_label->raise();
        time_label->raise();

        retranslateUi(master_bedroom);

        QMetaObject::connectSlotsByName(master_bedroom);
    } // setupUi

    void retranslateUi(QWidget *master_bedroom)
    {
        master_bedroom->setWindowTitle(QApplication::translate("master_bedroom", "Form", nullptr));
        main_light->setText(QApplication::translate("master_bedroom", "\344\270\273\347\201\257", nullptr));
        bed_light->setText(QApplication::translate("master_bedroom", "\345\272\212\345\244\264\347\201\257", nullptr));
        dec_light->setText(QApplication::translate("master_bedroom", "\350\243\205\351\245\260\347\201\257", nullptr));
        fans->setText(QApplication::translate("master_bedroom", "\346\216\222\346\260\224\346\211\207", nullptr));
        curtain->setText(QApplication::translate("master_bedroom", "\347\252\227\345\270\230", nullptr));
        read->setText(QApplication::translate("master_bedroom", "\351\230\205\350\257\273", nullptr));
        back_home->setText(QApplication::translate("master_bedroom", "\345\233\236\346\210\277", nullptr));
        leave_home->setText(QApplication::translate("master_bedroom", "\347\246\273\346\210\277", nullptr));
        time_label->setText(QApplication::translate("master_bedroom", "2025-03-08 19:22:01", nullptr));
        position_label->setText(QApplication::translate("master_bedroom", "         \344\270\273\345\215\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class master_bedroom: public Ui_master_bedroom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTER_BEDROOM_H
