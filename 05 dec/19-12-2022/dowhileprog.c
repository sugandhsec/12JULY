#include <stdio.h>
int main()
{
    int num;
    do
    {
        printf("Enter Number: ");
        scanf("%d", &num);
    } while (num != 0);
    return 0;
}