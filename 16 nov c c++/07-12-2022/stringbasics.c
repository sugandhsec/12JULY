#include <stdio.h>
int main()
{
    // char name='a';
    // char name[20]={'a','n','s','h'};
    // char name[]="ansh";//%s
    char fullname[20];
    printf("Enter Your Full name: ");
    // scanf("%s", fullname);
    gets(fullname);
    // printf("your name is %s", fullname);
    puts(fullname);
    return 0;
}