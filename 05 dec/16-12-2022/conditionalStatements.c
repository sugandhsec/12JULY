#include <stdio.h>
int main()
{
    int age = 81;
    printf("Before if\n");
    if (age > 60)
    {
        printf("Senior citizen\n");
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

if(condition1)
{
    if part is executed
}
else if(condition2)
{
    second block is escuted
}
else if(condition3)
{
    third block is executes
}
....
.
.
.
.
.
[else{
    if not a single condition true then else part runs
}]



nested if else

switch case
*/