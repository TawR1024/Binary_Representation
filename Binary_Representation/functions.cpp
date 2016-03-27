#pragma once
#include "functions.h"
#include <iostream>
#include <Windows.h>

void PrintNum(void *num, short int TypeSize, unsigned short int startBit, unsigned short int stopBit, ConsoleColor color){
	char *tmp = static_cast<char*>(num);
	for (int counter = (TypeSize * 8) - 1; counter >= 0; counter--)
	{
		if (counter >= startBit && counter <= stopBit) {
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, color);
		}
		else
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, BROWN);
		}
		std::cout << ((tmp[counter / 8] >> counter % 8) & 1);
		if (counter % 8 == 0) std::cout << " ";
	}
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, LIGHTGRAY);
}

void about() {
	system("CLS");
	std::cout << "Задание: Установить в заданное пользователем состояние определённое количество рядом стоящих бит, номер младшего из которых, как и всё остальное, вводится с клавиа-туры.\n Программа позволяет вводить 7 типов данных, защита от неверного ввода не предусматривалась, дробные числа вводятся с использованием точки!\n\nCreated by Ilya Kulakov 4308\nGNU GPL\n";
	std::cout << "\nДля продолжения нажмите любую клавишу...";
	system("pause>>void");
}

void SplashScreen() {
	srand(time(NULL));
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  // получаем дескриптор консоли
	COORD scrn;

	HWND hwnd;
	char Title[1024];
	GetConsoleTitle(Title, 1024);
	hwnd = FindWindow(NULL, Title);
	MoveWindow(hwnd, 250, 50, 1320, 360, TRUE); // смещаем окно и изменяем его размер 

	
	int flag = 0;
	while(flag<20) {
		int t = rand() % 16;
		int z = rand() % 16;
		if (t != z) {
			SetConsoleTextAttribute(handle, (WORD)((t << 4) | z));
			scrn.X = rand() % 60;
			scrn.Y = rand() % 30;
			SetConsoleCursorPosition(handle, scrn);
			std::cout << "Добро Пожаловать";
			Sleep(600);
			SetConsoleTextAttribute(handle, (WORD)(0 | 0));
			system("cls");
		}
		flag++;
	}
	SetConsoleTextAttribute(handle, LIGHTGRAY);
}
