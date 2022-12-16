#include <stdio.h>
int main()
{
    try{
    int a, b;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    float div = (float)a / (float)b;
    printf("answer=%f", div);
    }
    catch
    {
        printf("")
    }
    return 0;
}