#include <QCoreApplication>
#include "windows.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    const int c_BufferSize = 256;
    const QString c_FileMappingName = "MyFileMappingObject";

    HANDLE hMapFile = OpenFileMapping(
                    FILE_MAP_ALL_ACCESS,   // read/write access
                    FALSE,                 // do not inherit the name
                    c_FileMappingName.toStdWString().c_str()); // name of mapping object

    if (hMapFile == nullptr)
    {
       cout << "Could not open file mapping object " << GetLastError() << '.' << endl;
       return 1;
    }

    auto buffer = (char*)MapViewOfFile(hMapFile, // handle to map object
                FILE_MAP_ALL_ACCESS,  // read/write permission
                0,
                0,
                c_BufferSize);
    if (buffer == nullptr)
    {
       cout << "Could not map view of file " << GetLastError() << '.' << endl;
       CloseHandle(hMapFile);
       return 1;
    }

    auto message = std::string(buffer);
    cout << message << endl;

    UnmapViewOfFile(buffer);
    CloseHandle(hMapFile);

    return app.exec();
}
