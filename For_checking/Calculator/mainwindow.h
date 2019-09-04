#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
double numberFirst;

private:
    Ui::MainWindow *ui;

private slots:
    void numbers();
    void dot();
    void actions();
    void ressult();
    void clear();
};

#endif // MAINWINDOW_H
