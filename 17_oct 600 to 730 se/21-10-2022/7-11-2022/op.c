#include <stdio.h>
int main()
{
    int n1, n2;
    float div;
    printf("Enter value: ");
    scanf("%d %d", &n1, &n2);
    div = (float)n1 / (float)n2;
    printf("answer is %f", div);
    return 0;
}