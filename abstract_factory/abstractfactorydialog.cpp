#include "abstractfactorydialog.h"
#include "ui_abstractfactorydialog.h"

AbstractFactoryDialog::AbstractFactoryDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AbstractFactoryDialog)
{
    ui->setupUi(this);
    _shapeFactory = nullptr;

    setWindowIcon(QIcon("../../images/cplusplus.png"));
}

AbstractFactoryDialog::~AbstractFactoryDialog()
{
    delete ui;
}

void AbstractFactoryDialog::on_btn_rounded_shape_clicked()
{
    qDebug() << "--- Factory of Rounded Shapes Invoked ---";
    _shapeFactory = new RoundedShapeFactory();
    drawShapes();
}


void AbstractFactoryDialog::on_btn_rounded_shape_2_clicked()
{
    qDebug() << "--- Factory of Normal Shapes Invoked ---";
    _shapeFactory = new NormalShapeFactory();
    drawShapes();
}

void AbstractFactoryDialog::drawShapes()
{
    if(_shapeFactory != nullptr){
        _shapeFactory->getRectangle()->draw();
        _shapeFactory->getSquare()->draw();
    }
    qDebug() << "\n";
}

