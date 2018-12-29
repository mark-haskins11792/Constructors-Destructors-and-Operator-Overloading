#pragma once


class Cow
{
public:
	Cow();
	Cow(const char* n, double w);
	Cow(const Cow& c);
	~Cow();
	Cow& operator=(const Cow& c);
	void ShowCow() const; 
private:
	char* name;
	double weight;
};


