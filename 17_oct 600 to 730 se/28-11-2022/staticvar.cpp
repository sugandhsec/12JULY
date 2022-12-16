#include <iostream>
using namespace std;
class A
{
public:
    static int a;
    int b;
    void addition()
    {
        cout << "Addition = " << a + b << endl;
    }
    void subtraction()
    {
        cout << "Subtraction = " << a - b;
    }
};

int A::a = 20;
int main()
{
    A obj1;
    A obj2;
    obj1.b = 25;
    obj1.addition();
    // obj2.a = 35;
    obj2.b = 47;
    obj2.subtraction();
    return 0;
}