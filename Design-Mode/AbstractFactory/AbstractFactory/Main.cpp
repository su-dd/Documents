// AbstractFactory.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Factory.h"

int main()
{
	CarFactory* factory1 = new CarFactoryA();
	factory1->wheel()->roll();
	factory1->door()->open();

	CarFactory* factory2 = new CarFactoryB();
	factory2->wheel()->roll();
	factory2->door()->open();

	getchar();
    return 0;
}

