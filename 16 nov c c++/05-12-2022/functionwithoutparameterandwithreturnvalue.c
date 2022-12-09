#include <stdio.h>
int x, y, z;   // global variable
int addition() // parameters
{
    int m, n, answer; // local variable
    printf("Enter Number: ");
    scanf("%d %d", &m, &n);
    // int answer;
    // answer = a + b;
    answer = m + n;
    return answer;
}

int main()
{
    // int k;//local
    // printf("K=%d", k);
    int sum;
    sum = addition(); // arguments
    printf("\nanswer=%d ", sum);
    // addition();
    // printf("M=%d N=%d answer=%d", m, n, answer);
    return 0;
}