#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>


int main (void)
{
    int index = 6;

    //Do while, executes the Do Code before checking while code
    do
    {
        printf("%d\n", index);
        //shortcut is also index++;
        index = index + 1;
    }while (index <= 5);
    return 0;
}





/* temp hold for do while loop to run
int main (void)
{
//while structure to loop over and execute code until it is proven false
    int index = 1;

    //() specifiy condition
    while (index <= 5)
    {
        printf("%d\n", index);
        //shortcut is also index++;
        index = index + 1;
    }
    return 0;
}*/
/* countdown
int main (void)
{
//while structure to loop over and execute code until it is proven false
    int index = 100

    //() specifiy condition
    while (index >= 50)
    {
        printf("%d\n", index);
        //shortcut is also index--;
        index = index - 1;
    }
    return 0;
}
*/