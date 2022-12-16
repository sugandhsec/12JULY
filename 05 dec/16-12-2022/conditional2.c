#include <stdio.h>
int main()
{
    int age = 45;
    printf("Before if\n");
    if (age > 60)
    {
        printf("Senior citizen\n");
    }
    else
    {
        printf("You are young \n");
    }
    printf("After IF\n");
    return 0;
}
/*
conditional statements

simple if

if(condition)
{
    task performed if condition is true
}


if...else
if(condition)
{
    block execute when if condition is true
}
else
{
    block execute after if condition is false
}

if...else if...else if...else  ladder if else
nested if else

switch case
*/