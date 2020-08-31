#pragma once
class WheelProduct
{
public:
	virtual void roll() = 0;
};

class WheelProductA : public WheelProduct
{
public:
	virtual void roll();
};

class WheelProductB : public WheelProduct
{
public:
	virtual void roll();
};


class DoorProduct
{
public:
	virtual void open() = 0;
};

class DoorProductA : public DoorProduct
{
public:
	virtual void open();
};


class DoorProductB : public DoorProduct
{
public:
	virtual void open();
};