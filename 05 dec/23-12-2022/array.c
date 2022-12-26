/*
variable--havingf multiple values of same datattype

int a;  //decalaration
a=10; //definition initialization
int b=50; //decalaration with definition/initialization

int arrayname[max_length/size];
arrayname={value1,value2,value3....}

*/
#include <stdio.h>
int main()
{
    int array1[20], sum = 0, even = 0, odd = 0, evensum = 0, oddsum = 0;
    // int array2[10];
    // printf("%d", sizeof(array2));
    // int a=65;
    // printf("%d", array1[0]);
    // printf("%d", array1[1]);
    // printf("%d", array1[2]);
    // printf("%d", array1[3]);
    // printf("%d", array1[4]);
    // printf("%d", array1[5]);
    // printf("%d", array1[6]);
    // printf("%d", array1[7]);
    // printf("%d", array1[8]);
    for (int i = 0; i < 9; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &array1[i]);
        if (array1[i] % 2 == 0)
        {
            even++;
            evensum += array1[i];
        }
        else
        {
            odd++;
            oddsum += array1[i];
        }
    }

    // for (int i = 0; i < 9; i++)
    // {
    //     printf("%d ", array1[i]);
    // }
    printf("odd=%d even=%d", odd, even);

    return 0;
}