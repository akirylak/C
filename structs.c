#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

//Struct is a data struction where we can store different data types
struct Student
{
    //define attributes of a student
    char name[50]; // this string can hold 50 characters
    char major[50]; //this string can hold 50 characters
    int age;
    double gpa;
};


int main(void)
{
    //created a container called student one that can store name, major, age and gpa / different data types
    struct Student student1;
        student1.age = 30;
         student1.gpa = 3.7;
        //strings = array of characters, cannot give a particular value
        //string copy function
        strcpy( student1.name, "Jim");
        strcpy( student1.major, "Business");

    struct Student student2;
        student2.age = 20;
        student2.gpa = 2.7;
        //strings = array of characters, cannot give a particular value
        //string copy function
        strcpy( student2.name, "Karen");
        strcpy( student2.major, "Literature");

    printf("%s\n", student2.name);

    return 0;
}
