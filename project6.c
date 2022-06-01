#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main (void)
{
    int num = 5;
    printf("%d\n", num);
    //I was able to modify num from here down
    num = 8;
    printf("%d\n", num);
    
    //If I want the num to be constant
    const int number = 5;
    printf("%d\n", number);
    /*number = "5"
    printf("%d\n", number);*/
    printf("\n\n\n");
    
    //Constants usually have uppercase names, but not required

    
}