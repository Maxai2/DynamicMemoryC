//#pragma once

//void sumMult(int *arr, int length, int &sum, long &mult);
//void initialShowArr(int *arr, int length);
//void sort(int *arr, int length, int &neg, int &zero, int &pos);
//void initialArrTwoShow(int **arr, int fSize, int sSize);
//void avarageEvenOdd(int **arr, int fSize, int sSize, int &avarage, int &even, int &odd);

//-------------------------------------------------------------------------------------------
//4 example
//-------------------------------------------------------------------------------------------

#pragma once

void fillingArr(int *arr, int size, int min, int max);
void addAndInsertToEnd(int *&arr, int &size, int num);
void addElementByTheLink(int *&arr, int &size, int num, int lnk);
void removeElementByTheLink(int *&arr, int &size, int lnk);
void show(int *arr, int size);
void deleteArr(int *arr);