#include <stdio.h>
#include <stdlib.h>

int main()
{
    // This is the start of the Basic Calculator Program

    int num1;
    int num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Answer: %d\n", num1 + num2);

    return 0;
}