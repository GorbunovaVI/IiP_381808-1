#include <string>
#include <fstream>
#include <iostream>
#include "ProcCenter.h"
#include "Bankomat.h"
#include <Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Bankomat fs;
	ifstream fcin;
	
	int number;
    system("cls");
	fcin.open("proccenter.txt");
    cout << "������ ��������" << endl;
	fcin >> fs;
	fcin.close();
	cout << "����� ��������" << endl;
	
	cin >> number;
	cout << "��� �������: " << fs.Find_Person(number);

}

	

