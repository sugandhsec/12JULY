#include <stdio.h>
int main()
{
    int a = 4, b = 1, t = 1, g = 5;
    for (int i = 0; i < 9; i++)
    {
        if (i < 5)
        {
            for (int j = a; j > 0; j--)
            {
                printf(" ");
            }
            a--;
            printf("*");
            if (i != 0)
            {
                for (int k = 0; k < b; k++)
                {
                    printf(" ");
                }
                b += 2;
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int l = 0; l < t; l++)
            {
                printf(" ");
            }
            t++;
            printf("*");
            if (i != 8)
            {
                for (int y = g; y > 0; y--)
                {
                    printf(" ");
                }
                g -= 2;
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}