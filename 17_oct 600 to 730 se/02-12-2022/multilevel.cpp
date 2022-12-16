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
class B:public A
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
class C :public B
{
public:
    int m, n;
    void getnumber()
    {
        cout << "Enter Two Value: ";
        cin >> m >> n;
    }
    void multiplication()
    {
        cout << "multiplication of m and n is : " << m * n;
    }
};
int main()
{
   B obj1;
   C obj2;
   obj2.
    return 0;
}
/*


*/