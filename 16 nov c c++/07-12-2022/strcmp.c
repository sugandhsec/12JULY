#include <stdio.h>
#include <string.h>
int main()
{
    char n1[20] = "hello";
    char n2[20] = "hello";
    printf("%d", strcmp(n1, n2));
    return 0;
}
/*
strcmp(string1,string2)

0---same string both
-1--when first value is samller than second value
1---when first valuye is greater than second value
*/