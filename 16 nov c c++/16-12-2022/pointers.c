#include <stdio.h>
int main()
{
    int a = 45;
    int *y = &a;
    // printf("%p", y);
    *y = 8;
    printf("%d", a);
    return 0;
}