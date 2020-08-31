// Builder.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Director.h"

int main()
{
	CarBuilder* pCarBuilder = new FordCarBuilder();

	Director* pDirector = new Director(pCarBuilder);
	pDirector->construct();

	pCarBuilder->getPucduct()->work();

	getchar();
    return 0;
}

