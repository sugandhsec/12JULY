#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 17 && age > 18)
    {
        printf("you are children");
    }
    else if (age > 18 && age < 35)
    {
        printf("you are adult");
    }
    else if (age > 35 && age < 59)
    {
        printf("you are young");
    }
    else
    {
        printf("you are not eligible");
    }
    return 0;
}