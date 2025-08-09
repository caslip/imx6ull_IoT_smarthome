#ifndef CAMERA_V4L2_H
#define CAMERA_V4L2_H

#include <QMainWindow>
#include "camera_thread.h"

namespace Ui {
class camera_v4l2;
}

class camera_v4l2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit camera_v4l2(QWidget *parent = nullptr);

    ~camera_v4l2();

signals:
    void startThread(bool);

private slots:

    void on_btn_toHome_clicked();

private:

    Ui::camera_v4l2 *ui;
    camera_thread *Thread;

    void resizeEvent(QResizeEvent *event) override;
private slots:
    void showImgOnScreen(QImage);

};

#endif // CAMERA_V4L2_H
