#include "singletonmaindialog.h"
#include "ui_singletonmaindialog.h"

SingletonMainDialog::SingletonMainDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SingletonMainDialog)
{
    ui->setupUi(this);
    //_logger = new Logger();//Commented to implement singleton pattern
    _logger = Logger::getInstance();//Added to implement singleton pattern
}

SingletonMainDialog::~SingletonMainDialog()
{
    delete ui;
}

void SingletonMainDialog::on_btn_action_1_clicked()
{
    _logger->log("Action 1, Clicked");
    qDebug() << "Action 1, Clicked...";
    ui->lst_console->addItem("Action 1 clicked...");
}


void SingletonMainDialog::on_btn_goto_dialog_2_clicked()
{
    SingletonAuxDialog _dlg;
    _logger->log("Goto Dialog 2, Clicked");
    qDebug() << "Goto Dialog 2, Clicked";
    ui->lst_console->addItem("Goto Dialog 2, Clicked");
    _dlg.exec();
    ui->lst_console->addItem("Singleton Aux Dialog, Closed...");
}


void SingletonMainDialog::on_btn_close_clicked()
{
    qDebug() << "Singleton, Closed";
    ui->lst_console->addItem("Singleton, Closed");
    _logger->log("Singleton, Closed");
}
