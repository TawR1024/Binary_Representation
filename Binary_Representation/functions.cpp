#pragma once
#include "functions.h"
#include <iostream>
#include <Windows.h>

void PrintNum(void *num, short int TypeSize, unsigned short int startBit, unsigned short int stopBit){
	char *tmp = (char*)num;
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
		std::cout << ((tmp[counter / 8] >> counter % 8) & 1);
		if (counter % 8 == 0) std::cout << " ";
	}
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, LIGHTGRAY);
}

void about() {
	system("CLS");
	std::cout << "�������: ���������� � �������� ������������� ��������� ����������� ���������� ����� ������� ���, ����� �������� �� �������, ��� � �� ���������, �������� � ������-����.\n ��������� ��������� ������� 7 ����� ������, ������ �� ��������� ����� �� �����������������, ������� ����� �������� � �������������� �����!\n\nCreated by Ilya Kulakov 4308\nGNU GPL\n";
	system("PAUSE");
}
