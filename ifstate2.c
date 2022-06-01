#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

//if statements allows program to make decisions and allow program to respond
//build a function = max function, which number is bigger

//Lets try 3 parameters
int max(int num1, int num2, int num3)
{
 //if conditions are true or false statements
 int result;

//&& logical operator 'and', allows to put a second operator
 if (num1 >= num2 && num1 >= num3)
 {
  result = num1;
 }
 else if (num2 >= num1 && num2 >= num3)
 {
  result = num2;
 }
 else
 {
  result = num3;
 }

return result;
}


int main(void)
{
//numbers in the program
//Or statement
 // ex: if (3 < 2 || 2 > 5)
 // ! negation operator
 if (!(3 > 2))
 {
  printf("True\n");
 }
 else
 {
  printf("False\n");
 }
 
 return 0;
}