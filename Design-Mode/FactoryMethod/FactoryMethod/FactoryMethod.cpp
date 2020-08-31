// FactoryMethod.cpp : �������̨Ӧ�ó������ڵ㡣
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

