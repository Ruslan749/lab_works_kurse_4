#include "bubble.h"
using namespace std;

void bubble(int arr[], int size)
{
	for (int i = 0; i + 1 < size; i++)
	{
		for (int j = 0; j + 1 < size -i; j++)
		{
			if (arr[j+1] < arr[j])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

static void swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}