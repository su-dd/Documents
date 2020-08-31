#include "stdafx.h"
#include "Prototype.h"

Prototype::Prototype()
{
	cout << "Prototype" << endl;
}

Prototype::~Prototype()
{
	cout << "~Prototype" << endl;
}

void Prototype::show()
{
	cout << "I am " << m_name << endl;
}

string Prototype::getName()
{
	return m_name;
}

void Prototype::setName(const string &name)
{
	m_name = name;
}

People::People()
{
	cout << "People" << endl;
}

People::People(const People &)
{
	cout << "People(Const People)" << endl;
}

People::~People()
{
	cout << "~People" << endl;
}

Prototype * People::clone(const string & name)
{
	People* p = new People(*this);
	p->setName(name);
	return p;
}

