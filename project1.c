#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main (void)
{
    //Change name of character
    char characterName[] = "Scott";
    //Change the age of character
    int characterAge = 39;
    
    
    printf("Hello my name is %s.\n", characterName);
    printf("I am %d years old.\n", characterAge);
    printf("%s is currently learning C.\n", characterName);
    printf("It is very hard.\n");
    
    //You can change the variable in code later.
    characterAge = 100;
    printf("By the time %s is %d, I would become president.\n", characterName, characterAge);

    return 0;
}
