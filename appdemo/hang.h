#ifndef HANG_H
#define HANG_H

#include <QWidget>
#include "esp8266.h"

namespace Ui {
class hang;
}

class hang : public QWidget
{
    Q_OBJECT

public:
    explicit hang(QWidget *parent = nullptr);
    ~hang();

private slots:
    void on_hang_light_toggled(bool checked);

    void on_dec_light_toggled(bool checked);

    void on_air_equality_clicked();

    void on_monitor_clicked();

    void on_back_hang_clicked();

    void on_leave_hang_clicked();

private:
    Ui::hang *ui;
};

#endif // HANG_H
