/*
struct structure_name{
    int age;
    char name[20];
    int salary;
}
*/
#include <stdio.h>
#include <string.h>
struct employee
{
    int age;
    int salary;
    char name[20];
};
int main()
{
    struct employee e1,e2;
    printf("%d",sizeof(e1));
    // e1.age = 60;
    // e1.salary = 2000;
    // strcpy(e1.name, "Sharukh khan");
    // printf("Age is %d , salaray is %d", e1.age, e1.salary);
    // printf("Superstar is %s", e1.name);
    return 0;
}