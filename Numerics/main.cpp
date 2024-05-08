//NUMERICS
#include<iostream>
using namespace std;

//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "");
	int decimal;				//десятичное число.введенноес клавиатуры
	cout << "Введите десятичное число: "; cin >> decimal;
#ifdef DEC_2_BIN
	const int MAX_CAPACITY = 32;//максимально возможная разрядность двоичного числа
	bool binary[MAX_CAPACITY]{};//этот массив будет хранитьразряды двоичного числа

	int i = 0;					//номер разряда
	/*/for (; decimal > 0; i++)
	{
		binary[i] = decimal % 2;// сохраняем младший разряд числа в массиве
		decimal /= 2;			//убираем младший разрядиз десятичного числа
	}*/
	for (; decimal; decimal /= 2)binary[i++] = decimal % 2;

	for (--i; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << endl;
#endif // DEC_2_BIN

#ifdef DEC_2_HEX
	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; i++)
	{
		hex[i] = decimal % 16; //получаем младший шестнадцатиричный разряд и сохраняем его
		decimal /= 16;         //убираем младший шестнадцатиричный разряд из десятичного числа
	}

	for (i--; i >= 0; i--)
	{
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		//(hex[i] < 10) ? cout << (int)hex[i] : cout << char(hex[i] + 55);
		//if (hex[i] < 10)cout << (int)hex[i]; else cout << char(hex[i] + 55);
	}
	cout << endl;
#endif // DEC_2_HEX


}