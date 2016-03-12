#include "Header.h"

	
int main()
{
	setlocale(0, "");


	char menu=' ', exit_=' ';
	bool bitState;
	unsigned short int startBit;
	unsigned short int stopBit;
	do {
		std::cin.clear();
		system("cls");
		std::cout << "�������� ���, ��� ������������� ������ ������� Enter:\n* 1 - int\n* 2 - char\n* 3 - short int\n* 4 - long int\n* 5 - double\n* 6 - float\n* 7 - long long int\n* 0 - ��������� ������ � ������� ���������\n* # - ������� ������ \"� ���������\"\n";
		std::cout << "��� �����:\t";
		std::cin >> menu;
		if (isalpha(menu) != 0) {
			std::cout << "���� �� ����� ����� ��� ?";
			system("PAUSE");
		}
		switch (menu)
		{
		case '1':
			system("cls");
			std::cout << "������ ��� int\n";
			std::cout << "������� �����:\t";
			int i_number;
			std::cin >> i_number;
			std::cout << "�������� ��������� ����� 0 ��� 1:\t";
			std::cin >> bitState;
			std::cout << "������� ����� ���������� ����. ��������� ���������� � 0: ";
			std::cin >> startBit;
			std::cout << "������� ����� ��������� ����. ��������� ���������� � 0:  ";
			std::cin >> stopBit;
			BinaryShift(&i_number, INT, bitState, startBit, stopBit);
			break;
		case '2':
			system("cls");
			std::cout << "������ ��� char\n";
			char ch_smb;
			std::cout << "������� ������:\t";
			std::cin >> ch_smb;
			std::cout << "�������� ��������� ����� 0 ��� 1:\t";
			std::cin >> bitState;
			std::cout << "������� ����� ���������� ����. ��������� ���������� � 0:\t";
			std::cin >> startBit;
			std::cout << "������� ����� ��������� ����. ��������� ���������� � 0:\t";
			std::cin >> stopBit;
			BinaryShift(&ch_smb, CHR, bitState, startBit, stopBit);
			break;
		case '3':
			system("cls");
			std::cout << "������ ��� short int\n";
			std::cout << "������� �����:\t";
			short int shi_number;
			std::cin >> shi_number;
			std::cout << "�������� ��������� ����� 0 ��� 1:\t";
			std::cin >> bitState;
			std::cout << "������� ����� ���������� ����. ��������� ���������� � 0:\t";
			std::cin >> startBit;
			std::cout << "������� ����� ��������� ����. ��������� ���������� � 0:\t";
			std::cin >> stopBit;
			BinaryShift(&shi_number, SHRT, bitState, startBit, stopBit);;
			break;
		case '4':
			system("cls");
			std::cout << "������ ��� long int\n";
			std::cout << "������� �����:\t";
			long int l_number;
			std::cin >> l_number;
			std::cout << "�������� ��������� ����� 0 ��� 1:\t";
			std::cin >> bitState;
			std::cout << "������� ����� ���������� ����. ��������� ���������� � 0:\t";
			std::cin >> startBit;
			std::cout << "������� ����� ��������� ����. ��������� ���������� � 0:\t";
			std::cin >> stopBit;
			BinaryShift(&l_number, L_INT, bitState, startBit, stopBit);
			break;
		case '5':
			system("cls");
			std::cout << "������ ��� double\n";
			std::cout << "������� �����:\t";
			double d_number;
			std::cin >> d_number;
			std::cout << "�������� ��������� ����� 0 ��� 1:\t";
			std::cin >> bitState;
			std::cout << "������� ����� ���������� ����. ��������� ���������� � 0:\t";
			std::cin >> startBit;
			std::cout << "������� ����� ��������� ����. ��������� ���������� � 0:\t";
			std::cin >> stopBit;
			BinaryShift(&d_number, DBL, bitState, startBit, stopBit);
			break;
		case '6':
			system("cls");
			std::cout << "������ ��� float\n";
			std::cout << "������� �����:\t";
			float f_number;
			std::cin >> f_number;
			std::cout << "�������� ��������� ����� 0 ��� 1:\t";
			std::cin >> bitState;
			std::cout << "������� ����� ���������� ����. ��������� ���������� � 0:\t";
			std::cin >> startBit;
			std::cout << "������� ����� ��������� ����. ��������� ���������� � 0:\t";
			std::cin >> stopBit;
			BinaryShift(&f_number, FLT, bitState, startBit, stopBit);
			break;
		case '7':
			system("cls");
			std::cout << "������ ��� long long int\n";
			std::cout << "������� �����:\t";
			long long int l_l_number;
			std::cin >> l_l_number;
			std::cout << "�������� ��������� ����� 0 ��� 1:\t";
			std::cin >> bitState;
			std::cout << "������� ����� ���������� ����. ��������� ���������� � 0:\t";
			std::cin >> startBit;
			std::cout << "������� ����� ��������� ����. ��������� ���������� � 0:\t";
			std::cin >> stopBit;
			BinaryShift(&l_l_number, LL_INT, bitState, startBit, stopBit);
			break;
		case '#':
			about();
			break;
		case '0':
			exit_ = 1;
			break;
		default:
			std::cin.clear();
			exit_ = 0;
			break;
		}
		std::cout << "\n";
		system("pause");
	} while (exit_ != 1);

	exit(0);
	return 0;
}