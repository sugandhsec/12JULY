#include <stdio.h>
int main()
{
    int day = 7;
    // printf("Enter Day :");
    // scanf("%d", &day);
    if (day == 1)
    {
        printf("monday");
    }
    else if (day == 2)
    {
        printf("Tuesday");
    }
    else if (day == 3)
    {
        printf("wednesday");
    }
    else if (day == 4)
    {
        printf("thursday");
    }
    else if (day == 5)
    {
        printf("Friday");
    }
    else if (day == 6)
    {
        printf("Saturday");
    }
    else if (day == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Enter nUmber between 1 to 7");
    }
    printf("After Ladder if");
    return 0;
}