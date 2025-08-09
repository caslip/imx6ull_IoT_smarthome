#include "esp8266.h"
#include <unistd.h>
#include <QDebug>

Esp8266::Esp8266(QWidget *parent)
{
    Q_UNUSED(parent);
    /* 串口对象，用于与Esp8266模块通信 */
    serialPort = new QSerialPort(this);

    /* 定时器对象，用于定时发送设备在线的心跳包 */
    timer = new QTimer();

    /* 设置串口名 */
#if __arm__
    serialPort->setPortName("ttymxc2");
#else
    serialPort->setPortName("ttyUSB0");
#endif

    /* 设置波特率 */
    serialPort->setBaudRate(115200);

    /* 设置数据位数 */
    serialPort->setDataBits(QSerialPort::Data8);

    /* 设置奇偶校验 */
    serialPort->setParity(QSerialPort::NoParity);

    /* 设置停止位 */
    serialPort->setStopBits(QSerialPort::OneStop);

    /* 设置流控制 */
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    connect(serialPort, SIGNAL(readyRead()),
            this, SLOT(serialPortReadyRead()));

    connect(timer, SIGNAL(timeout()),
            this, SLOT(onTimerTimeOut()));
}

void Esp8266::Start()
{
    if (!serialPort->open(QIODevice::ReadWrite))
        qDebug()<<"串口无法打开！可能正在被使用！"<<endl;
    else {
        qDebug()<<"串口打开成功！"<<endl;
    }
    /* 开始连接云 */
    connectToClound();
}

void Esp8266::serialPortReadyRead()
{
    /* 接收缓冲区中读取数据 */
    QByteArray buf = serialPort->readAll();

    QString temp = QString(buf);
    readData.append(temp);
    qDebug()<<"Return cmd: "<<temp<<endl;

    if  (readData.contains("ready")) {
        /* 如果复位成功 */
        qDebug()<<"Reset success!"<<endl;
        sendCmdToEsp8266("AT+CWMODE=1");
        readData.clear();
    }

    if (readData.contains("OK") && readData.contains("AT+CWMODE")) {
        qDebug()<<"设置STA模式成功"<<endl;
        sendCmdToEsp8266("AT+CWJAP=\"TY\",\"a359335314\"");
        qDebug()<<"开始连接WIFI"<<endl;
        readData.clear();
    }

    if  (temp.contains("WIFI GOT IP")) {
        qDebug()<<"连接WIFI成功"<<endl;
        sleep(2);
        /* MQTT用户帐号设置 */
        sendCmdToEsp8266("AT+MQTTUSERCFG=0,1,\"client\",\"tianyi\",\"a359335314\",0,0,\"\"");
        qDebug()<<"uesr configing"<<endl;
    }
    if  (readData.contains("AT+MQTTUSERCFG") && readData.contains("OK")) {
        qDebug()<<"return data is: "<<readData<<endl;
        readData = nullptr;
        qDebug()<<"MQTT user config success!"<<endl;
        sleep(2);
        sendCmdToEsp8266("AT+MQTTCONN=0,\"broker.emqx.io\",1883,0");
    }

    if  (readData.contains("AT+MQTTCONN") && readData.contains("OK")) {
        qDebug()<<"return data is: "<<readData<<endl;
        readData = nullptr;
        qDebug()<<"MQTT connected!"<<endl;
//        sendCmdToEsp8266("AT+MQTTPUB=0,\"esp8266txtest\",\"demo\",0,0");
        sendMessageToServer("esp8266txtest", "this is a demo");
        sleep(2);
    }

}

Esp8266::~Esp8266()
{
    serialPort->close();
    delete timer;
    timer = nullptr;
}

void Esp8266::sendCmdToEsp8266(QString cmd)
{
    cmd = cmd + "\r\n";
    qDebug()<<"cmd is : "<<cmd<<endl;
    QByteArray data = cmd.toUtf8();
    serialPort->write(data);
}

void Esp8266::connectToClound()
{
    /* 重启模块，注意若已经连接上原子云，
     * 需要重新上电或者短接RST脚来复位模块 */
    sendCmdToEsp8266("AT+RST");
}

void Esp8266::sleep(int second)
{
    usleep(second * 1000000);
}

void Esp8266::sendMessageToServer(QString topic, QString cmd)
{
    QString command = "AT+MQTTPUB=0,\""+ topic + "\",\"" + cmd + "\",2,0" + "\r\n";
    qDebug()<<command<<endl;
    sendCmdToEsp8266(command);
}

void Esp8266::onTimerTimeOut()
{
    qDebug()<<"发送设备在线心跳包"<<endl;
}
