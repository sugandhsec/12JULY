#include <stdio.h>
int main()
{
    int array2[3][4] = {{1, 2, 3, 4}, {4, 5, 6, 8}, {7, 8, 9, 45}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    return 0;
}