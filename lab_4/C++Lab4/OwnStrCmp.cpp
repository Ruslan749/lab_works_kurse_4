#include "OwnStrCmp.h"

bool ownStrCmp(char a[], char b[])
{
	bool isMatch = true;
	for (int i = 0; a[i] != NULL; i++)
	{
		if (a[i] != b[i])
		{
			isMatch = false;
		}
	}
	return isMatch;
}
