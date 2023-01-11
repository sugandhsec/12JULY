#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    calculation(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void addition()
    {
        int answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};
int main()
{
    calculation obj1(45, 25);
    obj1.addition();
    calculation obj2(56, 23);
    obj2.addition();
    return 0;
}