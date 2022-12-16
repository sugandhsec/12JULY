#include <stdio.h>
int main()
{
    // int a = 65;
    // a=a%5; //long hand notation
    // a+=5; //shorthand notation
    // ++a; pre increment
    // a++; post increment
    // printf("%d",65<<4);
    // printf("%d", a);
    // double a = 45;
    // printf("%d", sizeof(a));
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    age > 18 ? printf("Voting karo") : printf("Not able to vote");
    return 0;
}
/*3.




arithmetic operator
+ - * / % ++ --

relational or conditional operator
< > <= >= == !=  5==5 5==6

logical operator
and(&&)  or(||) not(!)

assignement operator
= += -= *= /= %=

bitwise operator
>> << & |   65&42

miscelleanous operator
sizeof() ternary(?:)

*/