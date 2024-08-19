#ifndef SINGLETONMAINDIALOG_H
#define SINGLETONMAINDIALOG_H

#include <QDialog>
#include "singletonauxdialog.h"

namespace Ui {
class SingletonMainDialog;
}

class SingletonMainDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SingletonMainDialog(QWidget *parent = nullptr);
    ~SingletonMainDialog();

private slots:
    void on_btn_action_1_clicked();

    void on_btn_goto_dialog_2_clicked();

    void on_btn_close_clicked();

private:
    Ui::SingletonMainDialog *ui;
    SingletonAuxDialog _dlg;
};

#endif // SINGLETONMAINDIALOG_H
