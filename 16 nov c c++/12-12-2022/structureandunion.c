// structure and union
/*
structure structure_name{
    char name[100];
    int age;
    int marks;
    float percentage;
}
*/
#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    int marks;
    float percentage;
};

int main()
{
    int n;
    printf("Enter Number of student: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Details For student %d: \n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
        printf("Enter Percentage: ");
        scanf("%f", &s[i].percentage);
    }
    printf("*****************************************************\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t**%d\t**%d\t**%f\t\n**", s[i].name, s[i].age, s[i].marks, s[i].percentage);
    }
    printf("*****************************************************\n");
    return 0;
}
