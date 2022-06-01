#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Ask the user for an input with get_string and call the string a variable named  s
    string s = get_string("Input: ");
    printf("Output: ");
    
    /* This allows to make a literal translation of if \0 is equal to \0, stop the code
    \0 is always at end of string
    //print indivudal characters of the string
    for (int i = 0; s[i] != '\0'; i++)  //for loop
    {
        printf("%c", s[i]); //print character of string s &  i from loop
    }
    printf("\n"); //new line
    */
    /*
    //print use legnth
    for (int i = 0; i < strlen(s); i++)  //for loop
    {
        printf("%c", s[i]); //print character of string s &  i from loop
    }
    printf("\n"); //new line

*/
/*
    //let's make it better
    int n = strlen(s);
    for (int i = 0; i < n; i++)  //for loop
    {
        printf("%c", s[i]); //print character of string s &  i from loop
    }
    printf("\n"); //new line
    */
    
    //Another Way
    for (int i = 0; n = strlen(s); i < n; i++)  //for loop
    {
        printf("%c", s[i]); //print character of string s &  i from loop
    }
    printf("\n"); //new line
}    