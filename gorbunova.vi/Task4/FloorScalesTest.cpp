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
		cout << " 0. Load from file." << endl;
		cout << " 1. Save to file." << endl;
		cout << " 2. Get date first observation for person." << endl;
		cout << " 3. Add observation for person." << endl;
		cout << " 4. Get a person's weight by date." << endl;
		cout << " 5. Get a minumum person's weight by all time." << endl;
		cout << " 6. Get a minumum person's weight by date." << endl;
		cout << " 7. Get a middle person's weight by all time." << endl;
		cout << " 8. Get a middle person's weight by date." << endl;
		cout << " 9. Get a maximum person's weight by all time." << endl;
		cout << "10. Get a maximum person's weight by date." << endl;
		cout << "11. Exit." << endl << endl;
		cout << "Enter your choise : ";
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
				cout << "Enter abs path to file for loading : ";
				cin >> path;
				fcin.open(path);
				cout << "Start loading from file" << endl;
				fcin >> fs;
				fcin.close();
				cout << "End loading from file" << endl;
				system("pause");
				break;
			}
			case 1:
			{
				string path;
				ofstream fcout;
				system("cls");
				cout << "Enter abs path to file for saving : ";
				cin >> path;
				fcout.open(path);
				cout << "Start saving from file" << endl;
				fcout << fs;
				fcout.close();
				cout << "End saving from file" << endl;
				system("pause");
				break;
			}
			case 2:
			{
				string person;
				system("cls");
				cout << "Enter name : ";
				cin >> person;
				cout << "First observation : " << fs.get_first_observation(person);
				system("pause");
				break;
			}
			case 3:
			{
				observation o;
				system("cls");
				cout << "Enter observation (name day month year weight) : ";
				cin >> o;
				fs.add_observation(o);
				cout << "Observation was added" << endl;
				system("pause");
				break;
			}
			case 4:
			{
				string person;
				int day, month, year;
				system("cls");
				cout << "Enter name : ";
				cin >> person;
				cout << "Enter date (day month year): ";
				cin >> day >> month >> year;
				cout << "Weight : " << fs.get_result_observation(person, day, month, year) << endl;
				system("pause");
				break;
			}
			case 5:
			{
				string person;
				system("cls");
				cout << "Enter name : ";
				cin >> person;
				cout << "Min weight for all time: " << fs.get_min_weight(person) << endl;
				system("pause");
				break;
			}
			case 6:
			{
				int m;
				string person;
				system("cls");
				cout << "Enter name : ";
				cin >> person;
				cout << "Enter month : ";
				cin >> m;
				cout << "Min weight for month: " << fs.get_min_weight(person, m) << endl;
				system("pause");
				break;
			}
			case 7:
			{
				string person;
				system("cls");
				cout << "Enter name : ";
				cin >> person;
				cout << "Middle weight for all time: " << fs.get_mid_weight(person) << endl;
				system("pause");
				break;
			}
			case 8:
			{
				int m;
				string person;
				system("cls");
				cout << "Enter name : ";
				cin >> person;
				cout << "Enter month : ";
				cin >> m;
				cout << "Middle weight for month: " << fs.get_mid_weight(person, m) << endl;
				system("pause");
				break;
			}
			case 9:
			{
				string person;
				system("cls");
				cout << "Enter name : ";
				cin >> person;
				cout << "Max weight for all time: " << fs.get_max_weight(person) << endl;
				system("pause");
				break;
			}
			case 10:
			{
				int m;
				string person;
				system("cls");
				cout << "Enter name : ";
				cin >> person;
				cout << "Enter month : ";
				cin >> m;
				cout << "Max weight for month: " << fs.get_max_weight(person, m) << endl;
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
			cout << "Unknown error" << endl;
			system("pause");
		}
	} while (choise != 11);
	return 0;
}