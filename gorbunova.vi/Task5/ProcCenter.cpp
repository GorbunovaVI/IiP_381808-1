#include "ProcCenter.h"
#include <string>
#include <iostream>



ProcCenter::ProcCenter()
{
	number = 0;
	sum = 0;
	block = 0;
	
}

ProcCenter::ProcCenter(int _number, string _name,string _sur,string _per, int _sum,string _pin,int _block)
{
	number = _number;
	name = _name;
	sur = _sur;
	per = _per;
	sum = _sum;
	pin = _pin;
	block = _block;

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

void ProcCenter::set_sum(int _sum) 
{
	sum = _sum;
}

void ProcCenter::set_pin(string _pin)
{
	pin = _pin;
}

void ProcCenter::set_block(int _block)
{
	block=_block;
}

istream& operator>>(istream& stream, ProcCenter&obj)
{
	stream >>obj.number>> obj.name >>obj.sur>>obj.per>> obj.sum >> obj.pin>>obj.block;
	return stream;
}

ostream& operator<<(ostream& stream, const ProcCenter &obj)
{
	stream << obj.number <<" " << obj.name <<" "<< obj.sur <<" "<< obj.per<<" "<< obj.sum <<" "<< obj.pin<<" "<< obj.block;
	return stream;
}
