#include "DynamicMemory.h"
#include "OwnStrCat.h"
#include "OwnStrLenOne.h"
#include "OwnStrLenTwo.h"
using namespace std;

void dynamicMemory(void)
{
	int n = 50;

	char *str1 = (char*)calloc(n, sizeof(char));// функция malloc просто выделяет блок памяти заданного размера, не инициализируя его значениями по умолчанию.
	char *str2 = (char*)calloc(n, sizeof(char));// функция calloc, в свою очередь, выделяет блок памяти и инициализирует его нулевыми значениями.

	if (str1 == NULL)
	{
		printf("Память для str1 не выделена!");
		return;
	}
	if (str2 == NULL)
	{
		printf("Память для str2 не выделена!");
		return;
	}

	char sent1[] = "Использование динамической памяти";

	for (int i = 0; sent1[i] != NULL; i++)
	{
		str1[i] = sent1[i];
	}

	char sent2[] = ", организация и использование массивов в ней.";

	for (int i = 0; sent2[i] != NULL; i++)
	{
		str2[i] = sent2[i];
	}

	cout << str1 << str2 << endl;

	cout << "Длина строки выше равна " << ownStrLenOne(str1) + ownStrLenTwo(str2) <<" букв." << endl;

	free(str1);
	free(str2);
}
