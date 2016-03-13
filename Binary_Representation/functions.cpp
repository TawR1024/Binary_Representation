
#include "Header.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <ctype.h>



void PrintNum(void *num, short int TypeSize, unsigned short int startBit, unsigned short int stopBit)
{
	char *p_tmp = reinterpret_cast<char*>(num);
	for (int counter = (TypeSize * 8) - 1; counter >= 0; counter--)
	{
		if (counter >= startBit && counter <= stopBit) {
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, GREEN);
		}
		else
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, LIGHTGRAY);
		}
		std::cout << ((p_tmp[counter / 8] >> counter % 8) & 1);
		if ((counter) % 8 == 0)
			std::cout << " ";
	}
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, LIGHTGRAY);
}

void BinaryShift(void *num, short int TypeSize, bool bitState, unsigned short int startBit, unsigned short int stopBit) {
	try {
		if(startBit > TypeSize * 8 || stopBit > TypeSize * 8 || (bitState != 0 && bitState != 1) || startBit> stopBit) {
			throw INPUT_DATA_ERR;
		}
	}
	catch(char *str){
		std::cout << str<<"\n";
		system("PAUSE");
		std::cin.clear();
		return;
	}
	PrintNum(num, TypeSize, startBit, stopBit);
	std::cout << "\n";
	void *p_tmp = 0;
	if (bitState == true) {
		for (int i = startBit; i <= stopBit; i++) {
			((char*)(&p_tmp))[i / 8] = (((char*)(&p_tmp))[i / 8]) | (1 << i % 8); // генерация маски
			((char*)(num))[i / 8] = (((char*)(num))[i / 8]) | (((char*)(&p_tmp))[i / 8]); // устанавливает единицу
		}
	}
	else
	{
		for (int i = startBit; i <= stopBit; i++) {
			((char*)(&p_tmp))[i / 8] = ~((((char*)(&p_tmp))[i / 8]) | (1 << i % 8));
			((char*)(num))[i / 8] = (((char*)(num))[i / 8]) & (((char*)(&p_tmp))[i / 8]);
		}
	}
	PrintNum(num, TypeSize, startBit, stopBit);// конечый результат
}

void about() {
	system("CLS");
	std::cout << "Задание: Установить в заданное пользователем состояние определённое количество рядом стоящих бит, номер младшего из которых, как и всё остальное, вводится с клавиа-туры.\n Программа позволяет вводить 7 типов данных, защита от неверного ввода не предусматривалась, дробные числа вводятся с использованием точки!\n\nCreated by Ilya Kulakov 4308\nGNU GPL\n";
	system("PAUSE");
}
