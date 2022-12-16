#include <stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value of position %d %d :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value of position %d %d :", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = 0;

            for (int k = 0; k < 3; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}