#include "stdafx.h"
#include "Factory.h"

Product* Factory::createProduct(ProductType type)
{
	Product* p = NULL;

	switch (type)
	{
	case ProductType::A :
		p = new ProductA();
		break;
	case ProductType::B :
		p = new ProductB();
		break;
	default:
		break;
	}
	return p;
}