#include <QCoreApplication>
#include <iostream>
#include <QThread>
#include "windows.h"


static HANDLE g_Sem = nullptr;
static QString g_data;

class ReaderThread1 : public QThread
{
protected:
    virtual void run() override
    {
        WaitForSingleObject(g_Sem, INFINITE);
        std::cout << QThread::currentThreadId() << ": ReaderThread1: " << g_data.toStdString() << std::endl;
    }
};

class ReaderThread2 : public QThread
{
protected:
    virtual void run() override
    {
        WaitForSingleObject(g_Sem, INFINITE);
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
        ReleaseSemaphore(g_Sem, 1, nullptr);
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    g_Sem = CreateSemaphore(nullptr, 1, 2, nullptr);

    WriteThread wt;
    ReaderThread1 rt1;
    ReaderThread2 rt2;

    wt.start();
    rt1.start();
    rt2.start();

    rt1.wait();
    rt2.wait();

    CloseHandle(g_Sem);

    system("pause");

    return app.exec();
}
