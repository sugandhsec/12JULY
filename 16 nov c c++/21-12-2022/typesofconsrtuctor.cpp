/*
default constructor

parameterized constructor
copy constructor
*/
#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    calculation() // default constructor
    {
        cout << "Enter Two Nuymbers: ";
        cin >> a >> b;
        int answer = a + b;
        cout << "Addition = " << answer;
    }
    calculation(int r) // parameterised constructor
    {
        cout << "Area Of circle = " << 3.14 * r * r;
    }
    calculation(int a, int
    
    
     b) // parameterised constructor
    {
        cout << "Area Of rectangle= " << a * b;
    }
};

int main()
{
    int r, m, n;
    cout << "Enter Radius: ";
    cin >> r;
    calculation obj1(r);
    calculation obj2;
    cout << "Enter Lenghth and breadth";
    cin >> m, n;
    calculation obj3(m, n);
    return 0;
}