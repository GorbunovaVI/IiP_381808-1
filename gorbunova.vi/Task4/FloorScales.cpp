#include "FloorScales.h"
#include <string>
#include <iostream>
#include <string>
#include <iostream>
#include "observation.h"
#include "FloorScales.h"

using namespace std;

floorscales::floorscales()
{
	size =count= 0;
	A = NULL;
}

floorscales::floorscales(int _s)
{
	count = 0;
	size = _s;
	A = new observation[size];
}

floorscales::floorscales(const floorscales &obj) : size(obj.size), count(obj.count)
{
	A = new observation[size];
	for (int i = 0; i < size; i++)
	{
		A[i] = obj.A[i];
	}
}

floorscales::~floorscales()
{
	delete[]A;
	count = size = 0;
	A = NULL;
}

void floorscales::add_observation(observation &obj)
{
	if (!A) throw "Сначала загрузите файл";
	if (isfull()) throw "Нет свободной памяти для добавления наблюдения";
	A[count] = obj;
	count++;
}

observation floorscales::get_first_observation(string _n) 
{
	for (int i = 0; i < count; i++)
	{
		if (A[i].get_name() == _n)
			return A[i];
	}
	throw "Нет наблюдений";
}

double floorscales::get_result_observation(string _n, int _d, int _m, int _y) 
{
	for (int i = 0; i < count; i++)
	{
		if (A[i].get_name() == _n)
		{
			if ((A[i].get_day() == _d) && (A[i].get_month() == _m) && (A[i].get_year() == _y)) 
				return A[i].get_weight();
		}
	}
	throw "Нет наблюдений";
}

double floorscales::get_min_weight(string _n) 
{
	double min = 99999999;
	for (int i = 0; i < count; i++)
	{
		if (A[i].get_name() == _n)
		{
			if (A[i].get_weight() < min)
				min = A[i].get_weight();
		}
	}
	if (min == 99999999) throw "Нет наблюдений";
	return min;
}

double floorscales::get_min_weight(string _n, int _m) 
{
	double min = 99999999;
	for (int i = 0; i < count; i++)
	{
		if ((A[i].get_name() == _n) && (A[i].get_month() == _m))
		{
			if (A[i].get_weight() < min) 
				min = A[i].get_weight();
		}
	}
	if (min == 99999999) throw "Нет наблюдений за этот месяц";
	return min;
}

double floorscales::get_mid_weight(string _n) 
{
	double mid = 0;
	double counter = 0;
	for (int i = 0; i < count; i++)
	{
		if (A[i].get_name() == _n)
		{
			mid += A[i].get_weight();
			counter++;
		}
	}
	if (counter == 0) throw "Нет наблюдений";
	return mid / counter;
}

double floorscales::get_mid_weight(string _n, int _m) 
{
	double mid = 0;
	double counter = 0;
	for (int i = 0; i < count; i++)
	{
		if ((A[i].get_name() == _n) && (A[i].get_month() == _m))
		{
			mid += A[i].get_weight();
			counter++;
		}
	}
	if (counter == 0) throw "нет наблюдений за этот месяц";
	return mid / counter;
}

double floorscales::get_max_weight(string _n)
{
	double max = 0;
	for (int i = 0; i < count; i++)
	{
		if (A[i].get_name() == _n)
		{
			if (A[i].get_weight() > max) 
				max = A[i].get_weight();
		}
	}
	if (max == 0) throw "Нет наблюдений";
	return max;
}

double floorscales::get_max_weight(string _n, int _m)
{
	double max = 0;
	for (int i = 0; i < count; i++)
	{
		if ((A[i].get_name() == _n) && (A[i].get_month() == _m))
		{
			if (A[i].get_weight() > max) 
				max = A[i].get_weight();
		}
	}
	if (max == 0) throw "Нет наблюдений за этот месяц";
	return max;
}

floorscales& floorscales::operator=(const floorscales &obj)
{
	if (this == &obj) return *this;
	if (size != obj.size)
	{
		delete[]A;
		size = obj.size;
		A = new observation[size];
	}
	count = obj.count;
	for (int i = 0; i < size; i++)
	{
		A[i] = obj.A[i];
	}
	return *this;
}

istream& operator>>(istream &stream, floorscales &obj)
{
	stream >> obj.size >> obj.count;
	obj.A = new observation[obj.size];
	for (int i = 0; i < obj.count; i++)
	{
		stream >> obj.A[i];
	}
	return stream;
}

ostream& operator<<(ostream &stream, const floorscales &obj)
{
	stream << obj.size << " " << obj.count << endl;
	for (int i = 0; i < obj.count; i++)
	{
		stream << obj.A[i] << endl;
	}
	return stream;
}










