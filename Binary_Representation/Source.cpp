#include "Header.h"

	
int main()
{
	setlocale(0, "");
	unsigned short int menu=0, exit_=0;
	bool bitState;
	unsigned short int startBit;
	unsigned short int stopBit;
	do {
		system("cls");
		std::cout << "Выбирите тип, для подтверждения выбора нажмите Enter:\n 1 - int\n2 - char\n3 - short int\n4 - long int\n5 - double\n6 - float\n7 - long long int\n0 - Завершить работы и закрыть программу\n12345 - вывести раздел \"О программе\"";
		std::cin >> menu;
		switch (menu)
		{
		case 1:
			system("cls");
			std::cout << "Выбран тип int\n";
			std::cout << "Введите число:\t";
			int i_number;
			std::cin >> i_number;
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			BinaryShift(&i_number, INT, bitState, startBit, stopBit);
			break;
		case 2:
			system("cls");
			std::cout << "Выбран тип char\n";
			char ch_smb;
			std::cout << "Введите символ:\t";
			std::cin >> ch_smb;
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			BinaryShift(&ch_smb, CHR, bitState, startBit, stopBit);
			break;
		case 3:
			system("cls");
			std::cout << "Выбран тип short int\n";
			std::cout << "Введите число:\t";
			short int shi_number;
			std::cin >> shi_number;
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			BinaryShift(&shi_number, SHRT, bitState, startBit, stopBit);;
			break;
		case 4:
			system("cls");
			std::cout << "Выбран тип long int\n";
			std::cout << "Введите число:\t";
			long int l_number;
			std::cin >> l_number;
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			BinaryShift(&l_number, L_INT, bitState, startBit, stopBit);
			break;
		case 5:
			system("cls");
			std::cout << "Выбран тип double\n";
			system("cls");
			std::cout << "Выбран тип int";
			std::cout << "Введите число:\t";
			double d_number;
			std::cin >> d_number;
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			BinaryShift(&d_number, DBL, bitState, startBit, stopBit);
			break;
		case 6:
			system("cls");
			std::cout << "Выбран тип float\n";
			std::cout << "Введите число:\t";
			float f_number;
			std::cin >> f_number;
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			BinaryShift(&f_number, FLT, bitState, startBit, stopBit);
			break;
		case 7:
			system("cls");
			std::cout << "Выбран тип long long int\n";
			std::cout << "Введите число:\t";
			long long int l_l_number;
			std::cin >> l_l_number;
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			BinaryShift(&l_l_number, LL_INT, bitState, startBit, stopBit);
			break;
		case 12345:
			about();
			break;
		case 0:
			exit_ = 1;
		}
		std::cout << "\n";
		system("pause");
	} while (exit_ != 1);
	exit(0);
	return 0;
}