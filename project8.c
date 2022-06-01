#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    /*
    //Basic Calculator: cannot use decimals
    
    //Variable 1
    int num1;
    //Variable 2
    int num2;
    printf("Enter first number: ");
    //Have to use & when using %f %i or %d
    scanf("%d", &num1);
    printf("Enter second number ");
    scanf("%d", &num2);
    
    //add them together
    printf("Answer: %d\n", num1 + num2);
    */
    
    //Calculator: can use decimals
    
    //Variable 1
    double num1;
    //Variable 2
    double num2;
    printf("Enter first number: ");
    //Have to use & when using %f %i or %d
    scanf("%lf", &num1);
    printf("Enter second number ");
    scanf("%lf", &num2);
    
    //add them together
    printf("Answer: %.2f\n", num1 + num2);
    
    return 0;
    
}