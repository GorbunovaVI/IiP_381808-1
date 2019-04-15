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
		cout << " 0. ��������� �� �����." << endl;
		cout << " 1. ��������� � ����." << endl;
		cout << " 2. �������� ������ ����������." << endl;
		cout << " 3. �������� ����� ����������." << endl;
		cout << " 4. �������� ��� �������� �� ����." << endl;
		cout << " 5. �������� ����������� ��� �� ��� �����." << endl;
		cout << " 6. �������� ����������� ��� �� �����." << endl;
		cout << " 7. �������� ������� ��� �� ��� �����." << endl;
		cout << " 8. �������� ������� ��� �� �����." << endl;
		cout << " 9. �������� ������������ ��� �� ��� �����." << endl;
		cout << "10. �������� ������������ ��� �� �����." << endl;
		cout << "11. ��������� ������." << endl << endl;
		cout << "�������� ����� : ";
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
				cout << "������� ���������� ���� �� ����� ��� ��������: ";
				cin >> path;
				fcin.open(path);
				cout << "������ ��������" << endl;
				fcin >> fs;
				fcin.close();
				cout << "����� ��������" << endl;
				system("pause");
				break;
			}
			case 1:
			{
				string path;
				ofstream fcout;
				system("cls");
				cout << "������� ���������� ���� �� ����� ��� ����������: ";
				cin >> path;
				fcout.open(path);
				cout << "������ ����������" << endl;
				fcout << fs;
				fcout.close();
				cout << "����� ����������" << endl;
				system("pause");
				break;
			}
			case 2:
			{
				string person;
				system("cls");
				cout << "������� ���: ";
				cin >> person;
				cout << "������ ���������� : " << fs.get_first_observation(person);
				system("pause");
				break;
			}
			case 3:
			{
				observation o;
				system("cls");
				cout << "������� ���������� (��� ���� ����� ��� ���) : ";//���� � ������� name 1 01 2001 11.11
				cin >> o;
				fs.add_observation(o);
				cout << "���������� ���� ���������" << endl;
				system("pause");
				break;
			}
			case 4:
			{
				string person;
				int day, month, year;
				system("cls");
				cout << "������� ��� : ";
				cin >> person;
				cout << "������� ���� (���� ����� ���): ";
				cin >> day >> month >> year;
				cout << "��� : " << fs.get_result_observation(person, day, month, year) << endl;
				system("pause");
				break;
			}
			case 5:
			{
				string person;
				system("cls");
				cout << "������� ���: ";
				cin >> person;
				cout << "����������� ���: " << fs.get_min_weight(person) << endl;
				system("pause");
				break;
			}
			case 6:
			{
				int m;
				string person;
				system("cls");
				cout << "������� ���: ";
				cin >> person;
				cout << "������� �����: ";
				cin >> m;
				cout << "����������� ���: " << fs.get_min_weight(person, m) << endl;
				system("pause");
				break;
			}
			case 7:
			{
				string person;
				system("cls");
				cout << "������� ��� : ";
				cin >> person;
				cout << "������� ���: " << fs.get_mid_weight(person) << endl;
				system("pause");
				break;
			}
			case 8:
			{
				int m;
				string person;
				system("cls");
				cout << "������� ���: ";
				cin >> person;
				cout << "������� �����: ";
				cin >> m;
				cout << "������� ���: " << fs.get_mid_weight(person, m) << endl;
				system("pause");
				break;
			}
			case 9:
			{
				string person;
				system("cls");
				cout << "������� ���: ";
				cin >> person;
				cout << "������������ ���: " << fs.get_max_weight(person) << endl;
				system("pause");
				break;
			}
			case 10:
			{
				int m;
				string person;
				system("cls");
				cout << "������� ���: ";
				cin >> person;
				cout << "������� �����: ";
				cin >> m;
				cout << "������������ ���: " << fs.get_max_weight(person, m) << endl;
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
			cout << "����������� ������" << endl;
			system("pause");
		}
	} while (choise != 11);
	
}