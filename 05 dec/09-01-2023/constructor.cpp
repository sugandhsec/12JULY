#include <iostream>
using namespace std;
class demo
{
public:
    int a;
    demo() // default consrtuctor
    {
        cout << "Constructor called";
        a = 10;
    }
    void addition(int m, int n)
    {
        int answer = m + n;
        cout << "Addition= " << answer;
    }
    void subtraction(int l, int t)
    {
        int answer = l - t;
        cout << "Subtraction= " << answer;
    }
};

int main()
{
    demo d1, d2, d3;
    d1.addition(10, 20);
    d2.addition(40, 80);
    return 0;
}
/*
constructor is a special method
beacuse it is called automatically when object is defined
one object can call only one consrtuctor as we say it will not call selfly but automaticaaly it will be done

we cannot give constructor name of our choice it is same name as class name

it doesn't return anything so it doesnot have returntype

When we have multiple constructor but one object can call only one constructor

types of constructor we will study
1)default consrtuctor
2)Parameterised Constructor
3)copy Constructor

the main purpose of constructor is value initialization

it is the first ever method which is called by any object.


Syntax:

classname or constructorname([parameters])
{
    body of the constructor
}


*/