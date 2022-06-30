#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Asking for GPA
    double gpa;

    printf("Enter your gpa: \n");
    scanf("%lf", &gpa);

    printf("Your gpa is: %f\n", gpa);

    // Asking for age
    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("You are %d years old\n", age);

    return 0;
}