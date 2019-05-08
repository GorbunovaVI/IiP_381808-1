#pragma once
#include <string>
#include <iostream>
#include "ProcCenter.h"
using namespace std;

class Bankomat
{

	int size;
	ProcCenter *A;
	int B[6];
public:
	Bankomat();
	
	string Find_Name(int _number);//vyvod name
	string Find_Surname(int _number);//vyvod surname
	string Find_Patronimic(int _number);//vyvod patronimic
	int Right_Pin(string _pin, int _number);//proverka pin
	void Card_Block(int _number);//block card
	int Proverka(int _number);//proverka blockirovki
	int Schet(int _number);//vyvod scheta
	void Zachislenie(int p, int _number, int money);//zachislenie na schet
    void Snyatie(int summa,int _number);//snyatie deneg so sceta
	
	friend istream& operator>>(istream &stream, Bankomat &obj);
	friend ostream& operator<<(ostream &ostream, Bankomat &obj);
};

