#include <stdio.h>
int main()
{
    int day;
    printf("Enter number of day: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
    {
        printf("Monday");
        break;
    }
    case 2:
    {
        printf("tue");
        break;
    }
    case 3:
    {
        printf("wed");
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
        printf("satur");
        break;
    }
    case 7:
    {
        printf("sund");
        break;
    }
    default:
    {
        printf("Enter value between 1 to 7");
        break;
    }
    }
    // fergter
    // getcrger
    return 0;
}
/*
switch(day)
{
    case :
    {

    }
    case 2:
    {

    }
}
*/