#include <iostream>
using namespace std;
class incre
{
public:
    static int a;
    void addition()
    {

        a++;
        cout << "A= " << a;
    }
};
int incre::a = 10;
int main()
{
    incre i1, i2, i3;
    i1.addition();
    i2.addition();
    i3.addition();

    return 0;
}