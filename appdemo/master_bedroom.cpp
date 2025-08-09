#include "master_bedroom.h"
#include "ui_master_bedroom.h"
#include <QDateTime>
#include <QDebug>
#include "esp8266.h"

master_bedroom::master_bedroom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::master_bedroom)
{
    ui->setupUi(this);
    // 设置时间显示
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(updatetime()));
    timer->start(1000);

}

master_bedroom::~master_bedroom()
{
    delete ui;
}

void master_bedroom::updatetime(){
    this->ui->time_label->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
}

void master_bedroom::on_main_light_toggled(bool checked)
{
    if(checked){
        emit open_main_light();
        this->ui->main_light->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                            "color: black;}");
    }else{
        emit close_main_light();
        this->ui->main_light->setStyleSheet("QPushButton{ background-color: #808080;"
                                            "color: white}");
    }
}

void master_bedroom::on_bed_light_toggled(bool checked)
{
    if(checked){
        emit open_bed_light();
        this->ui->bed_light->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                            "color: black;}");
    }else{
        emit close_bed_light();
        this->ui->bed_light->setStyleSheet("QPushButton{ background-color: #808080;"
                                            "color: white}");
    }
}

void master_bedroom::on_dec_light_toggled(bool checked)
{
    if(checked){
        emit open_dec_light();
        this->ui->dec_light->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                            "color: black;}");
    }else{
        emit close_dec_light();
        this->ui->dec_light->setStyleSheet("QPushButton{ background-color: #808080;"
                                            "color: white}");
    }
}

void master_bedroom::on_fans_toggled(bool checked)
{
    if(checked){
        this->ui->fans->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                            "color: black;}");
    }else{
        this->ui->fans->setStyleSheet("QPushButton{ background-color: #808080;"
                                            "color: white}");
    }
}

void master_bedroom::on_curtain_toggled(bool checked)
{
    if(checked){
        this->ui->curtain->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                            "color: black;}");
    }else{
        this->ui->curtain->setStyleSheet("QPushButton{ background-color: #808080;"
                                            "color: white}");
    }
}

void master_bedroom::on_read_toggled(bool checked)
{
    if(checked){
        this->ui->read->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                            "color: black;}");
    }else{
        this->ui->read->setStyleSheet("QPushButton{ background-color: #808080;"
                                            "color: white}");
    }
}

void master_bedroom::on_back_home_clicked()
{

    this->ui->main_light->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                        "color: black;}");
    this->ui->dec_light->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                        "color: black;}");
    this->ui->bed_light->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                        "color: black;}");
    this->ui->fans->setStyleSheet("QPushButton{ background-color: #808080;"
                                        "color: white}");
    // 打开床头灯、主灯、装饰灯，关闭排气扇

}

void master_bedroom::on_leave_home_clicked()
{
    this->ui->main_light->setStyleSheet("QPushButton{ background-color: #808080;"
                                        "color: white;}");
    this->ui->dec_light->setStyleSheet("QPushButton{ background-color: #808080;"
                                        "color: white;}");
    this->ui->bed_light->setStyleSheet("QPushButton{ background-color: #808080;"
                                        "color: white;}");
    this->ui->fans->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                        "color: black}");
    // 打开床头灯、主灯、装饰灯，关闭排气扇
}
