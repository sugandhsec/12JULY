#include <stdio.h>
int main()
{
    int a = 55;
    // printf("%p", &a);
    int *p = &a;
    int **q = &p;
    printf("%p", p);
    return 0;
}