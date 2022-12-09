#include <stdio.h>
// #include <conio.h>
#include <string.h>
int main()
{
    // char name[20] = {'a', 'r', 'i', 's', 't'};
    // char name1[] = "Hello World";
    // printf("%s\n", name);
    // printf("%s", name1);
    // int a=55;
    // int b=a;
    // char name[20]="Hello";
    // char Some[20]=name;
    char name[20];
    char name1[] = "Hello World";
    printf("Enter Name: ");
    // scanf("%s", name);
    gets(name);
    // printf("Your name is %s", name);
    printf("Size of name1 %d   Size of name2 %d", sizeof(name), sizeof(name1));
    // puts(name);
    return 0;
}
/*
%s
string functions
strcat()
strcpy()
strrev()
strcmp()
strlen()
*/