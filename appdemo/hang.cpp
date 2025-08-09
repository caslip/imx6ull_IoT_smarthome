#include "hang.h"
#include "ui_hang.h"
#include "camera_v4l2.h"

hang::hang(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hang)
{
    ui->setupUi(this);
}

hang::~hang()
{
    delete ui;
}

void hang::on_hang_light_toggled(bool checked)
{
    if(checked){
        this->ui->hang_light->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                            "color: black;}");
    }else{
        this->ui->hang_light->setStyleSheet("QPushButton{ background-color: #808080;"
                                            "color: white}");
    }
}

void hang::on_dec_light_toggled(bool checked)
{
    if(checked){
        this->ui->dec_light->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                            "color: black;}");
    }else{
        this->ui->dec_light->setStyleSheet("QPushButton{ background-color: #808080;"
                                            "color: white}");
    }
}


void hang::on_air_equality_clicked()
{

}

void hang::on_monitor_clicked()
{
    camera_v4l2 *c = new camera_v4l2();
    c->show();
}

void hang::on_back_hang_clicked()
{
    this->ui->hang_light->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                        "color: black;}");
    this->ui->dec_light->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                        "color: black;}");
    this->ui->air_condition->setStyleSheet("QPushButton{ background-color: #B8860B;"
                                        "color: black;}");
}

void hang::on_leave_hang_clicked()
{
    this->ui->hang_light->setStyleSheet("QPushButton{ background-color: #808080;"
                                        "color: white;}");
    this->ui->dec_light->setStyleSheet("QPushButton{ background-color: #808080;"
                                        "color: white;}");
    this->ui->air_condition->setStyleSheet("QPushButton{ background-color: #808080;"
                                        "color: white;}");
}
