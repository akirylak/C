#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    //Get a before input
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //if string[i] is greater than or equal to lowercase a and is string[i] less than or equal to z
        if (s[i] >= 'a' && s[i] <='z')
        {
            //convert to uppercase using toupper from ctype.h
            printf("%c" , toupper(s[i]));
        }
        else
        {
            //print normal
            printf("%c", s[i]);
        }
    }
    printf("\n");
}