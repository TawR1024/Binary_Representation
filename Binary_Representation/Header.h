#pragma once
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <ctype.h>

#define CIN_ALPHA_ERR  "Введена буква или группа букв. Повторите ввод."

#define INT sizeof(int)
#define L_INT sizeof(long int)
#define LL_INT sizeof(long long int)
#define CHR sizeof(char)
#define DBL sizeof(double)
#define FLT sizeof(float)
#define SHRT sizeof(short int)

enum ConsoleColor {
	BLACK = 0,
	BLUE= 1,
	GREEN = 2,
	CYAN = 3,
	RED = 4,
	MAGENTA = 5,
	BROUN = 6,
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