#pragma once

enum ProductType
{
	A,
	B
};

// ²úÆ·»ýÀÛ
class Product
{
public:
	virtual ~Product() {}
public:
	virtual void start() = 0;
};


class ProductA : public Product
{
public:
	virtual void start();

};


class ProductB : public Product
{
public:
	virtual void start();
};

