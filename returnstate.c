#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

    //Return Statement
    //create a function to cube a number
    //if I want to return the value, put it above the int main, then call it in the int main
    //void does not return anything
/* method 1
double cube (double num)
{
    //create variable
    double result = num * num * num;
    //return breaks out of the function
    return result;
}
*/
//method 2
double cube (double num)
{
    return num * num * num;
    //This code below will not work, try it
    printf("Here");
}




int main (void)
{
    //call result function
    printf("Answer: %f", cube(7.0));
    return 0;
}