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
    cout << "начало загрузки" << endl;
	fcin >> fs;
	fcin.close();
	cout << "Конец загрузки" << endl;
	
	cin >> number;
	cout << "Имя клиента: " << fs.Find_Person(number);

}

	

