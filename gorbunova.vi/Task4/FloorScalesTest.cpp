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

		cout << " 0. Çàãðóçèòü èç ôàéëà." << endl;
		cout << " 1. Çàãðóçèòü â ôàéë." << endl;
		cout << " 2. Ïîêàçàòü ïåðâîå íàáëþäåíèå." << endl;
		cout << " 3. Äîáàâèòü íîâîå íàáëþäåíèå." << endl;
		cout << " 4. Ïîêàçàòü âåñ ÷åëîâåêà ïî äàòå." << endl;
		cout << " 5. Ïîêàçàòü ìèíèìàëüíûé âåñ çà âñå âðåìÿ." << endl;
		cout << " 6. Ïîêàçàòü ìèíèìàëüíûé âåñ çà ìåñÿö." << endl;
		cout << " 7. Ïîêàçàòü ñðåäíèé âåñ çà âñå âðåìÿ." << endl;
		cout << " 8. Ïîêàçàòü ñðåäíèé âåñ çà ìåñÿö." << endl;
		cout << " 9. Ïîêàçàòü ìàêñèìàëüíûé âåñ çà âñå âðåìÿ." << endl;
		cout << "10. Ïîêàçàòü ìàêñèìàëüíûé âåñ çà ìåñÿö." << endl;
		cout << "11. Çàâåðøèòü ðàáîòó." << endl << endl;
		cout << "Âûáåðèòå ïóíêò : ";

		cout << " 0. Ð—Ð°Ð³Ñ€ÑƒÐ·Ð¸Ñ‚ÑŒ Ð¸Ð· Ñ„Ð°Ð¹Ð»Ð°." << endl;
		cout << " 1. Ð—Ð°Ð³Ñ€ÑƒÐ·Ð¸Ñ‚ÑŒ Ð² Ñ„Ð°Ð¹Ð»." << endl;
		cout << " 2. ÐŸÐ¾ÐºÐ°Ð·Ð°Ñ‚ÑŒ Ð¿ÐµÑ€Ð²Ð¾Ðµ Ð½Ð°Ð±Ð»ÑŽÐ´ÐµÐ½Ð¸Ðµ." << endl;
		cout << " 3. Ð”Ð¾Ð±Ð°Ð²Ð¸Ñ‚ÑŒ Ð½Ð¾Ð²Ð¾Ðµ Ð½Ð°Ð±Ð»ÑŽÐ´ÐµÐ½Ð¸Ðµ." << endl;
		cout << " 4. ÐŸÐ¾ÐºÐ°Ð·Ð°Ñ‚ÑŒ Ð²ÐµÑ Ñ‡ÐµÐ»Ð¾Ð²ÐµÐºÐ° Ð¿Ð¾ Ð´Ð°Ñ‚Ðµ." << endl;
		cout << " 5. ÐŸÐ¾ÐºÐ°Ð·Ð°Ñ‚ÑŒ Ð¼Ð¸Ð½Ð¸Ð¼Ð°Ð»ÑŒÐ½Ñ‹Ð¹ Ð²ÐµÑ Ð·Ð° Ð²ÑÐµ Ð²Ñ€ÐµÐ¼Ñ." << endl;
		cout << " 6. ÐŸÐ¾ÐºÐ°Ð·Ð°Ñ‚ÑŒ Ð¼Ð¸Ð½Ð¸Ð¼Ð°Ð»ÑŒÐ½Ñ‹Ð¹ Ð²ÐµÑ Ð·Ð° Ð¼ÐµÑÑÑ†." << endl;
		cout << " 7. ÐŸÐ¾ÐºÐ°Ð·Ð°Ñ‚ÑŒ ÑÑ€ÐµÐ´Ð½Ð¸Ð¹ Ð²ÐµÑ Ð·Ð° Ð²ÑÐµ Ð²Ñ€ÐµÐ¼Ñ." << endl;
		cout << " 8. ÐŸÐ¾ÐºÐ°Ð·Ð°Ñ‚ÑŒ ÑÑ€ÐµÐ´Ð½Ð¸Ð¹ Ð²ÐµÑ Ð·Ð° Ð¼ÐµÑÑÑ†." << endl;
		cout << " 9. ÐŸÐ¾ÐºÐ°Ð·Ð°Ñ‚ÑŒ Ð¼Ð°ÐºÑÐ¸Ð¼Ð°Ð»ÑŒÐ½Ñ‹Ð¹ Ð²ÐµÑ Ð·Ð° Ð²ÑÐµ Ð²Ñ€ÐµÐ¼Ñ." << endl;
		cout << "10. ÐŸÐ¾ÐºÐ°Ð·Ð°Ñ‚ÑŒ Ð¼Ð°ÐºÑÐ¸Ð¼Ð°Ð»ÑŒÐ½Ñ‹Ð¹ Ð²ÐµÑ Ð·Ð° Ð¼ÐµÑÑÑ†." << endl;
		cout << "11. Ð—Ð°Ð²ÐµÑ€ÑˆÐ¸Ñ‚ÑŒ Ñ€Ð°Ð±Ð¾Ñ‚Ñƒ." << endl << endl;
		cout << "Ð’Ñ‹Ð±ÐµÑ€Ð¸Ñ‚Ðµ Ð¿ÑƒÐ½ÐºÑ‚ : ";

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

				cout << "Ââåäèòå àáñîëþòíûé ïóòü äî ôàéëà äëÿ çàãðóçêè: ";
				cin >> path;
				fcin.open(path);
				cout << "Íà÷àëî çàãðóçêè" << endl;
				fcin >> fs;
				fcin.close();
				cout << "Êîíåö çàãðóçêè" << endl;

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð°Ð±ÑÐ¾Ð»ÑŽÑ‚Ð½Ñ‹Ð¹ Ð¿ÑƒÑ‚ÑŒ Ð´Ð¾ Ñ„Ð°Ð¹Ð»Ð° Ð´Ð»Ñ Ð·Ð°Ð³Ñ€ÑƒÐ·ÐºÐ¸: ";
				cin >> path;
				fcin.open(path);
				cout << "ÐÐ°Ñ‡Ð°Ð»Ð¾ Ð·Ð°Ð³Ñ€ÑƒÐ·ÐºÐ¸" << endl;
				fcin >> fs;
				fcin.close();
				cout << "ÐšÐ¾Ð½ÐµÑ† Ð·Ð°Ð³Ñ€ÑƒÐ·ÐºÐ¸" << endl;

				system("pause");
				break;
			}
			case 1:
			{
				string path;
				ofstream fcout;
				system("cls");

				cout << "Ââåäèòå àáñîëþòíûé ïóòü äî ôàéëà äëÿ ñîõðàíåíèÿ: ";
				cin >> path;
				fcout.open(path);
				cout << "Íà÷àëî ñîõðàíåíèÿ" << endl;
				fcout << fs;
				fcout.close();
				cout << "Êîíåö ñîõðàíåíèÿ" << endl;

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð°Ð±ÑÐ¾Ð»ÑŽÑ‚Ð½Ñ‹Ð¹ Ð¿ÑƒÑ‚ÑŒ Ð´Ð¾ Ñ„Ð°Ð¹Ð»Ð° Ð´Ð»Ñ ÑÐ¾Ñ…Ñ€Ð°Ð½ÐµÐ½Ð¸Ñ: ";
				cin >> path;
				fcout.open(path);
				cout << "ÐÐ°Ñ‡Ð°Ð»Ð¾ ÑÐ¾Ñ…Ñ€Ð°Ð½ÐµÐ½Ð¸Ñ" << endl;
				fcout << fs;
				fcout.close();
				cout << "ÐšÐ¾Ð½ÐµÑ† ÑÐ¾Ñ…Ñ€Ð°Ð½ÐµÐ½Ð¸Ñ" << endl;

				system("pause");
				break;
			}
			case 2:
			{
				string person;
				system("cls");

				cout << "Ââåäèòå èìÿ: ";
				cin >> person;
				cout << "Ïåðâîå íàáëþäåíèå : " << fs.get_first_observation(person);

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¸Ð¼Ñ: ";
				cin >> person;
				cout << "ÐŸÐµÑ€Ð²Ð¾Ðµ Ð½Ð°Ð±Ð»ÑŽÐ´ÐµÐ½Ð¸Ðµ : " << fs.get_first_observation(person);

				system("pause");
				break;
			}
			case 3:
			{
				observation o;
				system("cls");

				cout << "Ââåäèòå íàáëþäåíèå (èìÿ äåíü ìåñÿö ãîä âåñ) : ";//Ââîä â ôîðìàòå name 1 01 2001 11.11
				cin >> o;
				fs.add_observation(o);

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð½Ð°Ð±Ð»ÑŽÐ´ÐµÐ½Ð¸Ðµ (Ð¸Ð¼Ñ Ð´ÐµÐ½ÑŒ Ð¼ÐµÑÑÑ† Ð³Ð¾Ð´ Ð²ÐµÑ) : ";//Ð’Ð²Ð¾Ð´ Ð² Ñ„Ð¾Ñ€Ð¼Ð°Ñ‚Ðµ name 1 01 2001 11.11
				cin >> o;
				fs.add_observation(o);
				cout << "ÐÐ°Ð±Ð»ÑŽÐ´ÐµÐ½Ð¸Ðµ Ð±Ñ‹Ð»Ð¾ Ð´Ð¾Ð±Ð°Ð²Ð»ÐµÐ½Ð¾" << endl;

				system("pause");
				break;
			}
			case 4:
			{
				string person;
				int day, month, year;
				system("cls");

				cout << "Ââåäèòå èìÿ : ";
				cin >> person;
				cout << "Ââåäèòå äàòó (äåíü ìåñÿö ãîä): ";
				cin >> day >> month >> year;
				cout << "Âåñ : " << fs.get_result_observation(person, day, month, year) << endl;

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¸Ð¼Ñ : ";
				cin >> person;
				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð´Ð°Ñ‚Ñƒ (Ð´ÐµÐ½ÑŒ Ð¼ÐµÑÑÑ† Ð³Ð¾Ð´): ";
				cin >> day >> month >> year;
				cout << "Ð’ÐµÑ : " << fs.get_result_observation(person, day, month, year) << endl;

				system("pause");
				break;
			}
			case 5:
			{
				string person;
				system("cls");

				cout << "Ââåäèòå èìÿ: ";
				cin >> person;
				cout << "Ìèíèìàëüíûé âåñ: " << fs.get_min_weight(person) << endl;

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¸Ð¼Ñ: ";
				cin >> person;
				cout << "ÐœÐ¸Ð½Ð¸Ð¼Ð°Ð»ÑŒÐ½Ñ‹Ð¹ Ð²ÐµÑ: " << fs.get_min_weight(person) << endl;

				system("pause");
				break;
			}
			case 6:
			{
				int m;
				string person;
				system("cls");

				cout << "Ââåäèòå èìÿ: ";
				cin >> person;
				cout << "Ââåäèòå ìåñÿö: ";
				cin >> m;
				cout << "Ìèíèìàëüíûé âåñ: " << fs.get_min_weight(person, m) << endl;

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¸Ð¼Ñ: ";
				cin >> person;
				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¼ÐµÑÑÑ†: ";
				cin >> m;
				cout << "ÐœÐ¸Ð½Ð¸Ð¼Ð°Ð»ÑŒÐ½Ñ‹Ð¹ Ð²ÐµÑ: " << fs.get_min_weight(person, m) << endl;

				system("pause");
				break;
			}
			case 7:
			{
				string person;
				system("cls");

				cout << "Ââåäèòå èìÿ : ";
				cin >> person;
				cout << "Ñðåäíèé âåñ: " << fs.get_mid_weight(person) << endl;

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¸Ð¼Ñ : ";
				cin >> person;
				cout << "Ð¡Ñ€ÐµÐ´Ð½Ð¸Ð¹ Ð²ÐµÑ: " << fs.get_mid_weight(person) << endl;

				system("pause");
				break;
			}
			case 8:
			{
				int m;
				string person;
				system("cls");

				cout << "Ââåäèòå èìÿ: ";
				cin >> person;
				cout << "Ââåäèòå ìåñÿö: ";
				cin >> m;
				cout << "Ñðåäíèé âåñ: " << fs.get_mid_weight(person, m) << endl;

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¸Ð¼Ñ: ";
				cin >> person;
				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¼ÐµÑÑÑ†: ";
				cin >> m;
				cout << "Ð¡Ñ€ÐµÐ´Ð½Ð¸Ð¹ Ð²ÐµÑ: " << fs.get_mid_weight(person, m) << endl;

				system("pause");
				break;
			}
			case 9:
			{
				string person;
				system("cls");

				cout << "Ââåäèòå èìÿ: ";
				cin >> person;
				cout << "Ìàêñèìàëüíûé âåñ: " << fs.get_max_weight(person) << endl;

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¸Ð¼Ñ: ";
				cin >> person;
				cout << "ÐœÐ°ÐºÑÐ¸Ð¼Ð°Ð»ÑŒÐ½Ñ‹Ð¹ Ð²ÐµÑ: " << fs.get_max_weight(person) << endl;

				system("pause");
				break;
			}
			case 10:
			{
				int m;
				string person;
				system("cls");

				cout << "Ââåäèòå èìÿ: ";
				cin >> person;
				cout << "Ââåäèòå ìåñÿö: ";
				cin >> m;
				cout << "Ìàêñèìàëüíûé âåñ: " << fs.get_max_weight(person, m) << endl;

				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¸Ð¼Ñ: ";
				cin >> person;
				cout << "Ð’Ð²ÐµÐ´Ð¸Ñ‚Ðµ Ð¼ÐµÑÑÑ†: ";
				cin >> m;
				cout << "ÐœÐ°ÐºÑÐ¸Ð¼Ð°Ð»ÑŒÐ½Ñ‹Ð¹ Ð²ÐµÑ: " << fs.get_max_weight(person, m) << endl;

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

			cout << "Íåèçâåñòíàÿ îøèáêà" << endl;

			cout << "ÐÐµÐ¸Ð·Ð²ÐµÑÑ‚Ð½Ð°Ñ Ð¾ÑˆÐ¸Ð±ÐºÐ°" << endl;

			system("pause");
		}
	} while (choise != 11);
	


}

