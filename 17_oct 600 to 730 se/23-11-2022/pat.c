#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i < 5; i++)
    {
        int n = 5;
        for (int l = 1; l < n - i; l++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    getch();
    return 0;
}