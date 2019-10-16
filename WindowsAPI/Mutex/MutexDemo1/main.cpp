#include <QCoreApplication>
#include "windows.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    HANDLE hMutex = OpenMutex(SYNCHRONIZE, FALSE, L"Mutex1");
    if (hMutex)
    {
        return 0;
    }

    CreateMutex(nullptr, true, L"Mutex1");

    QCoreApplication a(argc, argv);

    qDebug() << "This Run;";

    return a.exec();
}
