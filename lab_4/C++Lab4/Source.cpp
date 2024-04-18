#include <iostream>
#include "MyStringMeth.h"
#include "OwnStrLenOne.h"
#include "OwnStrLenTwo.h"
#include "OwnStrLenThree.h"
#include "OwnStrCpy.h"
#include "OwnStrCmp.h"
#include "OwnStrCat.h"
#include "DynamicMemory.h"
using namespace std;

void main(void)
{
	setlocale(0, "ru");

	myStr();

	cout << "============================================================================" << endl;

	char strExample[] = "Пример строки, для определения длины.";

	cout << "Вызван первый собственный метод определения длины строки - " << ownStrLenOne(strExample) << " букв в строке." << endl;

	cout << "Вызван второй собственный метод определения длины строки - " << ownStrLenTwo(strExample) << " букв в строке." << endl;

	cout << "Вызван третий собственный метод определения длины строки - " << ownStrLenThree(strExample) << " букв в строке." << endl;

	char copy[50] = "";
	ownStrCpy(copy, strExample);

	cout << "\nВызван собственный метод копирования строк, скопирована строчка: " << copy << endl;

	cout << "\nВызван собственный метод сравнения строк, сравниваются строки:\n" << strExample << "\n" << copy << endl;
	if (ownStrCmp(copy, strExample))
	{
		cout << "Эти строки одинаковы." << endl;
	}
	else
	{
		cout << "Эти строки различаются." << endl;
	}

	char firstHalf[100] = "Вызван собственный метод ";
	char secondHalf[] = "конкатенации строк!";

	ownStrCat(firstHalf, secondHalf);
	cout << "\n" << firstHalf << endl;

	cout << "============================================================================" << endl;

	dynamicMemory();

	cout << "============================================================================" << endl;
}