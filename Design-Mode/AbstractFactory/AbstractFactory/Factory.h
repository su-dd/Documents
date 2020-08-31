#pragma once
#include "Product.h"
// 
class CarFactory
{
public:
	virtual WheelProduct* wheel() = 0;
	virtual DoorProduct* door() = 0;
};

class CarFactoryA : public CarFactory
{
public:
	virtual WheelProduct* wheel();
	virtual DoorProduct* door();

};


class CarFactoryB : public CarFactory
{
public:
	virtual WheelProduct* wheel();
	virtual DoorProduct* door();

};