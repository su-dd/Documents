// Prototype.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Prototype.h"

int main()
{

	Prototype *p1 = new People();
	p1->setName("����");
	p1->show();

	Prototype* p2 = p1->clone("��÷÷");
	p2->show();

	getchar();
    return 0;
}

