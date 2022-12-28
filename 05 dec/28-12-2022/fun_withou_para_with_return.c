//function without parameters and with return value
#include <stdio.h>
int addition()
{
    int a, b, answer;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    answer = a + b;
    return answer;
}
int main()
{
    int sum;
    sum = addition();
    printf("Addition=%d", sum);
    return 0;
}