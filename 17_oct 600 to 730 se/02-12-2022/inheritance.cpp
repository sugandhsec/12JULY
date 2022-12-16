#include <iostream>
using namespace std;
class A
{
public:
    int a, b;
    void getvalue()
    {
        cout << "Enter Two Value: ";
        cin >> a >> b;
    }
    void addition()
    {
        cout << "addition of a and B is " << a + b;
    }
};
class B : public A
{
public:
    int x, y;
    void getdata()
    {
        cout << "Enter Two Value: ";
        cin >> x >> y;
    }
    void subtraction()
    {
        cout << "subtraction of x and y is " << x - y;
    }
};
int main()
{
    A obj1;
    obj1.getvalue();
    obj1.addition();
    B obj2;
    return 0;
}
/*


*/