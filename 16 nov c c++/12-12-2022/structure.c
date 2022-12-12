#include <stdio.h>
union student
{
    char name[100];
    int age;
    int marks;
    float percentage;
};
int main()
{
    union student s1;
    printf("%d", sizeof(s1));
    return 0;
}