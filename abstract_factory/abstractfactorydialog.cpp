#include "abstractfactorydialog.h"
#include "ui_abstractfactorydialog.h"

AbstractFactoryDialog::AbstractFactoryDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AbstractFactoryDialog)
{
    ui->setupUi(this);
}

AbstractFactoryDialog::~AbstractFactoryDialog()
{
    delete ui;
}

void AbstractFactoryDialog::on_btn_rounded_shape_clicked()
{

}


void AbstractFactoryDialog::on_btn_rounded_shape_2_clicked()
{

}

