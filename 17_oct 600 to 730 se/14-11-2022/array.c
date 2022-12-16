#include <stdio.h>
int main()
{
    int vals[10];
    int even = 0;
    int odd = 0;
    // printf("%d", vals[0]);
    // printf("%d", vals[1]);
    // printf("%d", vals[2]);
    // printf("%d", vals[3]);
    // printf("%d", vals[4]);
    // printf("%d", vals[5]);
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value: ");
        scanf("%d", &vals[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (vals[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("odd=%d , even =%d", odd, even);

    return 0;
}
/*
int=98
float=27.6
char='b'
array

datatype arrayname[size is optional]={valu1,valu2,value3.....};
indexing starts from 0;

*/