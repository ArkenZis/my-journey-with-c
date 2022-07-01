#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Creating an array

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    // Printing out a the 2nd position element of array
    printf("%d\n", luckyNumbers[2]);

    // Changing value of 1st position element of array
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[1]);

    return 0;
}