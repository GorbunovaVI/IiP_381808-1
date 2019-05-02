
#pragma once
#include <string>
#include <iostream>
#include "Bankomat.h"
#include "ProcCenter.h"

using namespace std;


Bankomat::Bankomat()
{
	q = w = e = r = t = y = 0;
	size = 0;
	A = NULL;
}
Bankomat::Bankomat(int _q, int _w, int _e, int _r, int _t, int _y,int _size)//Конструктор инициализатор
{
	q = _q;
	w = _w;
	e = _e;
	r = _r;
	t = _t;
	y = _y;
	size = _size;
	A = new ProcCenter[size];
}
Bankomat::Bankomat(const Bankomat & obj)//Конструктор копирования
{
	q = obj.q;
	w = obj.w;
	e = obj.e;
	r = obj.r;
	t = obj.t;
	y = obj.y;
	size = obj.size;
	A = new ProcCenter[size];
	for (int i = 0; i < size; i++)
	{
		A[i] = obj.A[i];
	}
}
Bankomat::~Bankomat()
{
	delete[]A;
	q = w = e = r = t = y =size= 0;
	A = NULL;
}


ostream& operator<<(ostream &stream, Bankomat &obj)
{
	
	for (int i = 0; i < obj.size; i++)
	{
		stream << obj.A[i]<<endl;
	}
	return stream;
}

istream& operator>>(istream &stream, Bankomat &obj)
{
	
	obj.A = new ProcCenter[obj.size];
	for (int i = 0; i < obj.size; i++)
	{
		stream >> obj.A[i];
	}
	return stream;
}
Bankomat& Bankomat::operator=(const Bankomat &obj)
{
	if (this == &obj) return *this;
	if (size != obj.size)
	{
		delete[]A;
		size = obj.size;
		A = new ProcCenter[size];
	}
	for (int i = 0; i < size; i++)
	{
		A[i] = obj.A[i];
	}
	return *this;
}
string Bankomat::Find_Person(int _number)
{
	for (int i = 0; i < size; i++)
	{
		if (A[i].get_number() == _number)
		{
			return A[i].get_name();
		}
	}
	throw "Нет клиента с данным номером";
}



