#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int age;
};
int main()
{
    int n;
    printf("Enter number oF student you want : ");
    scanf("%d", &n);
    struct student s1;
    // printf("Size=%d",sizeof(s1));
    // struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Rollno");
        scanf("%d", &s[i].rollno);
        printf("Enter name");
        scanf("%s", s[i].name);
        printf("Enter age");
        scanf("%d", &s[i].age);
    }
    for (int i = 0; i < n; i++)
    {
        printf("roll no=%d name=%s age=%d\n", s[i].rollno, s[i].name, s[i].age);
    }
    return 0;
}