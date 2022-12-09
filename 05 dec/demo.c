#include <stdio.h>
int main()
{
    printf("Good\tmorning hello\n");
    // int age = 50;
    // printf("my age is %d", age);
    int age;
    printf("Enter Your age: ");
    scanf("%d", &age);
    printf("your age is %d", age); //&--address operator
    return 0;
}


/*
n---\n ---newline
\t---tab space
datatype variablename = value;
datatype
int---integers--%d
float--decimal values--%f
char--characters--%c

variablename----identifier rule  op4558ion
rule 1---first character a-z A-Z _(underscore)
rule 2---other characters-- a-z A-Z _
(underscore) 0-9
keywords cannot be used as a name
name your variable a logical word
*/