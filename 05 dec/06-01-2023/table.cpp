#include <iostream>
using namespace std;
class table
{
public:
    int a;
    void getdata()
    {
        cout << "Enter Value: ";
        cin >> a;
    }
    void tbalecraete()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << a << " * " << i << " = " << a * i << endl;
        }
    }
};
int main()
{
    table t1, t2, t3;
    t1.getdata();
    t1.tbalecraete();
    return 0;
}