#ifndef MASTER_BEDROOM_H
#define MASTER_BEDROOM_H

#include <QWidget>
#include <QTimer>
#include "esp8266.h"

namespace Ui {
class master_bedroom;
}

class master_bedroom : public QWidget
{
    Q_OBJECT

public:
    explicit master_bedroom(QWidget *parent = nullptr);
    ~master_bedroom();

private:
    Ui::master_bedroom *ui;
    QTimer* timer;

private slots:
    void updatetime();
    void on_main_light_toggled(bool checked);
    void on_bed_light_toggled(bool checked);
    void on_dec_light_toggled(bool checked);
    void on_fans_toggled(bool checked);
    void on_curtain_toggled(bool checked);
    void on_read_toggled(bool checked);
    void on_back_home_clicked();
    void on_leave_home_clicked();

signals:
    void open_main_light();
    void close_main_light();
    void open_bed_light();
    void close_bed_light();
    void open_dec_light();
    void close_dec_light();

};

#endif // MASTER_BEDROOM_H
