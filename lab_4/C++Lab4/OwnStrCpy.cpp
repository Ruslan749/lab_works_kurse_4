#include "OwnStrCpy.h"


void ownStrCpy(char a[], char b[])
{
	for (int i = 0; b[i] != NULL; i++)
	{
		a[i] = b[i];
	}
}
