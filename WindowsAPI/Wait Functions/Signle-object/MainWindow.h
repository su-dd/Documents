#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "windows.h"
#include <QMainWindow>
#include <QThread>
#include <QLineEdit>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    void onTest1();
    void die();

    QLineEdit *m_edtProcessId;

};
#endif // MAINWINDOW_H
