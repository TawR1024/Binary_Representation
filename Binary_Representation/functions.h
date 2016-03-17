#pragma once
#include <iostream>

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

template <typename T>
void inputParametrs() {
	T arg;
	bool bitState;
	unsigned short int startBit;
	unsigned short int stopBit;
	std::cin>>arg;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Выберите состояние битов 0 или 1:\t";
	std::cin >> bitState;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Укажите номер начального бита. Нумерация начинается с 0: ";
	std::cin >> startBit;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cout << "Укажите номер конечного бита. Нумерация начинается с 0: ";
	std::cin >> stopBit;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	BinaryShift(&arg, sizeof(T), bitState, startBit, stopBit);
}

template <typename argType> 
void BinaryShift(argType *num, short int TypeSize, bool bitState, unsigned short int startBit, unsigned short int stopBit) {
		if (startBit > TypeSize * 8 || stopBit > (TypeSize * 8)-1 || (bitState != 0 && bitState != 1) || startBit> stopBit) {
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
		for (int i = startBit; i < stopBit; i++) {
			((char*)(num))[i / 8] &= ((((char*)(&p_tmp))[i / 8]) | (0 << i % 8));
		}
	}
	PrintNum(num, TypeSize, startBit, stopBit, GREEN);
	std::cout << '\n';
	system("set /p pset=\"Для продолжения и выхода в главное меню нажмите любую клавишу\"");
}