#pragma once


#define CIN_ALPHA_ERR  "Введена буква или группа букв. Повторите ввод."

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


void PrintNum(void *num, short int TypeSize, unsigned short int startBit, unsigned short int stopBit);
void BinaryShift(void *num, short int TypeSize, bool bitState, unsigned short int startBit, unsigned short int stopBit);
void about();

