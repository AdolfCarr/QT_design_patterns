#ifndef ABSTRACTFACTORYDIALOG_H
#define ABSTRACTFACTORYDIALOG_H

#include <QDialog>

namespace Ui {
class AbstractFactoryDialog;
}

class AbstractFactoryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AbstractFactoryDialog(QWidget *parent = nullptr);
    ~AbstractFactoryDialog();

private slots:
    void on_btn_rounded_shape_clicked();

    void on_btn_rounded_shape_2_clicked();

private:
    Ui::AbstractFactoryDialog *ui;
};

#endif // ABSTRACTFACTORYDIALOG_H
