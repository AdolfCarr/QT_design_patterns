#include "singletonauxdialog.h"
#include "ui_singletonauxdialog.h"

SingletonAuxDialog::SingletonAuxDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SingletonAuxDialog)
{
    ui->setupUi(this);
    _logger = new Logger();
}

SingletonAuxDialog::~SingletonAuxDialog()
{
    delete ui;
}

void SingletonAuxDialog::on_btn_action_2_clicked()
{
    _logger->log("Action 2, Clicked");
    qDebug() << "Action 2, Clicked...";
}


void SingletonAuxDialog::on_btn_close_clicked()
{
    _logger->log("Singleton Aux Dialog, Closed");
    qDebug() << "Singleton Aux Dialog, Closed...";
}


