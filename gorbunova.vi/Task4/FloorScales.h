#pragma once
#include <string>
#include <iostream>
#include "observation.h"

using namespace std;

class floorscales
{
	int size, count;
	observation *A;
	bool isfull() const { return count + 1 == size; }
public:

	floorscales();//конструктор по умолчанию
	floorscales(int _s);//Конструктор инициализатор
	floorscales(const floorscales &obj);//Конструктор копирования
	~floorscales();//Деструктор

	void add_observation(observation &obj);//Добавление наблюдения
	observation get_first_observation(string _n);//Поиск первого наблюдения у человека
	double get_result_observation(string _n, int _d, int _m, int _y);//Поиск веса по имени и дате
	double get_min_weight(string _n);//Минимальный вес за все время
	double get_min_weight(string _n, int _m);//Минимальный вес за месяц
	double get_mid_weight(string _n);//Средний вес за все время
	double get_mid_weight(string _n, int _m);//Средний вес за месяц
	double get_max_weight(string _n);//Максимальный вес за все время
	double get_max_weight(string _n, int _m);//Максимальный вес за месяц


	floorscales& operator=(const floorscales &obj);//Оператор присваивания
	friend istream& operator>>(istream &stream, floorscales &obj);//Ввод в поток
	friend ostream& operator<<(ostream &stream, const floorscales &obj);//Вывод в поток
};


