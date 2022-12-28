//function without return and with parameters
#include <stdio.h>
void addition(int a, int b)//parameters
{
    int answer = a + b;
    printf("Answer=%d ", answer);
}
int main()
{
    int k = 65, n = 98;
    addition(k, n);
    addition(50, 70);//arguments

    return 0;
}