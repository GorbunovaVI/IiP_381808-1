#include "ProcCenter.h"
#include <string>
#include <iostream>



ProcCenter::ProcCenter()
{
	number = 0;
	sum = 0;
	pin = 0;
}

ProcCenter::ProcCenter(int _number, string _name,string _sur,string _per, int _sum, unsigned char _pin)
{
	number = _number;
	name = _name;
	sur = _sur;
	per = _per;
	sum = _sum;
	pin = _pin;
}



void ProcCenter::set_number(int _number)
{
	number = _number;
}

void ProcCenter::set_FIO(string _name,string _sur,string _per)
{
	name = _name;
	sur = _sur;
	per = _per;
}

void ProcCenter::set_information(int _sum, unsigned char _pin)
{
	sum = _sum;
	pin = _pin;
}

istream& operator>>(istream& stream, ProcCenter&obj)
{
	stream >>obj.number>> obj.name >>obj.sur>>obj.per>> obj.sum >> obj.pin;
	return stream;
}

ostream& operator<<(ostream& stream, const ProcCenter &obj)
{
	stream << obj.number <<" " << obj.name <<" "<< obj.sur <<" "<< obj.per<<" "<< obj.sum <<" "<< obj.pin;
	return stream;
}
