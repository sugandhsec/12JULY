#include <stdio.h>
int main()
{
    int k = 1;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}