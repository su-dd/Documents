// Singleton.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Singleton.h"

int main()
{
	// 懒汉式
	Singleton::getSingleton()->show();
	Singleton::getThreadSafeSingleton()->show();

	// 饿汉式
	Singleton1::GetInstance()->show();
	getchar();
    return 0;


}

