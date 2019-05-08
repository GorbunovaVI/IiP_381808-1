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
	ofstream fcout;
	int M;
	int v;
	int number, count = 0;
	int choise;
	int money;
	int summa;
	int B[6];
	B[0] = B[1] = B[2] = B[3] = B[4] = B[5] = 1600;
	string pin;
	
   
	while (v = 1)
	{
		system("cls");
		fcin.open("proccenter.txt");
		fcin >> fs;
		fcin.close();

		cout << "Insert card(enter number):" << endl;
		cin >> number;
		int r = fs.Proverka(number);
		while (r == 2)
		{
			cout << "Card locked,insert anoyher card:" << endl;
			cin >> number;
			r = fs.Proverka(number);
		}
		cout << "Name: " << fs.Find_Surname(number) << " " << fs.Find_Name(number) << " " << fs.Find_Patronimic(number) << endl;//дописать отчество

		while (count < 3)
		{
			cout << "Enter Pin:" << endl;;
			cin >> pin;
			if (fs.Right_Pin(pin, number) == 1)
			{
				cout << "Pin is true:" << endl;
				break;
			}
			else count++;
		}

		if (count == 3)

		{
			fs.Card_Block(number);
			cout << "Card locked";
		}

		do
		{
			cout << " 1.Print check" << endl;
			cout << " 2.Put money" << endl;
			cout << " 3.Withdraw money" << endl;
			cout << " 4.Pick up card" << endl;

			cin >> choise;
			switch (choise)
			{
			case 1:
			{
				system("cls");
				cout << fs.Schet(number) << endl;
				system("pause");
				break;
			}
			case 2:
			{
				int k = 0;
				system("cls");
				cout << "Insert a bill" << endl;
				do
				{
					cin >> money;
					

					{
						switch (money)
						{
						case 5000:
						{
							fs.Zachislenie(0, number, money);
						    break;
						}
						case 2000:
						{
							fs.Zachislenie(1, number, money);
							 break;
						}
						case 1000:
						{
							fs.Zachislenie(2, number, money);
		                    break;
						}
						case 500:
						{
							fs.Zachislenie(3, number, money);
							break;
						}
						case 200:
						{
							fs.Zachislenie(4, number, money);
							break;
						}
						case 100:
						{
							fs.Zachislenie(5, number, money);
							break;
						}
						}
						k++;
						if (k == 40) money = 0;

					}
				} while (money != 0);
				system("pause");
				break;
			}
			case 3:
			{
				system("cls");
				cout << "Enter the amount you want to withdraw" << endl;
				cin >> summa;
				fs.Snyatie(number, summa);
				fcout.open("proccenter.txt");
				fcout << fs;
				fcout.close();
				system("pause");
				break;
			}
			}

		} while (choise != 4);
		system("pause");
		cout << "if you want work with bankomat put 1,else 0" << endl;
		cin >> v;
		if (v != 1)
		{
			break;
		}
	}
}


