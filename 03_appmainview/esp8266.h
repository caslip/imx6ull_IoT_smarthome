#ifndef ESP8266_H
#define ESP8266_H

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>

class Esp8266 : public QObject
{
    Q_OBJECT

public:
    static Esp8266& getInstance() {
        static Esp8266 instance;
        return instance;
    }

    Esp8266(QWidget *parent = nullptr);

    ~Esp8266();

    void sendMessageToServer(QString topic, QString cmd);

    void Start();


private:

    /* 定时器，发送心跳包 */
    QTimer *timer;

    /* 串口对象 */
    QSerialPort *serialPort;

    /* 发送命令到esp8266模块 */
    void sendCmdToEsp8266(QString cmd);

    /* 接收到的数据 */
    QString readData = nullptr;

    /* 延时函数 */
    void sleep(int);

    /* 连接到云服务器 */
    void connectToClound();

private slots:
    /* 串口读消息 */
    void serialPortReadyRead();

    /* 定时器时间到，发送心跳包 */
    void onTimerTimeOut();
};
#endif // ESP8266_H
