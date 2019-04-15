#pragma once
#include <string>
#include <iostream>

using namespace std;

class observation
{
	string name;
	int day, month, year;
	double weight;
public:

	observation();//����������� �� ���������
	observation(string _n, int _d, int _m, int _y, double _w);//����������� �������������

	
	void set_name(string _n);
	void set_date(int _d, int _m, int _y);
	void set_weight(double _w);

	
	string get_name() const { return name; }
	int get_day() const { return day; }
	int get_month() const { return month; }
	int get_year() const { return year; }
	double get_weight() const { return weight; }

	
	friend istream& operator>>(istream& stream, observation &obj);//���� � �����
	friend ostream& operator<<(ostream& stream, const observation &obj);//����� � �����
};
