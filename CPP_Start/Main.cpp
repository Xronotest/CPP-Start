#include <iostream>

//void PrintHelloWorld()
//{
//	std::cout << "Hello world!\n";
//}
//void PrintNumber(int number)
//{
//	std::cout << number << "\n";
//}
//int ReturnNumber(int a) 
//{
//	a++;
//	return a;
//}
//double Plus(double one, double two)
//{
//	std::cout << "Результат: " << one + two << "\n";
//	one = one + two;
//	return one;
//}
//double Minus(double one, double two)
//{
//	std::cout << "Результат: " << one - two << "\n";
//	one = one - two;
//	return one;
//}
//double Umnozh(double one, double two)
//{
//	std::cout << "Результат: " << one * two << "\n";
//	one = one * two;
//	return one;
//}
//double Delen(double one, double two)
//{
//	std::cout << "Результат: " << one / two << "\n";
//	one = one / two;
//	return one;
//}

void SetArray(int array[], int size);
void PrintArray(int array[], int size);
void SwitchArray(int arrayOne[], int arrayTwo[], const int size);

int main()
{
	setlocale(LC_ALL, "ru");

	const int size = 6;
	int arrOne[size];
	int arrTwo[size];

	SetArray(arrOne, size);
	SetArray(arrTwo, size);
	PrintArray(arrOne, size);
	PrintArray(arrTwo, size);
	SwitchArray(arrOne, arrTwo, size);
	std::cout << "\n";
	PrintArray(arrOne, size);
	PrintArray(arrTwo, size);


	/*double one, two;
	char act;
	 
	std::cout << "Калькулятор V2\n";
	std::cout << "Введите действие(+,-,*,/, =(закончить ввод)): "; std::cin >> act;
	std::cout << "Введите первое число: "; std::cin >> one;


	while (act != '=')
	{
		std::cout << "Введите второе число: "; std::cin >> two;
		if (act == '+')
		{
			one = Plus(one, two);
		}
		else if (act == '-')
		{
			one = Minus(one, two);
		}
		else if (act == '*')
		{
			one = Umnozh(one, two);
		}
		else if (act == '/')
		{
			if (two == 0)
			{
				std::cout << "Это так не работает\n";
			}
			else
			{
				one = Delen(one, two);
			}
		}
		else
		{
			std::cout << one;
		}
		std::cout << "Введите действие(+,-,*,/, =(закончить ввод)): "; std::cin >> act;
	}
	std::cout << "Результат: " << one;*/
	/*PrintHelloWorld();

	int number = 100;
	number = ReturnNumber(number);
	std::cout << number;*/
	/*
	
	тип_возврата Имя_функции(аргументы){
	
		тело_функции

	}

	*/
	/*srand(time(NULL));

	const int row = 3, col = 4;
	int arr[row][col];
	int sumRow = 0, sumCol = 0, sum = 0;

	for (size_t i = 0; i < row; i++)
	{
		sumRow = 0;
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << "\t";
			sumRow += arr[i][j];
		}

		sumCol += arr[i][0];
		std::cout << "| " << sumRow;
		std::cout << "\n";
	}

	std::cout << "------------------------------------\n";

	for (size_t i = 0; i < col; i++)
	{
		sumCol = 0;
		for (size_t j = 0; j < row; j++)
		{
			sumCol += arr[j][i];
		}
		std::cout << sumCol << "\t";
	}
	std::cout << "| ";

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			sum += arr[i][j];
		}
	}
	std::cout << sum;*/
	/*
	srand(time(NULL));

	int a = rand() % 19 - 9;
	int nine[7];
	int sum = 0;

	for (size_t i = 0; i < 7; i++)
	{
		a = rand() % 19 - 9;
		nine[i] = a;
		std::cout << nine[i] << " ";
	}
	std::cout << "\n";

	sum = 0;
	for (size_t i = 0; i < 7; i++)
	{
		if (nine[i] >= 0)
		{
			std::cout << nine[i] << " ";
			sum += nine[i];
		}	
	}
	std::cout << "| " << sum;
	std::cout << "\n";
	sum = 0;
	for (size_t i = 0; i < 7; i++)
	{
		if (nine[i] < 0)
		{
			std::cout << nine[i] << " ";
			sum += nine[i];
		}
	}
	std::cout << "| " << sum;
	std::cout << "\n";*/
	/*srand(time(NULL));

	int a = rand() % 5 + 12;
	for (size_t i = 0; i < 10; i++)
	{
		a = rand() % 19 - 9;
		std::cout << a << "\n";
	}*/
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

void SetArray(int array[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 9 + 1;
	}
}
void PrintArray(int array[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << "\n";
}
void SwitchArray(int arrayOne[], int arrayTwo[], const int size)
{
	int memory;
	for (size_t i = 0; i < size; i++)
	{
		memory = arrayOne[i];
		arrayOne[i] = arrayTwo[i];
		arrayTwo[i] = memory;
	}
}