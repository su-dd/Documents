#pragma once

// ����ʽ�ĵ���

class Singleton
{
private:
	Singleton();
public:
	~Singleton();

	// �̲߳���ȫ
	static Singleton* getSingleton();
	// �̰߳�ȫ
	static Singleton* getThreadSafeSingleton();

	void show();
private:
	static void lock();
	static void unlock();

private:
	static Singleton* instance;
};


// ����ʽ����
// �������̰߳�ȫ�ģ������о�̬���������Ծ�����
class Singleton1
{
private:
	Singleton1();
public:
	static Singleton1 * GetInstance();
	void show();
};

