#include "OwnStrCat.h"

void ownStrCat(char a[], char b[])
{
	int i = 0;
	int counter = 0;
	for (; a[i] != NULL; i++){}
	for (;  b[i] != NULL; i++)
	{
		a[i] = b[counter];
		counter++;
	}
}
