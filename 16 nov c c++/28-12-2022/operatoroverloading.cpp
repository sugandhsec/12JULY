#include <iostream>
using namespace std;
class A
{
public:
    int x;
    A() {}
    A(int m)
    {
        x = m;
    }

    int operator+(A k)
    {
        int c = x + k.x;
        return c;
    }
};
int main()
{
    int answer;
    A obj1(20);
    A obj2(40);
    A obj3(90);
    answer = obj1 + obj2;
    cout << "Addition = " << answer;
    return 0;
}
/*
9+8 =17
int a=5;
int b=6;
a+b;

when we do operator overloading then we have to mention that in the class which variable perform which kind of task

we have to use opertors direct with object

inside class we have mentioned the task done by varibale



*/