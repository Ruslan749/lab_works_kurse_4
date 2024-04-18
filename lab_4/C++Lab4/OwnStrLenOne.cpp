#include "OwnStrLenOne.h"

int ownStrLenOne(char a[])
{
	int counter = 0;

	for (int i = 0; a[i] != NULL; i++)
	{
		counter++;
	}

	return counter;
}
