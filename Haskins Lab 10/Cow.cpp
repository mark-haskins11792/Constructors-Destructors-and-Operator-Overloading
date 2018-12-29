//implementation of the cow class. 

#include "stdafx.h"
#include "Cow.h"
#include <iostream>
using namespace std;

Cow::Cow()
{
	cout << "Cow default constructor" << endl;
}
Cow::Cow(const char* n, double w)
{
	cout << "Cow constructor" << endl;
	int length = strlen(n);
	name = new char[length + 1];
	strcpy_s(name, length + 1, n);
	weight = w;
}
Cow::Cow(const Cow& c)
{
	cout << "Cow explicit copy constructor (Deep Copy)" << endl;
	int length = strlen(c.name);
	name = new char[length + 1];	
	strcpy_s(name, length + 1, c.name);
	weight = c.weight;
}
Cow::~Cow()
{
	cout << "Cow destructor" << endl;
	delete[] name;
}
Cow& Cow::operator=(const Cow& c)
{
	cout << "Assignment operator overload function" << endl;
	int length = strlen(c.name);
	name = new char[length + 1];
	strcpy_s(name, length + 1, c.name);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	cout << name << endl;
	cout << weight << endl;
}