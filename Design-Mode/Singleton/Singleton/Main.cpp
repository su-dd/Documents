// Singleton.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Singleton.h"

int main()
{
	// ����ʽ
	Singleton::getSingleton()->show();
	Singleton::getThreadSafeSingleton()->show();

	// ����ʽ
	Singleton1::GetInstance()->show();
	getchar();
    return 0;


}

