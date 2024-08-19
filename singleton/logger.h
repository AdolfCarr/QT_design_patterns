#ifndef LOGGER_H
#define LOGGER_H

#include <QString>
#include <QFile>

class Logger
{
public:
    //Logger();//Commented to implement singleton pattern
    static Logger *getInstance();//Added to implement singleton pattern
    void log(QString  message);

    ~Logger();
private:
    QFile *_logFile;
    static Logger *_instance;//Added to implement singleton pattern
    Logger();//Added to implement singleton pattern
};

#endif // LOGGER_H
