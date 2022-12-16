#include<iostream>
using namespace std;
class base{
    public:
    void addition()
    {
        cout<<"addition of class Base";
    }
};
class derived{
    public:
    void addition()
    {
        cout<<"addition of class base";
    }
};
int main()
{
    base bo;
    derived dot;
    bo.addition();
    dot.addition();
    return 0;
}