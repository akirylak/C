#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main (void)
{
  /*

Had to disable as showing error

    //Variable for age created
    int age;
    //Prompt user for input with :
    printf("Enter Your Age: ");
    //Use %d for int, & to point to age
    //Scan allows program to search for responce
    scanf("%d", &age);
    //Prints user input age
    printf("You are %d years old!\n", age);
    
    double gpa;
    printf("Enter your GPA:");
    //%lf looks for double
    scanf("%lf", &gpa);
    printf("You're GPA is %lf\n", gpa);


    char letter;
    printf("Enter your Grade: ");
    //%c looks for character
    scanf("%c", &letter);
    printf("Your grade is %c\n", letter);

    
    //String of Characters, set value to 20 to store 20 characters
    char name[20];
    printf("Enter your name: ");
    //%s to scan string, do not need &
    scanf("%s", name);
    printf("Your name is %s\n", name);
      */
    //String of Characters, set value to 20 to store 20 characters
    char name[20];
    printf("Enter your name: ");
    //Use fgets
    fgets(name, 20, stdin);
    //If puts text after %s in this line, it will make a new line and continue text.
    printf("Your name is %s", name);    
    return 0;
    
}