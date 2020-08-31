// Prototype.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Prototype.h"

int main()
{

	Prototype *p1 = new People();
	p1->setName("李雷");
	p1->show();

	Prototype* p2 = p1->clone("韩梅梅");
	p2->show();

	getchar();
    return 0;
}

