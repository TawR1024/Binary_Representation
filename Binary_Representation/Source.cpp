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
			std::cout << "�������� ���, ��� ������������� ������ ������� Enter:\n* 1 - int\n* 2 - char\n* 3 - short int\n* 4 - long int\n* 5 - double\n* 6 - float\n* 7 - long long int\n* 0 - ��������� ������ � ������� ���������\n* # - ������� ������ \"� ���������\"\n";
			std::cout << "��� �����:\t";
			std::cin >> menu;
			if (isalpha(menu) != 0) {
				std::cin.clear();
				std::cin.ignore(std::cin.rdbuf()->in_avail());
				throw  "������� ����� ��� ������ ����. ��������� ����.";
			}
			switch (menu)
			{
			case '1':
				system("cls");
				std::cout << "������ ��� int\n";
				std::cout << "������� �����:\t";
				inputParametrs<int>();
				break;
			case '2':
				system("cls");
				std::cout << "������ ��� char\n";
				std::cout << "������� ������:\t";
				inputParametrs<char>();
				break;
			case '3':
				system("cls");
				std::cout << "������ ��� short int\n";
				std::cout << "������� �����:\t";
				inputParametrs<short int>();
				break;
			case '4':
				system("cls");
				std::cout << "������ ��� long int\n";
				std::cout << "������� �����:\t";
				inputParametrs<long int>();
				break;
			case '5':
				system("cls");
				std::cout << "������ ��� double\n";
				std::cout << "������� �����:\t";
				inputParametrs<double>();
				break;
			case '6':
				system("cls");
				std::cout << "������ ��� float\n";
				std::cout << "������� �����:\t";
				inputParametrs<float>();
				break;
			case '7':
				system("cls");
				std::cout << "������ ��� long long int\n";
				std::cout << "������� �����:\t";
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
			system("set /p pset=\"��� ����������� ������� Enter\"");
			}
		};
	return 0;
}