#include <iostream>
using namespace std;
class area
{
public:
int z;

    area(){

        z=0;
    };
    area(int m)
    {
        cout << "Area of circle" << 3.14 * m * m << endl;
    }
    area(int l, int b)
    {
        cout << "area Of rectangle " << l * b;
    }
    ~area()
    {
        cout << "Called destructor" << endl;
    }
};
int main()
{
    area obj4;
    area obj1(55);
    area obj2(25, 45);
    return 0;
}