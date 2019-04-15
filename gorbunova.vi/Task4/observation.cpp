
#include <string>
#include <iostream>
#include "observation.h"

using namespace std;


observation::observation()
{
	day = month = year = 0;
	weight = 0;
}

observation::observation(string _n, int _d, int _m, int _y, double _w)
{
	name = _n;
	day = _d; 
	month = _m;
	year = _y;
	weight = _w;
}

void observation::set_name(string _n)
{
	name = _n;
}

void observation::set_date(int _d, int _m, int _y)
{
	day = _d;
	month = _m; 
	year = _y;
}

void observation::set_weight(double _w)
{
	weight = _w;
}


istream& operator>>(istream& stream, observation &obj)
{
	stream >> obj.name >> obj.day >> obj.month >> obj.year >> obj.weight;
	return stream;
}

ostream& operator<<(ostream& stream, const observation &obj)
{
	stream << obj.name << " " << obj.day << " " << obj.month << " " << obj.year << " " << obj.weight;
	return stream;
}


