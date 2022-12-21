#include <stdio.h>
void search(int age)
{
    select *from student where student_age = age;
}

int main()
{
    search(25);
    return 0;
}