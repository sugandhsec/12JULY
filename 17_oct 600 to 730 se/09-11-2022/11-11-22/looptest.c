#include <stdio.h>
int main()
{
    int d;
    printf("Enter Number\4day of week you want: ");
    scanf("%d", &d);
    d>2?printf("2se bada hai"):|||||||||||;
    if (d == 1)
    {
        printf("\nMonday");
    }
    else if (d == 2)
    {
        printf("\ntuesday");
    }
    else if (d == 3)
    {
        printf("\nwednesday");
    }
    else if (d == 4)
    {
        printf("\nthursday");
    }
    else if (d == 5)
    {
        printf("\nfriday");
    }
    else if (d == 6)
    {
        printf("\nsaturday");
    }
    else if (d == 7)
    {
        printf("\nsunday");
    }
    else
    {
        printf("Not a day is out of 7 days of week");
    }
    return 0;
}
/*
do
{

}while(condition);
break;
continue;
goto;

switch(d)
{
    case 1:
    {
        printf("Monday");
    }
    case 2:
    {
        printf("Monday");
    }
}
*/