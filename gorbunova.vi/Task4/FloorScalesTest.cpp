#include <string>
#include <fstream>
#include <iostream>
#include "observation.h"
#include "floorscales.h"
#include <Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	floorscales fs;
	int choise = 0;
	do
	{
		system("cls");
		cout << " 0. Загрузить из файла." << endl;
		cout << " 1. Загрузить в файл." << endl;
		cout << " 2. Показать первое наблюдение." << endl;
		cout << " 3. Добавить новое наблюдение." << endl;
		cout << " 4. Показать вес человека по дате." << endl;
		cout << " 5. Показать минимальный вес за все время." << endl;
		cout << " 6. Показать минимальный вес за месяц." << endl;
		cout << " 7. Показать средний вес за все время." << endl;
		cout << " 8. Показать средний вес за месяц." << endl;
		cout << " 9. Показать максимальный вес за все время." << endl;
		cout << "10. Показать максимальный вес за месяц." << endl;
		cout << "11. Завершить работу." << endl << endl;
		cout << "Выберите пункт : ";
		cin >> choise;
		try
		{
			switch (choise)
			{
			case 0:
			{
				string path;
				ifstream fcin;
				system("cls");
				cout << "Введите абсолютный путь до файла для загрузки: ";
				cin >> path;
				fcin.open(path);
				cout << "Начало загрузки" << endl;
				fcin >> fs;
				fcin.close();
				cout << "Конец загрузки" << endl;
				system("pause");
				break;
			}
			case 1:
			{
				string path;
				ofstream fcout;
				system("cls");
				cout << "Введите абсолютный путь до файла для сохранения: ";
				cin >> path;
				fcout.open(path);
				cout << "Начало сохранения" << endl;
				fcout << fs;
				fcout.close();
				cout << "Конец сохранения" << endl;
				system("pause");
				break;
			}
			case 2:
			{
				string person;
				system("cls");
				cout << "Введите имя: ";
				cin >> person;
				cout << "Первое наблюдение : " << fs.get_first_observation(person);
				system("pause");
				break;
			}
			case 3:
			{
				observation o;
				system("cls");
				cout << "Введите наблюдение (имя день месяц год вес) : ";//Ввод в формате name 1 01 2001 11.11
				cin >> o;
				fs.add_observation(o);
				cout << "Наблюдение было добавлено" << endl;
				system("pause");
				break;
			}
			case 4:
			{
				string person;
				int day, month, year;
				system("cls");
				cout << "Введите имя : ";
				cin >> person;
				cout << "Введите дату (день месяц год): ";
				cin >> day >> month >> year;
				cout << "Вес : " << fs.get_result_observation(person, day, month, year) << endl;
				system("pause");
				break;
			}
			case 5:
			{
				string person;
				system("cls");
				cout << "Введите имя: ";
				cin >> person;
				cout << "Минимальный вес: " << fs.get_min_weight(person) << endl;
				system("pause");
				break;
			}
			case 6:
			{
				int m;
				string person;
				system("cls");
				cout << "Введите имя: ";
				cin >> person;
				cout << "Введите месяц: ";
				cin >> m;
				cout << "Минимальный вес: " << fs.get_min_weight(person, m) << endl;
				system("pause");
				break;
			}
			case 7:
			{
				string person;
				system("cls");
				cout << "Введите имя : ";
				cin >> person;
				cout << "Средний вес: " << fs.get_mid_weight(person) << endl;
				system("pause");
				break;
			}
			case 8:
			{
				int m;
				string person;
				system("cls");
				cout << "Введите имя: ";
				cin >> person;
				cout << "Введите месяц: ";
				cin >> m;
				cout << "Средний вес: " << fs.get_mid_weight(person, m) << endl;
				system("pause");
				break;
			}
			case 9:
			{
				string person;
				system("cls");
				cout << "Введите имя: ";
				cin >> person;
				cout << "Максимальный вес: " << fs.get_max_weight(person) << endl;
				system("pause");
				break;
			}
			case 10:
			{
				int m;
				string person;
				system("cls");
				cout << "Введите имя: ";
				cin >> person;
				cout << "Введите месяц: ";
				cin >> m;
				cout << "Максимальный вес: " << fs.get_max_weight(person, m) << endl;
				system("pause");
				break;
			}
			default: break;
			}
		}
		catch (char* err)
		{
			cout << err << endl;
			system("pause");
		}
		catch (...)
		{
			cout << "Неизвестная ошибка" << endl;
			system("pause");
		}
	} while (choise != 11);
	
}
