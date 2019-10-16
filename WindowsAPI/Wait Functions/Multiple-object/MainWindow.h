#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "windows.h"

class TestThread : public QThread
{
public:
    TestThread(HANDLE event);
protected:
    void run() override;
private:
    HANDLE m_event;
};

class MainForm : public QMainWindow
{
    Q_OBJECT
public:
    MainForm(QWidget *parent = nullptr);
    ~MainForm();
private:
    void onTest1();
    void onTest2();

    HANDLE m_event;
};

#endif // MAINWINDOW_H
