#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    //Scanf to create Madlib
    
    //create variables to store color, plural-noun and celebrity inputs
    char color[20];
    char pluralnoun[20];
    char celebrityF[20];
    char celebrityL[20];
    
    //Prompt user for information
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a Plural Noun: ");
    scanf("%s", pluralnoun);
    printf("Enter a Celebrity: ");
    //To get around first and last name, however cannot only enter 2 names, not one
    scanf("%s%s", celebrityF, celebrityL);
    
    //Story with output
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralnoun);
    printf("I Love %s %s\n", celebrityF, celebrityL);
    
    
    return 0;
}