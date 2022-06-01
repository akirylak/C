#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //This will print out 8.900000
    printf("%f\n", 8.9);
    //This will print out 8.90
    printf("%.2f\n\n", 8.9);
    
    //We can do math, use %d for whole numbers and %f for decimals
    printf("Addition %d\n", 50 + 40);
    printf("Subtraction %.2f\n", 10.0 - 8.0);
    printf("Multiplication %d\n", 5 * 2);
    printf("Division %.2f\n\n", 100.0 / 10.0);
    
    //If I divide where I would suppose to get a decimal with using %d, it will round up
    printf("Decimal %f\n", 5.0 / 4.0);
    printf("Round up %d\n\n", 5 / 4);
    
    //we can use int to call a name to a number.  num equals to 6 no matter what in this code
    int num = 6;
    printf("%d\n\n", num);
    
    //had to add math.h to make functions work
    
    //Pow makes 2 cubed
    printf("%.2f\n", pow(2,3) );
    //sqrt is squareroot
    printf("%.2f\n", sqrt(36) );
    //ceil rounds up to next number
    printf("%.2f\n", ceil(36.356) );
    //floor will round down to next number
    printf("%.2f\n", floor(36.356) );
}