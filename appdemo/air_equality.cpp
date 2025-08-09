#include "air_equality.h"
#include "ui_air_equality.h"

air_equality::air_equality(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::air_equality)
{
    ui->setupUi(this);
}

air_equality::~air_equality()
{
    delete ui;
}
