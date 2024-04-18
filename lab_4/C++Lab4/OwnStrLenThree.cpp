#include "OwnStrLenThree.h"

int ownStrLenThree(char a[])
{
    int counter = 0;

    do 
    {
        counter++;
    } while (a[counter] != NULL);

    return counter;
}
