//function without parameter and without return value

#include <stdio.h>
void addition()
{
    int a, b, answer;
    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);
    answer = a + b;
    printf("Addition= %d", answer);
}

int main()
{
    addition();
    addition();

    return 0;
}