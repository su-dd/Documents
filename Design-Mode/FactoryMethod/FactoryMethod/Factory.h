#pragma once
#include "Product.h"
class Factory
{
public:
	virtual Product* createProduct() = 0;
};

class FactoryA : public Factory
{
public:
	virtual Product* createProduct();
};

class FactoryB : public Factory
{
public:
	virtual Product* createProduct();
};