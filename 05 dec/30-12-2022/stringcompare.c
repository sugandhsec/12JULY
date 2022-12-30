#include <stdio.h>
#include <string.h>
int main()
{
    char name[20] = "zello";
    char other[20] = "zello";
    int ans = strcmp(name, other);
    printf("%d", ans);
    return 0;
}
/*
string compare gives three types of ouput
0 ---when bot string is equal
1 ---when first string having larger ascii valuee
-1 --when first string having smaaler ascii value



*/