// SimpleFactoryTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Factory.h"

int main()
{
	Factory* pFactory = new Factory();
	Product* p1 = pFactory->createProduct(ProductType::A);
	p1->start();

	Product* p2 = pFactory->createProduct(ProductType::B);
	p2->start();

	getchar();
	return 0;
}

