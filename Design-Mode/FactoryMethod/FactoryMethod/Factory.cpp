#include "stdafx.h"
#include "Factory.h"

Product * FactoryA::createProduct()
{
	return new ProductA();
}

Product * FactoryB::createProduct()
{
	return new ProductB();
}
