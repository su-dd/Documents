#pragma once

#include "Builder.h"

class Director
{
public:
	Director(CarBuilder* builder);
	~Director();

public:
	void construct();

private:
	CarBuilder* m_pBuilder;
};

