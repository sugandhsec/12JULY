#include <iostream>
using namespace std;
class parent
{
public:
    int a, b, answer;
    void getdata()
    {
        cout << "Enter two Values";
        cin >> a >> b;
    }
    void addition()
    {
        answer = a + b;
    }
    void showdata()
    {
        cout << "Addition of " << a << " and " << b << " is  " << answer;
    }
};
class child : public parent
{
public:
    int x, y, subtract;
    void getvalue()
    {
        cout << "Enter two Values";
        cin >> x >> y;
    }
    void subtraction()
    {
        subtract = x - y;
    }
    void showanswer()
    {
        cout << "Subtraction of " << x << " and " << y << " is  " << subtract;
    }
};
int main()
{
    parent obj1;
    obj1.getdata();
    obj1.addition();
    obj1.showdata();
    child obj2;
    obj2.getdata();
    obj2.addition();
    obj2.showdata();
    obj2.getvalue();
    obj2.subtraction();
    obj2.showanswer();
    return 0;
}