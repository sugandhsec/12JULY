#include <stdio.h>
void addition(int x, int y)
{
    int ans;
    ans = x + y;
    printf("answer=%d", ans);
}
int main()
{

    addition(85, 98);
    addition(98, 128);

    return 0;
}
// void addition(int x, int y)
// {
//     int ans;
//     ans = x + y;
//     printf("answer=%d", ans);
// }