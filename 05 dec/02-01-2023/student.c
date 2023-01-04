#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int age;
    int rollno;
    float percentage;
};
int main()
{
    int n;
    printf("Enter Student count: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        char tname[20];
        printf("Enter Name");
        // gets(tname);
        // strcpy(s[i].name,tname);
        // gets(s[i].name);
        printf("Enter Age");
        scanf("%d", &s[i].age);
        printf("Enter Rollno");
        scanf("%d", &s[i].rollno);
        printf("Enter Percentage ");
        scanf("%f", &s[i].percentage);

        printf("Student details\nname=%s \nage=%d\nroll no=%d\npercentage=%f\n", s[i].name, s[i].age, s[i].rollno, s[i].percentage);
    }
    return 0;
}