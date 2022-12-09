#include <stdio.h> //header file

int main()
{

    // SYNTAX:
    // DATATYPE VARIABLE_NAME = VALUE;
    // float num = 25.5;
    // printf("Good morning\n"); // i am priting this for demo purpose
    // printf("your number is %.2f", num);
    const int num5;
    printf("Enter any number: ");
    scanf("%d", &num5);
    printf("Number =%d", num5);
    return 0;
}

//

/*

constant
3---format specifier
INTEGER ----int----%d
DECIMAL ----float---%f
CHAR ----char--%c

variable naming rules  name
A_Z a-z _
A-Z a-z _ 0-9

logical
keywords
two types of comments
1)single line----//
2)multiline---/*  */

/*
    escape sequences
 \n-- - newline character
 \t----tab
 \b---backspace


    */