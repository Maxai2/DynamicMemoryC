//#include <iostream>
//#include <windows.h>
//#include <math.h>
//#include <conio.h>
//#include "Functions.h"
//
//using namespace std;
//
//HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
//
//
//int main()
//{
	/*1. Написать функцию, которая получает указатель на мас-
	сив и его размер, и возвращает сумму и произведение его
	элементов в двух параметрах-ссылках.*/
	//int size, sum = 0;
	//long mult = 1;
	//cout << "Input the size of array: ";
	//cin >> size;
	//int *arr = (int*)calloc(size, sizeof(int));

	//cout << "\nArray: ";
	//initialShowArr(arr, size);
	//sumMult(arr, size, sum, mult);
	//cout << "\nThe sum of array: " << sum << ", the mult of array: " << mult << endl;
	//free(arr);

	/*2. Написать функцию, которая получает указатель на мас-
	сив и его размер, и возвращает количество отрицатель-
	ных, положительных и нулевых элементов массива, ис-
	пользуя механизм ссылок.*/

	//int size, neg = 0, zero = 0, pos = 0;
	//cout << "Input the size of array: ";
	//cin >> size;
	//int *arr = (int*)calloc(size, sizeof(int));

	//cout << "\nArray: ";
	//initialShowArr(arr, size);

	//sort(arr, size, neg, zero, pos);
	//cout << "\nThe count of neg: " << neg << ", the count of zero: " << zero << ", the count of pos: " << pos << endl;
	//free(arr);

	/*3. Написать функцию, которая получает указатель на дву-
	мерный массив и его размер, и возвращает среднее
	арифметическое элементов массива, а также количество
	чѐтных и нечѐтных элементов, используя механизм ссы-
	лок.*/

	//int fSize, sSize, avarage = 0, even = 0, odd = 0;
	//cout << "Input the first size of array: ";
	//cin >> fSize;
	//cout << "Input the second size of array: ";
	//cin >> sSize;
	//int **arr = (int**)calloc(fSize, sizeof(int));

	//for (int i = 0; i < fSize; i++)
	//	arr[i] = (int*)calloc(sSize, sizeof(int));

	//cout << "\nArray: ";
	//initialArrTwoShow(arr, fSize, sSize);

	//avarageEvenOdd(arr, fSize, sSize, avarage, even, odd);
	//cout << "\n\nThe avarage is: " << avarage;
	//cout << "\nThe count of even number is: " << even;
	//cout << "\nThe count of odd number is: " << odd << endl;
	//free(arr);
//}

//-------------------------------------------------------------------------------------------
//4 example
//-------------------------------------------------------------------------------------------

//#include <iostream>
//#include <windows.h>
//#include <math.h>
//#include <conio.h>
//#include "Functions.h"
//
//using namespace std;
//
//HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
//
//int main()
//{
	//4. Написать следующие функции для работы с динамиче-
	//ским массивом:
	//a. функция распределения динамической памяти
	//b. функция инициализации динамического массива
	//c. функция печати динамического массива
	//d. функцию удаления динамического массива
	//e. функцию добавления элемента в конец массива
	//f. функцию вставки элемента по указанному индексу
	//g. функцию удаления элемента по указанному индексу

//	cout << "Input the size of array elements: ";
//	int size;
//	cin >> size;
//	int *arr = (int*)calloc(size, sizeof(int));
//
//	cout << "\nInput the avarage";
//	cout << "\nMin number: ";
//	int min;
//	cin >> min;
//	cout << "Max number: ";
//	int max;
//	cin >> max;
//	cout << endl;
//	fillingArr(arr, size, min, max);
//	show(arr, size);
//
//	cout << "\n\nInput number for add to the end: ";
//	int num;
//	cin >> num;
//	addAndInsertToEnd(arr, size, num);
//	show(arr, size);
//
//	cout << "\n\nInput number for add: ";
//	cin >> num;
//	cout << "\nInput link of array: ";
//	int lnk;
//	cin >> lnk;
//	addElementByTheLink(arr, size, num, --lnk);
//	show(arr, size);
//
//	cout << "\n\nInput link of array which is delete: ";
//	cin >> lnk;
//	removeElementByTheLink(arr, size, --lnk);
//	show(arr, size);
//	cout << endl;
//	deleteFunc(arr);
//}

//-------------------------------------------------------------------------------------------
//4 example with menu
//-------------------------------------------------------------------------------------------

#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include "Functions.h"

using namespace std;

HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	//4. Написать следующие функции для работы с динамиче-
	//ским массивом:
	//a. функция распределения динамической памяти
	//b. функция инициализации динамического массива
	//c. функция печати динамического массива
	//d. функцию удаления динамического массива
	//e. функцию добавления элемента в конец массива
	//f. функцию вставки элемента по указанному индексу
	//g. функцию удаления элемента по указанному индексу
	while (true)
	{
		system("cls");
		SetConsoleTextAttribute(w, 7);
		int conti = 1;
		if (conti > 1)
		{
			cout << "Do u want continue?(y/n)";
		}
		cout << "Input the size of array elements: ";
		int size;
		cin >> size;
		int *arr = (int*)calloc(size, sizeof(int));

		cout << "\nInput the avarage";
		cout << "\nMin number: ";
		int min;
		cin >> min;
		cout << "Max number: ";
		int max;
		cin >> max;
		cout << endl;
		fillingArr(arr, size, min, max);
		show(arr, size);
		cout << endl;
		system("pause");

		int key = 0, sel = 1, num = 0, lnk = 0;
		while (true)
		{
			system("cls");
			SetConsoleTextAttribute(w, 7);
			show(arr, size);

			switch (sel)
			{
			case 1:
				SetConsoleTextAttribute(w, 10);
				cout << "\n\nAdd to the end";
				SetConsoleTextAttribute(w, 7);
				cout << "\nAdd from the middle by link";
				cout << "\nDelete by link";
				break;

			case 2:
				SetConsoleTextAttribute(w, 7);
				cout << "\n\nAdd to the end";
				SetConsoleTextAttribute(w, 10);
				cout << "\nAdd from the middle by link";
				SetConsoleTextAttribute(w, 7);
				cout << "\nDelete by link";
				break;

			case 3:
				SetConsoleTextAttribute(w, 7);
				cout << "\n\nAdd to the end";
				cout << "\nAdd from the middle by link";
				SetConsoleTextAttribute(w, 10);
				cout << "\nDelete by link";
			}

			key = getch();
			if (key == 224)
				key = getch();

			if (key == 72 && sel > 1) // Up
				sel--;
			else if (key == 80 && sel < 3) // Down
				sel++;
			else if (key == 13 && sel == 1)
			{
				system("cls");
				SetConsoleTextAttribute(w, 7);
				show(arr, size);

				cout << "\n\nInput number for add to the end: ";
				cin >> num;
				addAndInsertToEnd(arr, size, num);
			}
			else if (key == 13 && sel == 2)
			{
				system("cls");
				SetConsoleTextAttribute(w, 7);
				show(arr, size);

				cout << "\n\nInput number for add: ";
				cin >> num;
				cout << "\nInput link of array: ";
				cin >> lnk;
				addElementByTheLink(arr, size, num, --lnk);
			}
			else if (key == 13 && sel == 3)
			{
				system("cls");
				SetConsoleTextAttribute(w, 7);
				show(arr, size);

				cout << "\n\nInput link of array which is delete: ";
				cin >> lnk;
				removeElementByTheLink(arr, size, --lnk);
				show(arr, size);
				cout << endl;
			}
			else if (key == 27)
				break;
		}

	}
}