#ifndef AIR_EQUALITY_H
#define AIR_EQUALITY_H

#include <QMainWindow>

namespace Ui {
class air_equality;
}

class air_equality : public QMainWindow
{
    Q_OBJECT

public:
    explicit air_equality(QWidget *parent = nullptr);
    ~air_equality();

private:
    Ui::air_equality *ui;
};

#endif // AIR_EQUALITY_H
