#include <stdio.h>
int main()
{
    int day = 7;
    // printf("Enter Day :");
    // scanf("%d", &day);
    switch (day)
    {
    case 1:
    {
        printf("Monday");
        break;
    }
    case 2:
    {
        printf("Tuesday");
        break;
    }
    case 3:
    {
        printf("Wedensday");
        break;
    }
    case 4:
    {
        printf("thurs");
        break;
    }
    case 5:
    {
        printf("fri");
        break;
    }
    case 6:
    {
        printf("sat");
        break;
    }
    case 7:
    {
        printf("sunday");
        break;
    }
    default:
    {
        printf("Enter Number between 1 to 7");
        break;
    }
    }
    return 0;
}
/*
switch(expression)
{
    case 1:

    case 2:

    case 3:
    .
    .
    .
    .
    default:


}

*/