#include <stdio.h>
int main()
{
    int i;
    // for (i = 101; i < 110; i += 3)
    // {
    //     printf("%d ", i);
    // }
    i = 101;
    while (i < 110)
    {
        printf("%d", i);
        i += 3;
    }
    return 0;
}

/*
loops in c
for loop

for(initailization;condition;increment/decrement)
{
    body
}

while loop
initialization
while(condition)
{
    body
    increment/decrement
}


do while loop

*/