#include "camera_thread.h"
#include <QDebug>

void camera_thread::run()
{
#ifdef linux
#ifndef __arm__
    return;
#endif
    int video_fd = -1;
    struct v4l2_format fmt;
    struct v4l2_requestbuffers req_bufs;
    static struct v4l2_buffer buf;
    int n_buf;
    struct buffer_info bufs_info[VIDEO_BUFFER_COUNT];
    enum v4l2_buf_type type;

    video_fd = open(VIDEO_DEV, O_RDWR);
    if (0 > video_fd) {
       qDebug()<<("ERROR: failed to open video device %s\n", VIDEO_DEV);
        return ;
    }

    qDebug()<<"open camera\n";
    fmt.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    fmt.fmt.pix.width = 640;
    fmt.fmt.pix.height = 480;
    fmt.fmt.pix.colorspace = V4L2_COLORSPACE_SRGB;
    fmt.fmt.pix.pixelformat = V4L2_PIX_FMT_RGB565;

    if (0 > ioctl(video_fd, VIDIOC_S_FMT, &fmt)) {
        qDebug()<<("ERROR: failed to VIDIOC_S_FMT\n");
        close(video_fd);
        return ;
    }

    req_bufs.count = VIDEO_BUFFER_COUNT;
    req_bufs.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    req_bufs.memory = V4L2_MEMORY_MMAP;

    if (0 > ioctl(video_fd, VIDIOC_REQBUFS, &req_bufs)) {
        qDebug()<<("ERROR: failed to VIDIOC_REQBUFS\n");
        return ;
    }

    buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    buf.memory = V4L2_MEMORY_MMAP;
    for (n_buf = 0; n_buf < VIDEO_BUFFER_COUNT; n_buf++) {

        buf.index = n_buf;
        if (0 > ioctl(video_fd, VIDIOC_QUERYBUF, &buf)) {
            qDebug()<<("ERROR: failed to VIDIOC_QUERYBUF\n");
            return ;
        }

        bufs_info[n_buf].length = buf.length;
        bufs_info[n_buf].start = mmap(NULL, buf.length,
                                      PROT_READ | PROT_WRITE, MAP_SHARED,
                                      video_fd, buf.m.offset);
        if (MAP_FAILED == bufs_info[n_buf].start) {
            qDebug()<<("ERROR: failed to mmap video buffer, size 0x%x\n", buf.length);
            return ;
        }
    }

    for (n_buf = 0; n_buf < VIDEO_BUFFER_COUNT; n_buf++) {

        buf.index = n_buf;
        if (0 > ioctl(video_fd, VIDIOC_QBUF, &buf)) {
            qDebug()<<("ERROR: failed to VIDIOC_QBUF\n");
            return ;
        }
    }

    type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    if (0 > ioctl(video_fd, VIDIOC_STREAMON, &type)) {
        qDebug()<<("ERROR: failed to VIDIOC_STREAMON\n");
        return ;
    }

    while (flag) {

        for (n_buf = 0; n_buf < VIDEO_BUFFER_COUNT; n_buf++) {

            buf.index = n_buf;

            if (0 > ioctl(video_fd, VIDIOC_DQBUF, &buf)) {
                qDebug()<<("ERROR: failed to VIDIOC_DQBUF\n");
                return;
            }

            QImage qImage((unsigned char*)bufs_info[n_buf].start, fmt.fmt.pix.width, fmt.fmt.pix.height, QImage::Format_RGB16);

            /* 开启本地显示 */
            emit imageReady(qImage);

            if (0 > ioctl(video_fd, VIDIOC_QBUF, &buf)) {
                qDebug()<<("ERROR: failed to VIDIOC_QBUF\n");
                return;
            }
        }
    }

    msleep(800);//at lease 650

    for (int i = 0; i < VIDEO_BUFFER_COUNT; i++) {
        munmap(bufs_info[i].start, buf.length);
    }

    close(video_fd);
#endif
}
