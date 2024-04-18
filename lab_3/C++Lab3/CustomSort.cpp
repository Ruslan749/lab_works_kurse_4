#include "CustomSort.h"
using namespace std;

void customeSort(int arr[], int size)
{
	int evenLeftIndex = 1;
	int evenRightIndex = size - 2;
	int unEvenLeftIndex = 2;
	int unEvenRightIndex = size - 1;

	while (evenLeftIndex <= evenRightIndex)
	{
		for (int i = evenRightIndex; i >= evenLeftIndex; i-=2)
			if (arr[i - 2] > arr[i]) swap(arr[i-2], arr[i]);
		evenLeftIndex+=2;


		for (int i = evenLeftIndex; i <= evenRightIndex; i+=2)
			if (arr[i - 2] > arr[i]) swap(arr[i - 2], arr[i]);
		evenRightIndex-=2;
	}
	while (unEvenLeftIndex <= unEvenRightIndex)
	{
		for (int i = unEvenRightIndex; i >= unEvenLeftIndex; i -= 2)
			if (arr[i - 2] < arr[i]) swap(arr[i - 2], arr[i]);
		unEvenLeftIndex += 2;


		for (int i = unEvenLeftIndex; i <= unEvenRightIndex; i += 2)
			if (arr[i - 2] < arr[i]) swap(arr[i - 2], arr[i]);
		unEvenRightIndex -= 2;
	}

}

static void swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}
