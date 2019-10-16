#include <QCoreApplication>
#include <QThread>
#include <iostream>
#include <string>
#include "windows.h"

static HANDLE g_event = nullptr;
static QString g_data;

class ReaderThread1 : public QThread
{
protected:
    virtual void run() override
    {
        WaitForSingleObject(g_event, INFINITE);
        ResetEvent(g_event);

        std::cout << QThread::currentThreadId() << ": ReaderThread1: " << g_data.toStdString() << std::endl;
    }
};

class ReaderThread2 : public QThread
{
protected:
    virtual void run() override
    {
        WaitForSingleObject(g_event, INFINITE);
        ResetEvent(g_event);

        std::cout << QThread::currentThreadId() << ": ReaderThread2: " << g_data.toStdString() << std::endl;
    }
};

class WriteThread : public QThread
{
protected:
    virtual void run() override
    {
        Sleep(5000);
        g_data = "global data!";
        SetEvent(g_event);
    }
};

int main(int argc, char *argv[])
{
    g_event = CreateEvent(nullptr, TRUE, FALSE, nullptr);

    WriteThread wt;
    ReaderThread1 rt1;
    ReaderThread2 rt2;

    wt.start();
    rt1.start();
    rt2.start();

    rt1.wait();
    rt2.wait();

    CloseHandle(g_event);

    system("pause");

    return 0;
}
