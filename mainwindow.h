#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_singleton_clicked();

    void on_btn_factory_method_v1_clicked();

    void on_btn_abstrac_factory_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
