#ifndef CAMERA_THREAD_H
#define CAMERA_THREAD_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#ifdef linux
#include <linux/fb.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <linux/videodev2.h>
#include <linux/input.h>
#endif

#include <QThread>
#include <QDebug>
#include <QPushButton>
#include <QImage>
#include <QByteArray>
#include <QBuffer>
#include <QTime>

#define VIDEO_DEV			"/dev/video1"
#define FB_DEV				"/dev/fb0"
#define VIDEO_BUFFER_COUNT	3

#include <QThread>

struct buffer_info {
    void *start;
    unsigned int length;
};

class camera_thread : public QThread
{
    Q_OBJECT
public:
    camera_thread(QObject *parent = nullptr) {
        Q_UNUSED(parent);
    }
    bool flag = false;

signals:
    void imageReady(QImage);

private:
    void run() override;

};

#endif // CAMERA_THREAD_H
