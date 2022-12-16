#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int b;
    void addition();
   
    void subtraction()
    {
        cout << "Subtraction = " << a - b;
    }
};
void A::addition()
 {
        cout << "Addition = " << a + b << endl;
    }
int main()
{
    A obj1;
    A obj2;
    obj1.a = 20;
    obj1.b = 25;
    obj2.addition();
    obj2.a = 35;
    obj2.b = 47;
    obj2.subtraction();
    return 0;
}