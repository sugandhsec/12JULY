#include <iostream>
using namespace std;
template <class t1,class t2>
class calculation
{
public:
    t1 a, b;
    calculation(t1 m, t1 n)
    {
        a = m;
        b = n;
    }
    void addition()
    {
        t1 answer = a + b;
        cout << "Addition= " << answer;
    }
};
int main()
{
    calculation<int,float> obj1(20, 30);
    obj1.addition();
    calculation<float> obj2(52.36, 89.56);
    obj2.addition();
    return 0;
}
