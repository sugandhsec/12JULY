#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter Row And Column ");
    scanf("%d %d", &row, &col);
    int array[row][col];
    int array2[row][col];
    int answer[row][col];
    printf("\nArray 1 input\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Value for position %d %d: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nArray 2 input\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Value for position %d %d: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }
    printf("\nArray 1 output\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("\nArray 2 output\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            answer[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                answer[i][j] = answer[i][j] + (array[i][k] * array2[k][j]);
            }
        }
    }
    printf("\nArray Answer output\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("%d\t", answer[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
1 2
1112
*/