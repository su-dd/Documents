#include "MainWindow.h"
#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      m_edtProcessId(nullptr)

{
    resize(400, 300);

    m_edtProcessId = new QLineEdit(this);

    auto btn1 = new QPushButton("test1", this);
    connect(btn1, &QPushButton::clicked, this, &MainWindow::onTest1);
    btn1->move(m_edtProcessId->width(), btn1->y());

}

MainWindow::~MainWindow()
{
}


void MainWindow::onTest1()
{
    if (m_edtProcessId->text().isEmpty())
    {
        QMessageBox::information(this, "", "input processId.");
    }

    DWORD processId = m_edtProcessId->text().toLong();
    HANDLE hProcess = OpenProcess(PROCESS_VM_OPERATION | SYNCHRONIZE,FALSE, processId);
    if (!hProcess)
    {
        die();
    }

    bool isDied(false);
    if (WAIT_OBJECT_0 == WaitForSingleObject(hProcess, INFINITE))
    {
        isDied = true;
    }
    CloseHandle(hProcess);
    if (isDied)
    {
        die();
    }
}

void MainWindow::die()
{
    QMessageBox::about(this, "MainForm::die", m_edtProcessId->text() + " died.");
}
