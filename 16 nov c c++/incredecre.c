#include <stdio.h>
int main()
{

    // double a = 65;
    float b = 65;
    float *p = &b;
    float **z = &p;
    printf("%p", z);
    // printf("%d", sizeof(a));
    // assignemnets operator
    //  b=b+9;//long hand notation
    // b/=9;
    // printf("%d\n", a++);
    // printf("a=%d", a);
    // printf("%d", a <= b);
    return 0;
}

/*
post variable++ --
pre -- ++variable
*/