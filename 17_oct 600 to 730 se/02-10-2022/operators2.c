#include <stdio.h>
int main()
{
    char a, b,c;
    *c=&a;
    printf("%p %p", &a, &b);
    return 0;
}