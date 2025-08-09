/******************************************************************
Copyright © Deng Zhimao Co., Ltd. 1990-2021. All rights reserved.
* @projectName   03_appmainview
* @brief         widget.h
* @author        Deng Zhimao
* @email         1252699831@qq.com
* @net           www.openedv.com
* @date          2021-06-09
*******************************************************************/
#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>

#include "../slidepage/slidepage.h"
#include "../appdemo/appdemo.h"
#include "../appdemo/master_bedroom.h"
#include "../appdemo/hang.h"
#include "esp8266.h"

class SlidePage;
class AppDemo;

class AppMainView : public QWidget
{
    Q_OBJECT

public:
    AppMainView(Esp8266* esp, QWidget *parent = nullptr);
    ~AppMainView();

private:
    Esp8266* m_esp;
    /* 背景 */
    QWidget *bgWidget ;

    /* 滑动页面管理对象 */
    SlidePage *mySlidePage;

    /* 重设大小 */
    void resizeEvent(QResizeEvent *event);

    master_bedroom *main_room;
    hang *hang_room;

private slots:
    void open_main_light();
    void close_main_light();
    void open_dec_light();
    void close_dec_light();
    void open_bed_light();
    void close_bed_light();

};
#endif // WIDGET_H
