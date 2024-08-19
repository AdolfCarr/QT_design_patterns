#include "singletonauxdialog.h"
#include "ui_singletonauxdialog.h"

SingletonAuxDialog::SingletonAuxDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SingletonAuxDialog)
{
    ui->setupUi(this);
}

SingletonAuxDialog::~SingletonAuxDialog()
{
    delete ui;
}

void SingletonAuxDialog::on_btn_action_2_clicked()
{
    qDebug() << "Action 2, Clicked...";
}


void SingletonAuxDialog::on_btn_close_clicked()
{
    qDebug() << "Singleton Aux Dialog, Closed...";
}


