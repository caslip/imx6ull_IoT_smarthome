/********************************************************************************
** Form generated from reading UI file 'hang.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANG_H
#define UI_HANG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hang
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *leave_hang;
    QPushButton *air_equality;
    QPushButton *air_condition;
    QPushButton *hang_light;
    QPushButton *back_hang;
    QPushButton *read;
    QPushButton *monitor;
    QPushButton *dec_light;
    QLabel *time_label;
    QLabel *position_label;

    void setupUi(QWidget *hang)
    {
        if (hang->objectName().isEmpty())
            hang->setObjectName(QString::fromUtf8("hang"));
        hang->resize(800, 480);
        hang->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #696969;\n"
"}"));
        widget = new QWidget(hang);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 771, 421));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 1, -1, -1);
        leave_hang = new QPushButton(widget);
        leave_hang->setObjectName(QString::fromUtf8("leave_hang"));
        leave_hang->setMinimumSize(QSize(100, 160));
        leave_hang->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/\347\246\273\346\210\277.png"), QSize(), QIcon::Normal, QIcon::Off);
        leave_hang->setIcon(icon);
        leave_hang->setIconSize(QSize(90, 90));
        leave_hang->setCheckable(false);

        gridLayout->addWidget(leave_hang, 1, 3, 1, 1);

        air_equality = new QPushButton(widget);
        air_equality->setObjectName(QString::fromUtf8("air_equality"));
        air_equality->setMinimumSize(QSize(100, 160));
        air_equality->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/\347\251\272\346\260\224\350\264\250\351\207\217\346\243\200\346\265\213.png"), QSize(), QIcon::Normal, QIcon::Off);
        air_equality->setIcon(icon1);
        air_equality->setIconSize(QSize(90, 90));
        air_equality->setCheckable(false);

        gridLayout->addWidget(air_equality, 0, 2, 1, 1);

        air_condition = new QPushButton(widget);
        air_condition->setObjectName(QString::fromUtf8("air_condition"));
        air_condition->setMinimumSize(QSize(100, 160));
        air_condition->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/\347\251\272\350\260\203.png"), QSize(), QIcon::Normal, QIcon::Off);
        air_condition->setIcon(icon2);
        air_condition->setIconSize(QSize(80, 80));
        air_condition->setCheckable(false);

        gridLayout->addWidget(air_condition, 1, 0, 1, 1);

        hang_light = new QPushButton(widget);
        hang_light->setObjectName(QString::fromUtf8("hang_light"));
        hang_light->setMinimumSize(QSize(100, 160));
        hang_light->setCursor(QCursor(Qt::ArrowCursor));
        hang_light->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/\345\256\242\345\216\205\347\201\257.png"), QSize(), QIcon::Normal, QIcon::Off);
        hang_light->setIcon(icon3);
        hang_light->setIconSize(QSize(90, 90));
        hang_light->setCheckable(true);

        gridLayout->addWidget(hang_light, 0, 0, 1, 1);

        back_hang = new QPushButton(widget);
        back_hang->setObjectName(QString::fromUtf8("back_hang"));
        back_hang->setMinimumSize(QSize(100, 160));
        back_hang->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/\345\233\236\346\210\277.png"), QSize(), QIcon::Normal, QIcon::Off);
        back_hang->setIcon(icon4);
        back_hang->setIconSize(QSize(90, 90));
        back_hang->setCheckable(false);

        gridLayout->addWidget(back_hang, 1, 2, 1, 1);

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
        icon5.addFile(QString::fromUtf8(":/icons/\351\237\263\344\271\220.png"), QSize(), QIcon::Normal, QIcon::Off);
        read->setIcon(icon5);
        read->setIconSize(QSize(80, 80));
        read->setCheckable(false);

        gridLayout->addWidget(read, 1, 1, 1, 1);

        monitor = new QPushButton(widget);
        monitor->setObjectName(QString::fromUtf8("monitor"));
        monitor->setMinimumSize(QSize(100, 160));
        monitor->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/\347\233\221\346\216\247.png"), QSize(), QIcon::Normal, QIcon::Off);
        monitor->setIcon(icon6);
        monitor->setIconSize(QSize(90, 90));
        monitor->setCheckable(false);

        gridLayout->addWidget(monitor, 0, 3, 1, 1);

        dec_light = new QPushButton(widget);
        dec_light->setObjectName(QString::fromUtf8("dec_light"));
        dec_light->setMinimumSize(QSize(100, 160));
        dec_light->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"   color: white;\n"
"	background-color: #808080;\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/\350\243\205\351\245\260\347\201\257.png"), QSize(), QIcon::Normal, QIcon::Off);
        dec_light->setIcon(icon7);
        dec_light->setIconSize(QSize(90, 90));
        dec_light->setCheckable(true);

        gridLayout->addWidget(dec_light, 0, 1, 1, 1);

        time_label = new QLabel(hang);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setGeometry(QRect(490, 10, 201, 41));
        QFont font;
        font.setPointSize(15);
        time_label->setFont(font);
        time_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: white;\n"
"}"));
        time_label->setAlignment(Qt::AlignCenter);
        position_label = new QLabel(hang);
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

        retranslateUi(hang);

        QMetaObject::connectSlotsByName(hang);
    } // setupUi

    void retranslateUi(QWidget *hang)
    {
        hang->setWindowTitle(QApplication::translate("hang", "Form", nullptr));
        leave_hang->setText(QApplication::translate("hang", "\347\246\273\345\256\242\345\216\205", nullptr));
        air_equality->setText(QApplication::translate("hang", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        air_condition->setText(QApplication::translate("hang", "\347\251\272\350\260\203", nullptr));
        hang_light->setText(QApplication::translate("hang", "\345\256\242\345\216\205\347\201\257", nullptr));
        back_hang->setText(QApplication::translate("hang", "\345\233\236\345\256\242\345\216\205", nullptr));
        read->setText(QApplication::translate("hang", "\351\237\263\344\271\220", nullptr));
        monitor->setText(QApplication::translate("hang", "\347\233\221\346\216\247", nullptr));
        dec_light->setText(QApplication::translate("hang", "\350\243\205\351\245\260\347\201\257", nullptr));
        time_label->setText(QApplication::translate("hang", "2025-03-08 19:22:01", nullptr));
        position_label->setText(QApplication::translate("hang", "         \345\256\242\345\216\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hang: public Ui_hang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANG_H
