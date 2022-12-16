#include <stdio.h>
int val = 98;//global variable
int addition(int x, int y) // paramaters
{
    int n = 90;//local variable
    int ans = x + y;
    return ans;
}

int main()
{
    int jawab;
    int m, n;
    jawab = addition(m, n); // arguments
    printf("%d", jawab);
    return 0;
}