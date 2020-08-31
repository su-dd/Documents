#include "stdafx.h"
#include "Director.h"

Director::Director(CarBuilder* builder)
	: m_pBuilder(builder)
{
}

Director::~Director()
{
}

void Director::construct()
{
	m_pBuilder->buildDoor();
	m_pBuilder->buildEngine();
	m_pBuilder->buildSeat();
	m_pBuilder->buildSteeringWheel();
	m_pBuilder->buildWheel();
}
