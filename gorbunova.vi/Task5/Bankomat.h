#pragma once
#include <string>
#include <iostream>
#include "ProcCenter.h"
using namespace std;

class Bankomat
{
	int q, w, e, r, t, y;//q=100,w=200,e=500,r=1000,t=2000,y=5000
	int size=2;
	ProcCenter *A;
public:
	Bankomat();
	Bankomat(int q, int w, int e, int r, int t, int y,int size);
	Bankomat(const Bankomat &obj);
	~Bankomat();

	Bankomat & operator=(const Bankomat & obj);

	string Find_Person(int number);
	
	friend istream& operator>>(istream &stream, Bankomat &obj);
	friend ostream& operator<<(ostream &ostream, Bankomat &obj);
};

