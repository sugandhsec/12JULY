#include <stdio.h>
int main()
{
    int a = 9845, m, r = 0;
    while (a != 0)
    {
        m = a % 10;
        a = a / 10;
        r = r * 10 + m;
    }
    printf("Reverse=%d", r);
    return 0;
}
/*


a=9845

m=a%10
a=a/10;

*/