#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    printf("Hello World!\n");
    //Use \" to add quotations inside quotations to use as characters
    printf("\"Hello World!\"\n");
    
    //You can do this
    printf("500\n");
    //or you can do that
    printf("%d\n", 500);
    
    //You can make %s and %d together, just keep in same order.
    printf("My favorite %s is %d\n", "number", 500);
    //Change %d to %f for decimal and added .3 to make 3 places
    printf("My favorite %s is %.3f\n", "number", 500.500);
    //anotherway to do this is in variables, integer called favNum is equal to 90.  We use %d to use as placeholder for integer
    int favNum = 90;
    printf("My favorite number is %d\n\n", favNum);
    
    //Integer excerise with placeholders
    int favNum2 = 77;
    //can only use one character in ''
    char myChar = 'A';
    printf("My favorite letter is %c and my favorite number is %d\n", myChar, favNum2);
}