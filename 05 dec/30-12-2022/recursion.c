// when a function called itself again and again then it is called recursion
#include <stdio.h>
int factorial(int m)
{
    if (m > 1)
    {
        return m * factorial(m - 1);
    }
}
int main()
{
    int answer;
    answer = factorial(6);
    printf("Answer=%d", answer);
    return 0;
}
/*
factorial of 5=5*4*3*2*1

*/