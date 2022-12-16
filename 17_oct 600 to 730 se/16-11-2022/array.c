#include <stdio.h>
int main()
{
    int arr[5]; // printf("%d", arr[0]);
    // printf("%d", arr[1]);
    // printf("%d", arr[2]);
    // printf("%d", arr[3]);
    // printf("%d", arr[5]);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}