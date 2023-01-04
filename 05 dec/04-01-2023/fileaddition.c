#include <stdio.h>
int main()
{
    int choice, a, b, answer;
    FILE *fp;
    fp = fopen("calculation.txt", "a");
start:
    printf("Menu:\n1-addition\n2-exit");
    printf("\nenter your choice");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter two Values: ");
        scanf("%d %d", &a, &b);
        answer = a + b;
        printf("Answer=%d\n", answer);
        fprintf(fp, "%d + %d = %d\n", a, b, answer);
        goto start;
    }
    else if (choice == 2)
    {
        printf("\nThanks for coming:");
    }
    else
    {
        printf("\nInvalid choice");
    }
    fclose(fp);
    return 0;
}