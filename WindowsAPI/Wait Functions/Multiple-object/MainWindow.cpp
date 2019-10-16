#include "MainWindow.h"
#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

TestThread::TestThread(HANDLE event):
    m_event(event)
{

}

void TestThread::run()
{
    Sleep(10000);
    SetEvent(m_event);
}

MainForm::MainForm(QWidget *parent)
    : QMainWindow(parent),
      m_event(nullptr)
{
    resize(400, 300);

    auto btn1 = new QPushButton("test1", this);
    connect(btn1, &QPushButton::clicked, this, &MainForm::onTest1);

    auto btn2 = new QPushButton("test2", this);
    connect(btn2, &QPushButton::clicked, this, &MainForm::onTest2);
    btn2->move(btn1->width() + 10, btn2->y());

    m_event = CreateEvent(nullptr, TRUE, FALSE, nullptr);
}

MainForm::~MainForm()
{
    CloseHandle(m_event);
}

void MainForm::onTest1()
{
    HANDLE aEvents[1];
    aEvents[0] = m_event;

    TestThread testThread(m_event);
    testThread.start();

    while (true)
    {
        DWORD waitResult = MsgWaitForMultipleObjects(1, aEvents, FALSE, INFINITE, QS_ALLEVENTS);
        if (waitResult == WAIT_OBJECT_0)
        {
            QMessageBox::about(this, "MainForm::onTest1", "TestThread set Event.");
            break;
        }
        else
        {
            qApp->processEvents();
        }
    }

    QMessageBox::about(this, "MainForm::onTest1", "onTest1 OK!");
}

void MainForm::onTest2()
{
    QMessageBox::about(this, "MainForm::onTest2", "onTest2 OK!");
}
