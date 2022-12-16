#include <iostream>
using namespace std;
class Alpha
{
public:
    int a; // global
    int b;
    int answer;
    Alpha() // default constructor
    {
        a = 0;
        b = 0;
        answer = 0;
    }
    void summation()
    {
        answer = a + b; // local
    }
    void showdata()
    {
        cout << "Addition =" << answer;
    }
};
int main()
{
    Alpha obj;
    obj.showdata();
    return 0;
}
/*
defualt constructor
parameterised constructor
copy constructor

*/