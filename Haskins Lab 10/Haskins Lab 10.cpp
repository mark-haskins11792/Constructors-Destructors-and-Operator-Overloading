// Program shows all member functions of the cow class. 	


#include "stdafx.h"
#include <iostream>
#include "Cow.h"
using namespace std;

int main()
{
	Cow a;
	Cow b("Mark", 190.0);
	Cow c(b);
	Cow d;
	d = c;
	cout << "\nShow Cow C:" << endl;
	c.ShowCow();
	cout << "\nShow Cow D:" << endl;
	d.ShowCow();
	cout << endl;
	return 0;
}

