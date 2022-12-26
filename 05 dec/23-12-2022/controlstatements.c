/*
control statements

break;  //loop switchcase
continue;

goto
*/
#include <stdio.h>
int main()
{
    for (int i = 0; i < 25; i++)
    {
        if (i == 9)
        {
            continue;
        }
        printf("%d ", i);
        // printf("hello \n");
    }

    return 0;
}