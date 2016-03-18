#pragma once
#include "functions.h"
#include <iostream>

int main()
{
	setlocale(0, "");
	char menu = ' ';
	while (true) {
		try {
			std::cin.clear();
			system("cls");
			std::cout << "Выбирите тип, для подтверждения выбора нажмите Enter:\n* 1 - int\n* 2 - char\n* 3 - short int\n* 4 - long int\n* 5 - double\n* 6 - float\n* 7 - long long int\n* 0 - Завершить работы и закрыть программу\n* # - вывести раздел \"О программе\"\n";
			std::cout << "Ваш Выбор:\t";
			std::cin >> menu;
			if (isalpha(menu) != 0) {
				std::cin.clear();
				std::cin.ignore(std::cin.rdbuf()->in_avail());
				throw  "Введена буква или группа букв. Повторите ввод.";
			}
			switch (menu)
			{
			case '1':
				system("cls");
				std::cout << "Выбран тип int\n";
				std::cout << "Введите число:\t";
				inputParametrs<int>();
				break;
			case '2':
				system("cls");
				std::cout << "Выбран тип char\n";
				std::cout << "Введите символ:\t";
				inputParametrs<char>();
				break;
			case '3':
				system("cls");
				std::cout << "Выбран тип short int\n";
				std::cout << "Введите число:\t";
				inputParametrs<short int>();
				break;
			case '4':
				system("cls");
				std::cout << "Выбран тип long int\n";
				std::cout << "Введите число:\t";
				inputParametrs<long int>();
				break;
			case '5':
				system("cls");
				std::cout << "Выбран тип double\n";
				std::cout << "Введите число:\t";
				inputParametrs<double>();
				break;
			case '6':
				system("cls");
				std::cout << "Выбран тип float\n";
				std::cout << "Введите число:\t";
				inputParametrs<float>();
				break;
			case '7':
				system("cls");
				std::cout << "Выбран тип long long int\n";
				std::cout << "Введите число:\t";
				inputParametrs<long long int>();
				break;
			case '#':
				about();
				break;
			case '0':
				exit(1);
				break;
			default:
				std::cin.clear();
				break;
			}
		}
		catch (char *str) {
			std::cout << str;
			system("set /p pset=\"Для продолжение нажмите Enter\"");
			}
		};
	return 0;
}