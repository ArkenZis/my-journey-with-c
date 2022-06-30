// This exercise is to practice and show the different types of User Input Functions

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    // Asking for Name
    char name[20];
    printf("Enter your Full Name: \n");
    fgets(name, 20, stdin);

    

     // Asking for grade
    char grade;
    
    printf("Enter your grade: ");
    scanf("%c", &grade);

    

    // Asking for GPA
    double gpa;

    printf("Enter your gpa: \n");
    scanf("%lf", &gpa);

    

    // Asking for age
    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    

    // Asking for Favourite Animal
    char favAnimal[20];

    printf("Enter the name of your Favourite Animal: \n");
    scanf("%s", favAnimal);

    printf("\nYour Full Name is %s", name);
    printf("You are %d years old\n", age);
    printf("Your Favourite Animal is %s\n", favAnimal);
    printf("Your grade is: %c\n", grade);
    
    printf("Your gpa is: %f\n", gpa);   

    return 0;
}