#pragma once
#include "stdafx.h"
class Prototype
{
public:
	Prototype();
	~Prototype();

	void show();
public:
	virtual Prototype* clone(const string& name) = 0;
	virtual string getName();
	virtual void setName(const string &);

private:
	string m_name;
};

class People : public Prototype
{
public:
	People();
	People(const People &);
	~People();
	virtual Prototype* clone(const string& name);
};