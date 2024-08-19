#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "singleton/singletonmaindialog.h"
#include "factory_method_v1/factorymethodclient.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_singleton_clicked()
{
    SingletonMainDialog dlg;
    dlg.exec();
}


void MainWindow::on_btn_factory_method_v1_clicked()
{
    FactoryMethodClient client;
}

