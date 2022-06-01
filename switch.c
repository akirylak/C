#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
 //switch statement, if statement to compare one value to compare to different values
 //compare 1 specific value to a bunch of values

char grade = 'F';

switch(grade)
{
    //cases
    case 'A' :
    //in the case that grade is equal to A
    printf("You did great!\n");
    //break, tells our switch statement we want to leave
    break;
    
    case 'B' :
    //in the case that grade is equal to B
    printf("You did alright!\n");
    break;
    
    case 'C' :
    //in the case that grade is equal to C
    printf("You did poor!\n");
    break;

    case 'D' :
    //in the case that grade is equal to D
    printf("You did very poor!\n");
    break;
    
    case 'F' :
    //in the case that grade is equal to F
    printf("You Failed!\n");
    break;

//default is the else statement for case
    default: 
    printf("Invalid Grade");
    
    
}    
    return 0;
    
}