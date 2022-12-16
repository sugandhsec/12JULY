#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is grater", a);
        }
        else
        {
            printf("%d is graeter", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is graeter", b);
        }
        else
        {
            printf("%d is graeter", c);
        }
    }
    return 0;
}