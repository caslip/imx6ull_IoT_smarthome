#include "widget.h"
#include <QPushButton>
#include <QDebug>

AppMainView::AppMainView(Esp8266 *esp, QWidget *parent)
    : QWidget(parent), m_esp(esp)
{
    this->setParent(parent);
    this->setGeometry(0, 0, 800, 480);
    this->setMinimumSize(800, 480);

    bgWidget = new QWidget(this);
    bgWidget->setStyleSheet("border-image: url(:/images/bg.png)");

    mySlidePage = new SlidePage(this);
    mySlidePage->resize(this->size());

    main_room = new master_bedroom();
    mySlidePage->addPage(main_room);

    hang_room = new hang();
    mySlidePage->addPage(hang_room);

    connect(main_room, SIGNAL(open_main_light()), this, SLOT(open_main_light()));
    connect(main_room, SIGNAL(close_main_light()), this, SLOT(close_main_light()));
    connect(main_room, SIGNAL(open_dec_light()), this, SLOT(open_dec_light()));
    connect(main_room, SIGNAL(close_dec_light()), this, SLOT(close_dec_light()));
    connect(main_room, SIGNAL(open_bed_light()), this, SLOT(open_bed_light()));
    connect(main_room, SIGNAL(close_bed_light()), this, SLOT(close_bed_light()));
}

AppMainView::~AppMainView()
{
}


void AppMainView::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);
    bgWidget->resize(this->size());
}

void AppMainView::open_main_light()
{
    m_esp->sendMessageToServer("main_light", "open");
}

void AppMainView::close_main_light()
{
    m_esp->sendMessageToServer("main_light", "close");
}
void AppMainView::open_dec_light()
{
    m_esp->sendMessageToServer("dec_light", "open");
}

void AppMainView::close_dec_light()
{
    m_esp->sendMessageToServer("dec_light", "close");
}

void AppMainView::open_bed_light()
{
    m_esp->sendMessageToServer("bed_light", "open");
}

void AppMainView::close_bed_light()
{
    m_esp->sendMessageToServer("bed_light", "close");
}
