#include <stdio.h>
int fact(int n1)
{
    if (n1 > 2)
        return (n1 * fact(n1 - 1));
}
int main()
{
    int answer = fact(5);
    printf("Answer=%d", answer);
    return 0;
}
*
* *
* * *
* * * *