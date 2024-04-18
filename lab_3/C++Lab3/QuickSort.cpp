#include "QuickSort.h"
using namespace std;

void quickSort(int arr[], int size)
{
	int minIndex = 0;
	int maxIndex = size - 1;
	int pivot = arr[size / 2];

	do {
		while (arr[minIndex] < pivot)
		{
			minIndex++;
		}
		while (arr[maxIndex] > pivot)
		{
			maxIndex--;
		}
		if (minIndex <= maxIndex)
		{
			swap(arr[minIndex], arr[maxIndex]);

			minIndex++;
			maxIndex--;
		}
	} while (minIndex <= maxIndex);

	if(maxIndex > 0) quickSort(arr, maxIndex + 1);
	if (minIndex < size) quickSort(&arr[minIndex], size - minIndex);
}

static void swap(int &left, int &right) 
{
	int temp = left;
	left = right;
	right = temp;
}


