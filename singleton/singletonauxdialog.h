#ifndef SINGLETONAUXDIALOG_H
#define SINGLETONAUXDIALOG_H

#include <QDialog>
#include "logger.h"

namespace Ui {
class SingletonAuxDialog;
}

class SingletonAuxDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SingletonAuxDialog(QWidget *parent = nullptr);
    ~SingletonAuxDialog();

private slots:
    void on_btn_action_2_clicked();

    void on_btn_close_clicked();

private:
    Ui::SingletonAuxDialog *ui;
    Logger *_logger;
};

#endif // SINGLETONAUXDIALOG_H
