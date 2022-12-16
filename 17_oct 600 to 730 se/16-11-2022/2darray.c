#include <stdio.h>
int main()
{
    int array1[2][3] = {
        {25, 32, 54},
        {1, 2, 3}};
    // printf("%d ", array1[0][0]);
    // printf("%d ", array1[0][1]);
    // printf("%d \n", array1[0][2]);
    // printf("%d ", array1[1][0]);
    // printf("%d ", array1[1][1]);
    // printf("%d ", array1[1][2]);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    return 0;
}