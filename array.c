#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main (void)
{
    /*arrays - container where we store information
    Data structure to store a bunch of data values
    */
    
    /* Remove comment brackets to access this code
    //What type of data, use [] brackets to tell C to store multiple information, use {} to store info
    //Comma separates elements in array
    int luckyNumbers[] = {3, 7, 9, 11};
    //to access elements, start at 0-how many elements, starts at 0, 1, ,2 ,3
    printf("%d\n", luckyNumbers[2]);
    */
    
    /*
    //can do this with char, double, float
    int luckyNumbers[] = {3, 7, 9, 11};
    //use this variable to change one of the elements without changing the code
    luckyNumbers[1] = 800;
    printf("%d\n", luckyNumbers[1]);
    */
    
    /*
    //When you do not know what to do, tell the array how many elements do you want to hold
    int luckyNumbers[10];
    //use this variable to change one of the elements without changing the code
    luckyNumbers[1] = 800;
    luckyNumbers[0] = 90;
    printf("%d\n", luckyNumbers[0]);
    */
    
    char phrase [] = "Amber's coding workshop";
    
    printf("%s\n", phrase);
    
    return 0;
    
}