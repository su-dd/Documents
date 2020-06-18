#include <iostream>
#include <stdio.h>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    cout << "short size : " << sizeof(short)
         << "\t���ֵ��" << (numeric_limits<short>::max)()
         << "\t��Сֵ��" << (numeric_limits<short>::min)() << endl;

    cout << "int size : " << sizeof(int)
         << "\t���ֵ��" << (numeric_limits<int>::max)()
         << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;

    cout << "long size : " << sizeof(long)
         << "\t���ֵ��" << (numeric_limits<long>::max)()
         << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;

    cout << "short int size : " << sizeof(short int)
         << "\t���ֵ��" << (numeric_limits<short int>::max)()
         << "\t��Сֵ��" << (numeric_limits<short int>::min)() << endl;

    cout << "long int size : " << sizeof(long int)
         << "\t���ֵ��" << (numeric_limits<long int>::max)()
         << "\t��Сֵ��" << (numeric_limits<long int>::min)() << endl;

    cout << "long long size : " << sizeof(long long)
         << "\t���ֵ��" << (numeric_limits<long long>::max)()
         << "\t��Сֵ��" << (numeric_limits<long long>::min)() << endl;

    cout << "bool size : " << sizeof(bool)
         << "\t���ֵ��" << (numeric_limits<bool>::max)()
         << "\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;

    cout << "char size : " << sizeof(char)
         << "\t���ֵ��" << (numeric_limits<char>::max)()
         << "\t��Сֵ��" << (numeric_limits<char>::min)() << endl;

    cout << "wchar_t size : " << sizeof(wchar_t)
         << "\t���ֵ��" << (numeric_limits<wchar_t>::max)()
         << "\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;

    cout << "float size : " << sizeof(float)
         << "\t���ֵ��" << (numeric_limits<float>::max)()
         << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;

    cout << "double size : " << sizeof(double)
         << "\t���ֵ��" << (numeric_limits<double>::max)()
         << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;

    cout << "long double size : " << sizeof(long double)
         << "\t���ֵ��" << (numeric_limits<long double>::max)()
         << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
    return 0;
}
