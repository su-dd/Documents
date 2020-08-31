#include "stdafx.h"
#include "Factory.h"

WheelProduct * CarFactoryA::wheel()
{
	return new WheelProductA();
}

DoorProduct * CarFactoryA::door()
{
	return new DoorProductA();
}

WheelProduct * CarFactoryB::wheel()
{
	return new WheelProductB();
}

DoorProduct * CarFactoryB::door()
{
	return new DoorProductB();
}
