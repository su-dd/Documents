#pragma once
#include "Product.h"

class CarBuilder
{
public:
	virtual Car* getPucduct() = 0;
	virtual bool buildWheel() = 0;
	virtual bool buildDoor() = 0;
	virtual bool buildSeat() = 0;
	virtual bool buildSteeringWheel() = 0;
	virtual bool buildEngine() = 0;
};

class FordCarBuilder : public CarBuilder
{
public:
	FordCarBuilder();
public:
	virtual Car* getPucduct();
	virtual bool buildWheel();
	virtual bool buildDoor();
	virtual bool buildSeat();
	virtual bool buildSteeringWheel();
	virtual bool buildEngine();
private:
	Car* m_pCar;
};

