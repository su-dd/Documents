#pragma once
class Product
{
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