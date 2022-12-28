//function with parameters and with return value

#include <stdio.h>
int addition(int a, int b)
{
    int answer = a + b;
    return answer;
}

int main()
{
    int sum;
    sum = addition(30, 45);
    printf("Answer=%d", sum);
    return 0;
}