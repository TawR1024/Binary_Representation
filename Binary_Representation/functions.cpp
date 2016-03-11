#pragma once
#include "Header.h"

void PrintNum(void *num, short int TypeSize)
{
	char *p_tmp = reinterpret_cast<char*>(num);
	for (int counter = (TypeSize * 8) - 1; counter >= 0; counter--)
	{
		std::cout << ((p_tmp[counter / 8] >> counter % 8) & 1);
		if ((counter) % 8 == 0)
			std::cout << " ";
	}
}

void BinaryShift(void *num, short int TypeSize, bool bitState, unsigned short int startBit, unsigned short int stopBit) {
	if (startBit > TypeSize * 8 || stopBit > TypeSize * 8) {
		std::cout << "\n" << "������ �����!"<< "\n";
		return;
	}
	
	
	void *p_tmp = 0;
	if (bitState == true) {
		for (int i = startBit; i <= stopBit; i++) {
			((char*)(&p_tmp))[i / 8] = (((char*)(&p_tmp))[i / 8]) | (1 << i % 8); // ��������� �����
			((char*)(num))[i / 8] = (((char*)(num))[i / 8]) | (((char*)(&p_tmp))[i / 8]); // ������������� �������
		}
	}
	else
	{
		for (int i = startBit; i <= stopBit; i++) {
			((char*)(&p_tmp))[i / 8] = ~((((char*)(&p_tmp))[i / 8]) | (1 << i % 8));
			((char*)(num))[i / 8] = (((char*)(num))[i / 8]) & (((char*)(&p_tmp))[i / 8]);
		}
	}
	PrintNum(num, TypeSize);// ������� ���������
}

void about() {
	std::cout << "�������: ���������� � �������� ������������� ��������� ����������� ���������� ����� ������� ���, ����� �������� �� �������, ��� � �� ���������, �������� � ������-����.\n ��������� ��������� ������� 7 ����� ������, ������ �� ��������� ����� �� �����������������, ������� ����� �������� � �������������� �����!\n\nCreated by Ilya Kulakov 4308\n GNU GPL \n";
	system("PAUSE");
}