#pragma once
#include <iostream>
#include <iomanip>
enum ConsoleColor {
	BLACK = 0,
	BLUE= 1,
	GREEN = 2,
	CYAN = 3,
	RED = 4,
	MAGENTA = 5,
	BROWN = 6,
	LIGHTGRAY = 7,
	DARKGRAY = 8,
	LIGHTBLUE = 9,
	LIGHTGREEN = 10,
	LIGHTCYAN = 11,
	LIGHTRED = 12,
	LIGHTMAGENTA = 13,
	YELLOW = 14,
	WHITE = 15
};

void PrintNum(void *num, short int TypeSize, unsigned short int startBit, unsigned short int stopBit, ConsoleColor color);
void BinaryShift(void *num, short int TypeSize, bool bitState, unsigned short int startBit, unsigned short int stopBit);
void about();
void SplashScreen();

template <typename T>
T safeInput() {
	setlocale(0, "");
	char str[255];
	char num[64];
	bool separator = false;
	int j = 0;
	std::cin >> str;
	for (int i = 0; i < strlen(str); i++) {
		if ((str[i] == 'E' || str[i] == 'e') && (str[i + 1] == '-' || str[i] == '+') && separator == true) {
			num[j] = str[i];
			++i; ++j;
			num[j] = str[i];
			j++;
		}
		if (separator == false && (str[i] == '.' || str[i] == ',')) {
			separator = true;
			num[j] = ',';
			j++;
		}
		if (str[i] >= 48 && str[i] < 57) {
			num[j] = str[i];
			j++;
		}
	}
	return atof(num);
}
/*Если стало грустно то 
double atof (const char *nptr)
 {
   return strtod (nptr, (char **) NULL);
   }
   */


template <typename T>
void inputParametrs() {
	T arg = 0;
	bool bitState;
	unsigned short int startBit;
	unsigned short int stopBit;

	if (typeid(arg) == typeid(float)) {
		 arg = safeInput<float>();
	}
	else {
		if (typeid(arg) == typeid(double)) {
			 arg = safeInput<float>();
		}
		else
		{
			std::cin >> arg;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
		}
	}
	if (typeid(arg) == typeid(double)|| typeid(arg)==typeid(float))
	{
		std::cout.precision(15);
		std::cout << "Распознанное число: " << arg << '\n';
	}
	else {
		std::cout << "Распознанное число: " << arg << '\n';
	}
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Выберите состояние битов 0 или 1:\t";
	std::cin >> bitState;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Укажите начальный бит в диапазоне от 0 до " << sizeof(T) * 8 - 1 <<": ";
	std::cin >> startBit;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Укажите конечный бит в диапазоне от начального до " << sizeof(T) * 8 - 1 <<": ";
	std::cin >> stopBit;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	BinaryShift(&arg, sizeof(T), bitState, startBit, stopBit);
}

template <typename argType> 
void BinaryShift(argType *num, short int TypeSize, bool bitState, unsigned short int startBit, unsigned short int stopBit) {
	if (startBit > TypeSize * 8 || stopBit > (TypeSize * 8) - 1 || (bitState != 0 && bitState != 1) || startBit > stopBit) {
		throw "Указаны неверные параметры. Повторите ввод.";
	}
	PrintNum(num, TypeSize, startBit, stopBit, RED);
	std::cout << "\n";
	argType p_tmp = 0;
	if (bitState == true) {
		for (int i = startBit; i <= stopBit; i++) {
			((char*)(num))[i / 8] |= ((char*)(&p_tmp))[i / 8] | (1 << i % 8);
		}
	}
	else
	{
		for (int i = startBit; i <= stopBit; i++) {
			((char*)(num))[i / 8] &= ~((((char*)(&p_tmp))[i / 8]) | (1 << i % 8));
		}
	}
	PrintNum(num, TypeSize, startBit, stopBit, GREEN);
	std::cout << "\nИзменённое число: ";
	std::cout << *((argType*)num);
	std::cout << "\nДля продолжения нажмите любую клавишу...";
	system("pause>>void");
}