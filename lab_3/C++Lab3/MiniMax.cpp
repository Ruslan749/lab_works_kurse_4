#include "MiniMax.h"
using namespace std;

void miniMax(int arr[], int size)
{
	//текущие индексы мин и макс элементов
	int imin, imax;
	//вычисление n-колличества элементов
	int i;
	//установка начальных индексов для мин и макс;
	imin = i = 0; imax = i = 0;
	for (i = 0; i < size - 1; i++) //нахождение мин и макс
	{
		imin = i;
		for (int j = i + 1; j < size; j++)
			if (arr[j] < arr[imin]) imin = j;
		int t = arr[i];
		arr[i] = arr[imin];
		arr[imin] = t;
	}
}
