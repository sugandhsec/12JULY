#include <stdio.h>
int main()
{
    int array1[3][3], array2[3][3], answer[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Value in %d %d : ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    printf("\n----------------------------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Value in %d %d : ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }
    printf("\n----------------------------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            answer[i][j] = array1[i][j] + array2[i][j];
            printf("%d ", answer[i][j]);
        }
        printf("\n");
    }
    return 0;
}