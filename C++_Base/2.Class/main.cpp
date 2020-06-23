#include <QCoreApplication>
#include <iostream>
#include <stdio.h>
#include <limits>
#include <QString>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /* code */
//    cout.imbue(locale("chs"));
    cout << "short size : " << sizeof(short)
         << "\t 最大值：" << (numeric_limits<short>::max)()
         << "\t 最小值：" << (numeric_limits<short>::min)() << endl;

    cout << "int size : " << sizeof(int)
         << "\t最大值：" << (numeric_limits<int>::max)()
         << "\t最小值：" << (numeric_limits<int>::min)() << endl;

    cout << "long size : " << sizeof(long)
         << "\t最大值：" << (numeric_limits<long>::max)()
         << "\t最小值：" << (numeric_limits<long>::min)() << endl;

    cout << "short int size : " << sizeof(short int)
         << "\t最大值：" << (numeric_limits<short int>::max)()
         << "\t最小值：" << (numeric_limits<short int>::min)() << endl;

    cout << "long int size : " << sizeof(long int)
         << "\t最大值：" << (numeric_limits<long int>::max)()
         << "\t最小值：" << (numeric_limits<long int>::min)() << endl;

    cout << "long long size : " << sizeof(long long)
         << "\t最大值：" << (numeric_limits<long long>::max)()
         << "\t最小值：" << (numeric_limits<long long>::min)() << endl;

    cout << "bool size : " << sizeof(bool)
         << "\t最大值：" << (numeric_limits<bool>::max)()
         << "\t最小值：" << (numeric_limits<bool>::min)() << endl;

    cout << "char size : " << sizeof(char)
         << "\t最大值：" << (numeric_limits<char>::max)()
         << "\t最小值：" << (numeric_limits<char>::min)() << endl;

    cout << "wchar_t size : " << sizeof(wchar_t)
         << "\t最大值：" << (numeric_limits<wchar_t>::max)()
         << "\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;

    cout << "float size : " << sizeof(float)
         << "\t最大值：" << (numeric_limits<float>::max)()
         << "\t最小值：" << (numeric_limits<float>::min)() << endl;

    cout << "double size : " << sizeof(double)
         << "\t最大值：" << (numeric_limits<double>::max)()
         << "\t最小值：" << (numeric_limits<double>::min)() << endl;

    cout << "long double size : " << sizeof(long double)
         << "\t最大值：" << (numeric_limits<long double>::max)()
         << "\t最小值：" << (numeric_limits<long double>::min)() << endl;

    return a.exec();
}
