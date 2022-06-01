#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

//if statements allows program to make decisions and allow program to respond
//build a function = max function, which number is bigger

//2 parameters
int max(int num1, int num2)
{
 //if conditions are true or false statements
 int result;
 if(num1 > num2)
 {
  result = num1;
 }
 else
 {
  result = num2;
 }
return result;
}


int main(void)
{
 //numbers in the program
 printf("%d\n", max(40, 10));


 return 0;
}