#include "MiniMax.h"
#include "bubble.h"
#include "QuickSort.h"
#include "Show.h"
#include "CustomSort.h"
#include "AscendingIndexingSort.h"
#include "DescendingIndexingSort.h"
using namespace std;

void main(void)
{
	setlocale(0, "ru");
	int mas[] = { 2, 5, -8, 1, -4, 6, 3, -5, -9, 13, 0, 4, 9 };
	const int n = sizeof(mas) / sizeof(int);
	int mas2[n]{}, mas3[n]{}, mas4[n]{}, mas5[n]{}, mas6[n]{};

	for (int i = 0; i < n; i++)
	{
		mas2[i] = mas3[i] = mas4[i] = mas5[i] = mas6[i] = mas[i];
	}

	cout << "Не отсортированный массив:" << endl;
	show(mas, n);

	cout << "Сортировка методом <<МиниМакс>>:" << endl;
	miniMax(mas, n);
	show(mas, n);

	cout << "Сортировка методом <<Пузырька>>:" << endl;
	bubble(mas2, n);
	show(mas2, n);

	cout << "Сортировка методом <<Быстрой сортировки>>:" << endl;
	quickSort(mas3,n);
	show(mas3, n);

	cout << "Сортировка чётных числел массива по возрастанию и нечётных по убыванию: " << endl;
	customeSort(mas4, n);
	show(mas4, n);

	cout << "Сортировка массива по возрастанию в выбранном интервале: " << endl;
	AscIndSort(mas5, n);
	show(mas5, n);

	cout << "Сортировка массива по убыванию в выбранном интервале: " << endl;
	desIndSort(mas6, n);
	show(mas6, n);
}
