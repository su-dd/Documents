#include "stdafx.h"
#include "Singleton.h"

Singleton* Singleton::instance = NULL;

Singleton::Singleton()
{
}

Singleton::~Singleton()
{
}

Singleton * Singleton::getSingleton()
{
	if (instance == NULL)
	{
		instance = new Singleton();
	}
	return instance;
}

Singleton * Singleton::getThreadSafeSingleton()
{
	if (instance == NULL)
	{
		lock();
		if (instance == NULL)
		{
			instance = new Singleton();
		}
		unlock();
	}
	return instance;
}

void Singleton::show()
{
	cout << "a Singleton show !" << endl;
}

void Singleton::lock()
{
	// Lock Theard Lock;
}

void Singleton::unlock()
{
	// unLock Thread Lock;
}


// ¶öººÊ½µ¥Àý
Singleton1::Singleton1()
{
}

Singleton1 * Singleton1::GetInstance()
{
	static Singleton1 instance1;
	return &instance1;
}

void Singleton1::show()
{
	cout << "a Singleton1 show !" << endl;
}
