#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A()
    {
        a = 25;
        b = 35;
    }
    void addition()
    {
        cout << "Main toh use nhi hua";
    }
    friend class B;
};
class B
{
public:
    void showdataofaclass(A &obj1)
    {
        cout << obj1.a << obj1.b;
        obj1.addition();
    }
};
int main()
{
    A aob;
    B bob;
    bob.showdataofaclass(aob);
    return 0;
}