#pragma once
#include <string>
#include <iostream>



using namespace std;
class ProcCenter
{
	int sum, number;
	string name,sur,per;
	unsigned char pin;
public:
	ProcCenter();
	ProcCenter(int number, string name,string sur,string per , int sum, unsigned char pin);


	void set_number(int number);
	void set_FIO(string name,string sur,string per);
	void set_information(int sum, unsigned char pin);

	int get_number() const { return number; }
	string get_name() const { return name; }
	string get_sur() const { return sur; }
	string get_per() const { return per; }
	int get_sum() const { return sum; }
	unsigned char get_pin() const { return pin; }


	friend istream& operator>>(istream& stream, ProcCenter &obj);//Ввод в поток
	friend ostream& operator<<(ostream& stream, const ProcCenter &obj);//Вывод в поток
};

