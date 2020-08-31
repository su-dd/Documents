#include "stdafx.h"
#include "Product.h"


Car::Car()
{
	cout << "create Car !" << endl;
}


Car::~Car()
{
	cout << "destroy Car !" << endl;
}

void Car::work()
{
	if (!Wheel)
	{
		cout << "Car has not Wheel !" << endl;
		return;
	}
	else if (!Door)
	{
		cout << "Car has not Door !" << endl;
		return;
	}
	else if (!Seat)
	{
		cout << "Car has not Seat !" << endl;
		return;
	}
	else if (!SteeringWheel)
	{
		cout << "Car has not SteeringWheel !" << endl;
		return;
	}
	else if (!Engine)
	{
		cout << "Car has not Engine !" << endl;
		return;
	}
	cout << "Car Run !" << endl;
	return;
}

void Car::setWheel(bool value)
{
	Wheel = value;
}

void Car::setDoor(bool value)
{
	Door = value;
}

void Car::setSeat(bool value)
{
	Seat = value;
}

void Car::setSteeringWheel(bool value)
{
	SteeringWheel = value;
}

void Car::setEngine(bool value)
{
	Engine = value;
}
