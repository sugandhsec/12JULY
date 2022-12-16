#include <stdio.h>
int main()
{
    int i;

    while (i != 55)
    {
        printf("Enter Your number: ");
        scanf("%d", &i);
    }
    printf("Out game over:");
    getch();
    return 0;
}