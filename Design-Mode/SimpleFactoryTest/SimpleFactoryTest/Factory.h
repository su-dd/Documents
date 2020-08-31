#pragma once
#include "Product.h"

class Factory
{
public:
	Product* createProduct(ProductType type);
};

