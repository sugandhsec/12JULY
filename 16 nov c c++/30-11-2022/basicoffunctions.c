#include <stdio.h>
/*Function without parameters and without return value*/
// void addition(); // declaration
int m = 99; // global variable
void addition()
{
    printf("%d", m);
    int a, b; // local variables
    printf("Enter Two Values: ");
    scanf("%d %d", &a, &b);
    int answer = a + b;
    printf("Answer = %d ", answer);
}
/*Definition*/
int main()
{
    printf("%d", m);
    int x = 50; // local
    addition();
    addition();
    return 0;
}
