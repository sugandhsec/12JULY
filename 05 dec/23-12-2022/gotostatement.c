#include <stdio.h>
int main()
{
    printf("1\n");
l1:
    printf("2\n");
    printf("3\n");
    printf("4\n");
    goto l1;
    printf("5\n");
    printf("6\n");
l2:
    printf("7\n");
    printf("8\n");
    return 0;
}