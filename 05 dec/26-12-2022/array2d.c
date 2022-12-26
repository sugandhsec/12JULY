#include <stdio.h>
int main()
{
    int array1[5][3] = {{5, 6, 7}, {4, 2, 6}, {7, 8, 3}, {1, 5, 4}, {2, 6, 9}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
