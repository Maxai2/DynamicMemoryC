//#include <iostream>
//#include <time.h>
//#include <windows.h>
//
//using namespace std;
//
//HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//void initialShowArr(int *arr, int length)
//{
//	srand(time(0));
//
//	for (int i = 0; i < length; i++)
//	{
//		arr[i] = rand() % 40 - 10;
//		cout << arr[i] << " ";
//	}
//}
//
//void sumMult(int *arr, int length, int &sum, long &mult)
//{
//	for (int i = 0; i < length; i++)
//	{
//		sum += arr[i];
//		mult *= arr[i];
//	}
//}
//
//void sort(int *arr, int length, int &neg, int &zero, int &pos)
//{
//	for (int i = 0; i < length; i++)
//	{
//		if (arr[i] < 0)
//			neg++;
//		else if (arr[i] == 0)
//			zero++;
//		else if (arr[i] > 0)
//			pos++;
//	}
//}
//
//void initialArrTwoShow(int **arr, int fSize, int sSize)
//{
//	srand(time(0));
//	short row = 3, col = 8;
//	for (int i = 0; i < fSize; i++)
//	{
//		for (int j = 0; j < sSize; j++)
//		{
//			arr[i][j] = rand() % 20;
//			SetConsoleCursorPosition(h, { col, row });
//			cout << arr[i][j];
//			col += 4;
//		}
//		col = 8; row++;
//	}
//}
//
//void avarageEvenOdd(int **arr, int fSize, int sSize, int &avarage, int &even, int &odd)
//{
//	for (int i = 0; i < fSize; i++)
//	{
//		for (int j = 0; j < sSize; j++)
//		{
//			avarage += arr[i][j];
//
//			if (arr[i][j] % 2 == 0)
//				even++;
//			else
//				odd++;
//		}
//	}
//	avarage /= (fSize * sSize);
//}

//-------------------------------------------------------------------------------------------
//4 example
//-------------------------------------------------------------------------------------------

//#include <iostream>
//#include <time.h>
//#include <windows.h>
//
//using namespace std;
//
//void fillingArr(int *arr, int size, int min, int max)
//{
//	srand(time(0));
//	//	int form = (max - min) + min;
//
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % (max - min) + min;
//	}
//}
//
//void show(int *arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//void addAndInsertToEnd(int *&arr, int &size, int num)
//{
//	arr = (int*)realloc(arr, (++size) * sizeof(int));
//	arr[size - 1] = num;
//}
//
//void addElementByTheLink(int *&arr, int &size, int num, int lnk)
//{
//	arr = (int*)realloc(arr, (++size) * sizeof(int));
//	int temp = 0;
//
//	for (int i = size; i > lnk; i--)
//	{
//		temp = arr[i];
//		arr[i] = arr[i - 1];
//		arr[i - 1] = temp;
//	}
//
//	arr[lnk] = num;
//}
//
//void removeElementByTheLink(int *&arr, int &size, int lnk)
//{
//	for (int i = lnk; i < size; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//
//	arr = (int*)realloc(arr, (--size) * sizeof(int));
//}
//
//void deleteFunc(int *arr)
//{
//	free(arr);
//}