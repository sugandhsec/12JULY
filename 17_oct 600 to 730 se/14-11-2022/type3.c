#include <stdio.h>
int addition()
{
    int x = 55, y = 66, ans;
    ans = x + y;
    return ans;
}

int main()
{
    int z;
    z = addition();
    printf("Addition=%d", z);
    return 0;
}