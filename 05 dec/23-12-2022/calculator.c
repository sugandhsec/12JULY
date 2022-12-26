#include <stdio.h>
int main()
{
    int a, b;
    char choice;
    printf("Enter number1: ");
    scanf("%d", &a);
    printf("Enter Choice ");
    scanf("%c", &choice);
    printf("Enter number2: ");
    scanf("%d", &b);
    switch (choice)
    {
    case '+':
    {
        int answer = a + b;
        printf("answer= %d", answer);
        break;
    }
    }
    return 0;
}