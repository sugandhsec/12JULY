#include <stdio.h>
int main()
{
    int n;
    printf("Enter number");
    scanf("%d", &n);
    int sum =( n*(n+1))/2;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    printf("sum=%d", sum);

    return 0;
}