#ifndef LOGGER_H
#define LOGGER_H

#include <QString>
#include <QFile>

class Logger
{
public:
    Logger();
    void log(QString  message);

    ~Logger();
private:
    QFile *_logFile;
};

#endif // LOGGER_H
