#pragma once

// 懒汉式的单例

class Singleton
{
private:
	Singleton();
public:
	~Singleton();

	// 线程不安全
	static Singleton* getSingleton();
	// 线程安全
	static Singleton* getThreadSafeSingleton();

	void show();
private:
	static void lock();
	static void unlock();

private:
	static Singleton* instance;
};


// 饿汉式单例
// 饿汉是线程安全的，这是有静态变量的特性决定的
class Singleton1
{
private:
	Singleton1();
public:
	static Singleton1 * GetInstance();
	void show();
};

