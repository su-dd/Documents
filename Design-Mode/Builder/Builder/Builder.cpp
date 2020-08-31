#include "stdafx.h"
#include "Builder.h"

FordCarBuilder::FordCarBuilder()
	: CarBuilder()
{
	m_pCar = new Car();
}

Car * FordCarBuilder::getPucduct()
{
	return this->m_pCar;
}

bool FordCarBuilder::buildWheel()
{
	cout << "building Wheel ... " << endl;
	this->m_pCar->setWheel(true);
	return true;
}

bool FordCarBuilder::buildDoor()
{
	cout << "building Door ... " << endl;
	this->m_pCar->setDoor(true);
	return true;
}

bool FordCarBuilder::buildSeat()
{
	cout << "building Seat ..." << endl;
	this->m_pCar->setSeat(true);
	return true;
}

bool FordCarBuilder::buildSteeringWheel()
{
	cout << "building SteeringWheel ..." << endl;
	this->m_pCar->setSteeringWheel(true);
	return true;
}

bool FordCarBuilder::buildEngine()
{
	cout << "building Engine ..." << endl;
	this->m_pCar->setEngine(true);
	return true;
}
