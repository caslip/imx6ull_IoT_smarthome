#include "camera_v4l2.h"
#include "ui_camera_v4l2.h"
#include "hang.h"
#include <QImage>
#include <QLabel>

camera_v4l2::camera_v4l2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::camera_v4l2)
{
    ui->setupUi(this);
    this->setGeometry(0,0,800,480);
    this->setWindowTitle("监控画面");

    Thread = new camera_thread();
    Thread->flag = true;
    Thread->start();

    ui->label_imageshow->resize(640,480);

    /* 设置背景颜色为黑色 */
    QColor color = QColor(Qt::black);
    QPalette p;
    p.setColor(QPalette::Window, color);
    this->setPalette(p);

    connect(Thread, SIGNAL(imageReady(QImage)), this, SLOT(showImgOnScreen(QImage)));
}

camera_v4l2::~camera_v4l2()
{
    delete ui;
}

void camera_v4l2::showImgOnScreen(QImage image){
    ui->label_imageshow->setPixmap(QPixmap::fromImage(image));
}

void camera_v4l2::on_btn_toHome_clicked()
{
    Thread->flag = false;
    this->Thread->quit();
    this->close();
}

void camera_v4l2::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);
    ui->label_imageshow->move((this->width() - 640) / 2, (this->height() - 480) / 2);
}
