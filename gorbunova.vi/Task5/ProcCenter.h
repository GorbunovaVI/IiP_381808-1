#pragma once
#include <string>
#include <iostream>



using namespace std;
class ProcCenter
{
	int sum, number,block;
	string name,sur,per;
	string pin;
public:
	ProcCenter();
	ProcCenter(int number, string name,string sur,string per , int sum, string pin,int block);

	void set_number(int number);
	void set_FIO(string name,string sur,string per);
	void set_sum(int sum);
	void set_pin(string pin);
	void set_block(int block);
	
   
	int get_number() const { return number; }
	string get_name() const { return name; }
	string get_sur() const { return sur; }
	string get_per() const { return per; }
	int get_sum()  const {return sum; }
    string get_pin() const { return pin; }
	int get_block() const { return block; }

	friend istream& operator>>(istream& stream, ProcCenter &obj);
	friend ostream& operator<<(ostream& stream, const ProcCenter &obj);
};

