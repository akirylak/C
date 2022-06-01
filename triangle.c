#include <cs50.h>
#include <stdio.h>

int triange_sides(int x, int y, int z);

int main (void)
{
    int x = get_int("Give me side a of triangle: ");
    int y = get_int("Give me side b of triangle: ");
    int z = get_int("Give me side c of triangle: ");
    
    if (x <= 0 || y <= 0 || z <= 0)
    {
        printf("False\n");
    }
    
    else
    {
        printf("True\n");
    }
}