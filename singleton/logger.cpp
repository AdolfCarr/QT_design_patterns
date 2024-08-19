#include "logger.h"
#include <QDir>
#include <QDateTime>

Logger::Logger() {

    // Define the relative path to the 'singleton' folder
    QString folderPath = QDir::currentPath() + "/../../singleton/log/";

    // Ensure the folder exists, create it if it doesn't
    QDir().mkpath(folderPath);

    // Generate the file name with the folder path included
    auto fileName = folderPath + QDateTime::currentDateTime().toString("yyyy_MM_dd_hh_mm_ss") + ".txt";
    _logFile = new QFile(fileName);
    _logFile->open(QFile::WriteOnly);
}

void Logger::log(QString message){
    auto log = QString("%0 -- %1 \n").arg(QDateTime::currentDateTime().toString()).arg(message);
    _logFile->write(log.toUtf8());
    _logFile->flush();
}

Logger::~Logger(){
    _logFile->close();
    delete _logFile;
}
