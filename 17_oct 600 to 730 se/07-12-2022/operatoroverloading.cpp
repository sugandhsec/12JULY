#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    Rectangle(int len, int wid)
    { // parameterised constructor
        length = len;
        width = wid;
    }

    void area()
    {
        cout << length * width << endl;
    }

    // overloading ++ operator
    Rectangle operator++(int)
    {
        length++;
        width++;
    }

    //   classname operator ++

    // overloading -- operator
    Rectangle operator --(int)
    {
        length -= 3;
        width -= 3;
    }
    Rectangle operator ++()
    {
        length += 50;
        width += 50;
    }
};

int main()
{
    Rectangle obj1(50, 60);
    obj1.area(); // 50 60
    obj1--;
    obj1.area(); // 47 57
    obj1++;
    obj1.area(); // 97 107
    obj1--;
    obj1.area(); // 94 104
    return 0;
}

// 8+9=17
// class A
// class B

// A obj1
// B obj2
// B obj3
// obj3=obj1+obj2
/*
claastype operator++(parameter)
{
    task;
    body;
}

*/