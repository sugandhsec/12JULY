#include <stdio.h>
int main()
{
    int n = 0, j, i;
    for (int i = 5; i > 0; i--)
    {
        for (j = 0; j < n; j++)
        {
            printf("  ");
        }
        n++;
        for (int k = 5; k > j; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}