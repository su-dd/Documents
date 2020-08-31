#pragma once

enum ProductType
{
	A,
	B
};

// ��Ʒ����
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

