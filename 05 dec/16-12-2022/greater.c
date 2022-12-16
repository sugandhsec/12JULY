#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d Is greater", a);
    }
    else
    {
        printf("%d is greater", b);
    }
    return 0;
}