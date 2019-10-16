#include <QCoreApplication>
#include "windows.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    const int c_BufferSize = 256;
    const QString c_FileMappingName = "MyFileMappingObject";

    HANDLE hMapFile = CreateFileMapping(
                INVALID_HANDLE_VALUE,           // use paging file
                NULL,                           // default security
                PAGE_READWRITE,                 // read/write access
                0,                              // maximum object size (high-order DWORD)
                c_BufferSize,                   // maximum object size (low-order DWORD)
                c_FileMappingName.toStdWString().c_str()); // name of mapping object
    if (hMapFile == nullptr)
    {
        cout << "Could not create file mapping object " << GetLastError() << '.' << endl;
        return 1;
    }

    auto buffer = (unsigned char *)MapViewOfFile(hMapFile,   // handle to map object
                                                 FILE_MAP_ALL_ACCESS, // read/write permission
                                                 0,
                                                 0,
                                                 c_BufferSize);
    if (buffer == nullptr)
    {
        cout << "Could not map view of file " << GetLastError() << '.' << endl;
        CloseHandle(hMapFile);
        return 1;
    }

    std::string message;
    cout << "input message:";
    cin >> message;

    memcpy_s((void*)buffer, c_BufferSize, message.c_str(), message.size());

    system("pause");

    UnmapViewOfFile(buffer);
    CloseHandle(hMapFile);

    return app.exec();
}

