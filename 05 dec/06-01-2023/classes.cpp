#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b; //data members
    void getdata() //member function
    {
        cout << "Enter value";
        cin >> a >> b;
    }
    void addition()
    {
        int answer = a + b;
        cout << "Addition= " << answer;
    }
};
int main()
{
    calculation o1, o2, o3, o4;
    o1.getdata();
    o1.addition();
    o2.getdata();
    o2.addition();
    o3.addition();
    return 0;
}
/*
in class

data member   variable
methods   member function   function


wrapping up of data member and member function together in one unit is called as encapsulation

*/