#include "functions.cpp"


int main()
{
	setlocale(0, "");
	char menu = ' ';
	char exit_ = ' ';
	bool bitState;
	unsigned short int startBit;
	unsigned short int stopBit;
	do {
		std::cin.clear();
		system("cls");
		std::cout << "Выбирите тип, для подтверждения выбора нажмите Enter:\n* 1 - int\n* 2 - char\n* 3 - short int\n* 4 - long int\n* 5 - double\n* 6 - float\n* 7 - long long int\n* 0 - Завершить работы и закрыть программу\n* # - вывести раздел \"О программе\"\n";
		std::cout << "Ваш Выбор:\t";
		std::cin >> menu;
		try {
			if (isalpha(menu) != 0) {
				std::cin.clear();
				std::cin.ignore(std::cin.rdbuf()->in_avail());
				throw CIN_ALPHA_ERR;
			}
		}
		catch (char *str) {
			std::cout << str;
		}

		switch (menu)
		{
		case '1':
			system("cls");
			std::cout << "Выбран тип int\n";
			inputParametrs(); // ERROR
			break;
			/*std::cout << "Введите число:\t";
			int i_number;
			std::cin >> i_number;
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
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:  ";
			std::cin >> stopBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			BinaryShift(&i_number, INT, bitState, startBit, stopBit);*/
			
		case '2':
			system("cls");
			std::cout << "Выбран тип char\n";
			inputParametrs();
			break
			/*char ch_smb;
			std::cout << "Введите символ:\t";
			std::cin >> ch_smb;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			BinaryShift(&ch_smb, CHR, bitState, startBit, stopBit);
			break;*/
		case '3':
			system("cls");
			std::cout << "Выбран тип short int\n";
			std::cout << "Введите число:\t";
			inputParametrs();
			break
			/*short int shi_number;
			std::cin >> shi_number;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			BinaryShift(&shi_number, SHRT, bitState, startBit, stopBit);;
			break;*/
		case '4':
			system("cls");
			std::cout << "Выбран тип long int\n";
			inputParametrs();
			break
			/*std::cout << "Введите число:\t";
			long int l_number;
			std::cin >> l_number;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			BinaryShift(&l_number, L_INT, bitState, startBit, stopBit);
			break;*/
		case '5':
			system("cls");
			std::cout << "Выбран тип double\n";
			inputParametrs();
			break
			/*std::cout << "Введите число:\t";
			double d_number;
			std::cin >> d_number;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			BinaryShift(&d_number, DBL, bitState, startBit, stopBit);
			break;*/
		case '6':
			system("cls");
			std::cout << "Выбран тип float\n";
			std::cout << "Введите число:\t";
			inputParametrs();
			break
			/*float f_number;
			std::cin >> f_number;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			BinaryShift(&f_number, FLT, bitState, startBit, stopBit);
			break;*/
		case '7':
			system("cls");
			std::cout << "Выбран тип long long int\n";
			std::cout << "Введите число:\t";
			inputParametrs();
			break
			/*long long int l_l_number;
			std::cin >> l_l_number;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Выберите состояние битов 0 или 1:\t";
			std::cin >> bitState;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер начального бита. Нумерация начинается с 0:\t";
			std::cin >> startBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cout << "Укажите номер конечного бита. Нумерация начинается с 0:\t";
			std::cin >> stopBit;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			BinaryShift(&l_l_number, LL_INT, bitState, startBit, stopBit);
			break;*/
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