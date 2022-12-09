#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 60)
    {
        printf("you are senior cityizen");
    }
    else
    {
        if (age > 18)
        {
            printf("Adult");
        }
        else
        {
            printf("young");
        }
    }
    return 0;
}