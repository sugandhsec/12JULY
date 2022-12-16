#include <stdio.h>
#include <string.h>
int main()
{

    char name[] = "Hello";
    int a;
    char surname[25] = " world";
    // char copyname[25] = ;
    printf("%s", strrev(name));
    // printf("name=%s copyname=%s", name, copyname);
    // int len = strlen(copyname);
    // printf("length=%d", sizeof(name));
    // strcpy(copyname, name); // strcpy(destination,source)copyname=name
    // strcat(surname, name);
    // printf("1=%s 2=%s", name, surname);
    // int ans=strcmp("Hezlo","Hezlo");
    // printf("Answer=%d",ans);
    return 0;
}