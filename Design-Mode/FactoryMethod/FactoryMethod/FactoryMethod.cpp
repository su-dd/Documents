// FactoryMethod.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Factory.h"

int main()
{
	Factory* f1 = new FactoryA();
	Product* p1 = f1->createProduct();
	p1->start();

	Factory* f2 = new FactoryB();
	Product* p2 = f2->createProduct();
	p2->start();

	getchar();
    return 0;
}

