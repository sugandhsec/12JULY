#include <stdio.h>
int x,y,z;//global variable
void addition()
{
    int m, n, answer;//local variable
    printf("Enter Number: ");
    scanf("%d %d", &m, &n);
    answer = m + n;
    printf("\nanswer=%d ", answer);
}

int main()
{
    int k;//local
    printf("K=%d", k);
    addition();
    // printf("M=%d N=%d answer=%d", m, n, answer);
    return 0;
}