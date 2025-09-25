#include <iostream>



int main()
{
	setlocale(LC_ALL, "ru");

	/*float RUB = 0;
	float balance = -1;
	int valut;
	char contin = 'y';

	std::cout << "Конвентер\n";

	while (contin != 'n' || contin == 'N')
	{
		if (contin == 'y' || contin == 'Y')
		{
			std::cout << "Введите кол-во рублей: "; std::cin >> balance;
			while (balance < 0)
			{
				std::cout << "Неверный ввод!\n";
				std::cout << "Введите кол-во рублей: "; std::cin >> balance;
			}
			RUB = balance;
			std::cout << "Выбирайте валюту. (1-Доллар; 2-Евро; 3-Юань; 4-Фарит; 5-Йена; 6-Рубль;) ";  std::cin >> valut;

			RUB = RUB / 100 * 95;

			if (valut == 1)
			{
				balance /= 83.99;
				std::cout << balance << " Долларов\n";
			}
			else if (valut == 2)
			{
				balance /= 98.6;
				std::cout << balance << " Евро\n";
			}
			else if (valut == 3)
			{
				balance /= 11.72;
				std::cout << balance << " Юаней\n";
			}
			else if (valut == 4)
			{
				balance /= 37;
				std::cout << balance << " Фаритов\n";
			}
			else if (valut == 5)
			{
				balance *= 0.57;
				std::cout << balance << " Йен\n";
			}
			else if (valut == 6)
			{
				balance = RUB;
				std::cout << balance << " Рублей\n";
			}
		}
		else if (contin != 'n')
		{
			std::cout << "Неверный ввод!\n";
		}
		std::cout << "Желаете повторить? (y/n)\n"; std::cin >> contin;
	}*/

	/*
		тип_данных имя_массива[размер_массвива];
	

	int arr[5];
	arr[1] = 10;
	*/
	/*char star = '*';

	for (size_t i = 0; i < 8; i++)
	{
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << " " << star << " ";
			if (i == 4)
			{
				std::cout << "\n";
			}
		}
	}
	std::cout << "---------------------------------------------------\n";
	int loc = 0;
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t i = 0; i < 10; i++)
		{
			loc++;
			if (loc == 5 || loc == 6 || loc == 13 || loc == 18 || loc == 22 || loc == 29 || loc == 41 || loc == 50 || loc == 51 || loc == 60 || loc == 72 || loc == 79 || loc == 83 || loc == 88 || loc == 95 || loc == 96)
			{
				std::cout << " " << star << " ";
			}
			else
			{
				std::cout << "   ";
			}
			if (i == 9)
			{
				std::cout << "\n";
			}
		}
	}
	std::cout << "---------------------------------------------------\n";
	int leg = 40;
	int heg = 20;
	for (size_t h = 0; h < heg; h++)
	{
		for (size_t i = 0; i < leg; i++)
		{

			
			if (i == leg / 2 - 1 && h == 0 || i == leg / 2 && h == 0 
				|| i == leg / 4 && h == heg / 2 / 2 || i == leg / 2 + (leg / 4) && h == heg / 2 / 2 
				|| i == leg / 4 / 2 && h == heg / 2 || i == leg / 2 + (leg / 5) + (leg / 5) && h == heg / 2
				|| i == 0 && h == heg - 1 || i == leg - 1 && h == heg - 1)
			{
				std::cout << " " << star << " ";
			}
			else
			{
				std::cout << "   ";
			}
			if (i == leg-1)
			{
				std::cout << "\n";
			}
		}
	}
	for (size_t h = 0; h < heg; h++)
	{
		for (size_t i = 0; i < leg; i++)
		{


			if (i == 0 && h == 0 || i == leg - 1 && h == 0
				|| i == leg / 4 - 1 && h == heg / 2 || i == leg / 2 + (leg / 4) + 1 && h == heg / 2
				|| i == leg / 4 && h == heg / 2 + 1 || i == leg / 2 + (leg / 4) && h == heg / 2 + 1
				|| i == leg / 2 - 1 && h == heg - 1 || i == leg / 2 && h == heg - 1)
			{
				std::cout << " " << star << " ";
			}
			else
			{
				std::cout << "   ";
			}
			if (i == leg - 1)
			{
				std::cout << "\n";
			}
		}
	}*/
	/*
	int N;
	
	cout << "Входными данныими являются:\n"
		 << "Емкость аккумулятора смарфона (мАч.)-> "; cin >> N;
	while (N < 0)
	{
		cout << "Неверно введено\n"
			 << "Емкость аккумулятора смарфона (мАч.)-> "; cin >> N;
	}
	cout << "----------------------------\n"
		 << "Выходные данные: \n"
		 << "Минимальная ёмкость:" << N * 3 << " мАч.";




		*/
	/*
		double one, two;
		char act;

		cout << "Калькулятор\n";
		cout << "Введите действие(+,-,*,/, =(закончить ввод)): "; cin >> act;
		cout << "Введите первое число: "; cin >> one;
	
	
		while (act != '=') 
		{
			cout << "Введите второе число: "; cin >> two;
			if (act == '+')
			{
				cout << "Результат: " << one + two << endl;
				one = one + two;
			}
			else if (act == '-')
			{
				cout << "Результат: " << one - two << endl;
				one = one - two;
			}
			else if (act == '*')
			{
				cout << "Результат: " << one * two << endl;
				one = one * two;
			}
			else if (act == '/')
			{
				if (two == 0)
				{
					cout << "Это так не работает\n";
				}
				else
				{
					cout << "Результат: " << one / two << endl;
					one = one / two;
				}
			}
			else
			{
				cout << one;
			}
			cout << "Введите действие(+,-,*,/, =(закончить ввод)): "; cin >> act;
		}
		cout << "Результат: " << one;
	*/
return 0;
}