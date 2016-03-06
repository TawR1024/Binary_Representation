#include <iostream>
#include <cstdlib>



void PrintNum(void *num, short int TypeSize)
{
	char *p_tmp = reinterpret_cast<char*>(num);
	for (int counter = (TypeSize * 8)-1; counter >=0; counter--)
	{
		std::cout << ((p_tmp[counter / 8] >> counter%8) & 1);
		if ((counter ) % 8 == 0)
			std::cout << " ";
	}
}

int  BinaryShift(unsigned short int startBit, int unsigned numberOfBits, unsigned short int bitState, int number ) {
	int mask = 0;
	for (int i = startBit; i < numberOfBits + startBit - 1; i++) {
		if (bitState == 1) {
			number |= (1 << i); // ������������� 1
		}
		else {
			for (int i = startBit; i < numberOfBits + startBit - 1; i++) {
				number &= ~(1 << i);// ������������� 0
			}
		}
	}
	return number;
	}




int main()
{
	setlocale(0, "");
	/*int start=1, number=11, tmp= 1048575,state=0;
	std::cin >> start;
	std::cin >> number;
	std::cin >> tmp;
	std::cin >> state;*/
	char tmp = 'c';
	PrintNum(&tmp, sizeof(char));
	//tmp = BinaryShift(start, number, state,tmp);
	//std::cout << "\n";
	//PrintNum(&tmp, sizeof(int));
	system("PAUSE");
	/*int menu, exit_ = 0;
	
	_asm { 
		mov		ax,ax
	}*/

	/*do {
		system("cls");
		std::cout << "�������� ���, ��� ������������� ������ ������� Enter:\n 1 - int\n2 - char\n3 - short int\n4 - long int\n5 - double\n6 - float\n7 - long long int\n0 - ��������� ������ � ������� ���������\n";
		std::cin >> menu;
		switch (menu)
		{
		case 1:
			system("cls");
			std::cout << "������ ��� int\n";
			std::cout << "������� �����:\t";
			int i_number;
			std::cin >> i_number;
			PrintNum(&i_number, sizeof(int));
			break;
		case 2:
			system("cls");
			std::cout << "������ ��� char\n";
			char ch_smb;
			std::cout << "������� ������:\t";
			std::cin >> ch_smb;
			ch_smb = getchar();
			PrintNum(&ch_smb, sizeof(char));
			break;
		case 3:
			system("cls");
			std::cout << "������ ��� short int\n";
			std::cout << "������� �����:\t";
			short int shi_number;
			std::cin >> shi_number;
			PrintNum(&shi_number, sizeof(short int));
			break;
		case 4:
			system("cls");
			std::cout << "������ ��� long int\n";
			std::cout << "������� �����:\t";
			long int l_number;
			std::cin >> l_number;
			PrintNum(&l_number, sizeof(long int));
			break;
		case 5:
			system("cls");
			std::cout << "������ ��� double\n";
			system("cls");
			std::cout << "������ ��� int";
			std::cout << "������� �����:\t";
			double d_number;
			std::cin >> d_number;
			PrintNum(&d_number, sizeof(double));
			break;
		case 6:
			system("cls");
			std::cout << "������ ��� float\n";
			std::cout << "������� �����:\t";
			float f_number;
			std::cin >> f_number;
			PrintNum(&f_number, sizeof(float));
			break;
		case 7:
			system("cls");
			std::cout << "������ ��� long long int\n";
			std::cout << "������� �����:\t";
			long long int l_l_number;
			std::cin >> l_l_number;
			PrintNum(&l_l_number, sizeof(long long int));
			break;
		case 0:
			exit_ = 1;
		}
		std::cout << "\n";
		system("pause");
	} while (exit_ != 1);
	exit(0);*/
	return 0;
}