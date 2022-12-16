#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter yoy number for table");
    scanf("%d", &num);
    for (i = 1; i < 11; i++)
    {
        printf("%d*%d=%d\n", num, i, i * num);
    }
    return 0;
}
/*
2*1=2
2*2=4
2*3=6
2*4=8
2*5=10
*/