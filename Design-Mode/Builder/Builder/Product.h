#pragma once
class Car
{
public:
	Car();
	~Car();
public:
	virtual void work();
	virtual void setWheel(bool value);
	virtual void setDoor(bool value);
	virtual void setSeat(bool value);
	virtual void setSteeringWheel(bool value);
	virtual void setEngine(bool value);

protected:
	bool Wheel;
	bool Door;
	bool Seat;
	bool SteeringWheel;
	bool Engine;
};