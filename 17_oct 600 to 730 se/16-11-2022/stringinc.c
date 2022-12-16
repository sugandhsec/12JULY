#include <stdio.h>
int main()
{
    char name[25];
    printf("Enter your name");
    gets(name);
    // printf("name=%s", name);
    puts(name);
    return 0;
}