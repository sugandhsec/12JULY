#include <stdio.h>
int main()
{
    int array1[5][3], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &array1[i][j]);
            // sum += array1[i][j];
            if (i == j)
            {
                sum = sum + array1[i][j];
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    printf("\nSum is %d", sum);
    return 0;
}
