#include "OwnStrLenTwo.h"

int ownStrLenTwo(char a[])
{
    int counter = 0;

	while (a[counter] != NULL)
	{
		counter++;
	}

    return counter;
}
