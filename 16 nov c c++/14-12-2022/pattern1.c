#include <stdio.h>
int main()
{
    char a = 65;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}