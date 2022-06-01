#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>


//parameter value we give to a function
//This means sayHi function takes an input a string of characters called name
//Can create an integer
void sayHi (char name[], int age)
//in order to use the code, we have to call it (look above)
{
    printf("Hello %s, You are %d.\n", name, age);
    
}

int main (void)
{
    //functions { } is a sign of a function:  int main is a function
    sayHi ("Mike", 56);
    sayHi ("Tom", 24);
    sayHi ("Oscar", 16);
    return 0;
}




/*
//parameter value we give to a function
//This means sayHi function takes an input a string of characters called name
void sayHi (char name[])
//in order to use the code, we have to call it (look above)
{
    printf("Hello %s\n", name);
    
}

int main (void)
{
    //functions { } is a sign of a function:  int main is a function
    sayHi ("Mike");
    sayHi ("Tom");
    sayHi ("Oscar");
    return 0;
}
*/
//new function
//return type, type of data that the fuction returns to the user
//void does not return information



/*

had to move this code to top to make it work

void sayHi ()
//in order to use the code, we have to call it (look above)
{
    printf("Hello user!\n");
    
}
*/