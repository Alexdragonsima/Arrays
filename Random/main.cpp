//RANDOM
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	do
	{
		system("CLS");
		cout << "¬ведите минимальное случайное число: "; cin >> minRand;
		cout << "¬ведите максимальное случайное число: "; cin >> maxRand;
		if (minRand >= maxRand)
		{
			std::cerr << "Error: введены не корректные значени€" << endl;
			system("POUSE");
		}
	} while (minRand >= maxRand);

	//заполнение массива случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;//функци€ возвращает псевдослучайное число 
	}

	//вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//—ортировка массива
	for (int i = 0; i < n ; i++)//счетчик i выбирает элемент,в который нужно поместить минимальное значение
	{
		for (int j = i + 1; j < n; j++)//j перебирает оставшиес€ элементы
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	//вывод отсортированного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
