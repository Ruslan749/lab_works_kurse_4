#include "DescendingIndexingSort.h"
using namespace std;

void desIndSort(int arr[], int size)
{
	cout << "Выберете левый крайний индекс от 1 до 12: ";
	int leftIndexAsc;
	cin >> leftIndexAsc;
	while (leftIndexAsc < 1 || leftIndexAsc > 12)
	{
		cout << "Введено некорректное значение интервала для левого индекса, повторите ввод: ";
		cin >> leftIndexAsc;
	}
	cout << "Выберете левый крайний индекс от 2 до 13: ";
	int rightIndexAsc;
	cin >> rightIndexAsc;
	while (leftIndexAsc >= rightIndexAsc || rightIndexAsc > 13)
	{
		cout << "Введено некорректное значение интервала для правого интервала, повторите ввод: ";
		cin >> rightIndexAsc;
	}
	rightIndexAsc -= 1;

	while (leftIndexAsc <= rightIndexAsc)
	{
		for (int i = rightIndexAsc; i >= leftIndexAsc; i--)
			if (arr[i - 1] < arr[i]) swap(arr[i - 1], arr[i]);
		leftIndexAsc++;


		for (int i = leftIndexAsc; i <= rightIndexAsc; i++)
			if (arr[i - 1] < arr[i]) swap(arr[i - 1], arr[i]);
		rightIndexAsc--;
	}
}
