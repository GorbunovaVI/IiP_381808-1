#pragma once
#include <string>
#include <iostream>
#include "Bankomat.h"
#include "ProcCenter.h"


using namespace std;

Bankomat::Bankomat()
{
	size = 0;
	A = new ProcCenter[size];
	B[0] = B[1] = B[2] = B[3] = B[4] = B[5] = 1600;
}

ostream& operator<<(ostream &stream, Bankomat &obj)
{
	stream << obj.size << endl;
	for (int i = 0; i < obj.size; i++)
	{
		stream << obj.A[i]<<endl;
	}
	return stream;
}

istream& operator>>(istream &stream, Bankomat &obj)
{
	stream >> obj.size;
	obj.A = new ProcCenter[obj.size];
	for (int i = 0; i < obj.size; i++)
	{
		stream >> obj.A[i];
	}
	return stream;
}

string Bankomat::Find_Name(int _number)
{
	for (int i = 0; i < size; i++)
	{
		int m = A[i].get_number();
		if (m == _number)
		{
			return A[i].get_name();

		}
	}
	throw "нет такого номера";
	
}
string Bankomat::Find_Surname(int _number)
{
	for (int i = 0; i < size; i++)
	{
		int m = A[i].get_number();
		if (m == _number)
		{
			return A[i].get_sur();

		}
	}
}

string Bankomat::Find_Patronimic(int _number)
{
	for (int i = 0; i < size; i++)
	{
		int m = A[i].get_number();
		if (m == _number)
		{
			return A[i].get_per();

		}
	}
}

int Bankomat::Right_Pin(string _pin, int _number)
{
	string m = A[_number-1].get_pin();
	if (m == _pin)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Bankomat::Card_Block(int _number)
{
	A[_number - 1].set_block(2);
}

int Bankomat::Proverka(int _number)
{
	return A[_number - 1].get_block();
}

int Bankomat::Schet(int _number)
{
	return A[_number - 1].get_sum();
}

void Bankomat::Zachislenie(int p, int _number, int money)
{
	if (B[p] < 2000)
	{
		B[p]++;
		A[_number - 1].set_sum(A[_number - 1].get_sum() + money);
	}
	if (B[p]==2000)	throw "you cant put this bill";
	

}

void Bankomat::Snyatie(int _number, int summa)
{
	int k = 0;
	A[_number - 1].set_sum(A[_number - 1].get_sum() - summa);
	while (summa != 0)
	{
		int m = summa / 5000;
		while (m > 0)
		{
			if (B[0] > 0)
			{
				B[0] = B[0] - 1;
				m = m - 1;
				summa = summa - 5000;
				k++;
				if (k == 41)
				{
					summa = 0;
					throw  "Bankomat can't issue amount of money";
				}
			}
			else
			{
				m = 0;
			}

		}
		m = summa / 2000;
		while (m > 0)
		{
			if (B[1] > 0)
			{
				B[1] = B[1] - 1;
				m = m - 1;
				summa = summa - 2000;
				k++;
				if (k == 41)
				{
					summa = 0;
					throw  "Bankomat can't issue amount of money";
				}

			}
			else
			{
				m = 0;
			}
		}
		m = summa / 1000;
		while (m > 0)
		{
			if (B[2] > 0)
			{
				B[2] = B[2] - 1;
				m = m - 1;
				summa = summa - 1000;
				k++;
				if (k == 4)
				{
					summa = 0;
					throw "Bankomat can't issue amount of money";
				}
			}
			else
			{
				m = 0;
			}
		}
		m = summa / 500;
		while (m > 0)
		{
			if (B[3] > 0)
			{
				B[3] = B[3] - 1;
				m = m - 1;
				summa = summa - 500;
				k++;
				if (k == 41)
				{
					summa = 0;
					throw "Bankomat can't issue amount of money";
				}
			}
			else
			{
				m = 0;
			}
		}
		m = summa / 200;
		while (m > 0)
		{
			if (B[4] > 0)
			{
				B[4] = B[4] - 1;
				m = m - 1;
				summa = summa - 200;
				k++;
				if (k == 4)
				{
					summa = 0;
					throw "Bankomat can't issue amount of money";
				}
			}
			else
			{
				m = 0;
			}
		}
		m = summa / 100;
		while (m > 0)
		{
			if (B[5] > 0)
			{
				B[5] = B[5] - 1;
				m = m - 1;
				summa = summa - 100;
				k++;
				if (k == 4)
				{
					summa = 0;
					throw "Bankomat can't issue amount of money";
				}
			}
			else
			{
				m = 0;
			}
		}

	}
	A[_number - 1].set_sum(A[_number - 1].get_sum() - summa);
}


