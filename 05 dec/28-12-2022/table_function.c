#include <stdio.h>
void table(int n)
{
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d =%d \n", n, i, n * i);
    }
}
int main()
{
    table(156);
    table(298);
    return 0;
}