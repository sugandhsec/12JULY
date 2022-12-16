#include <iostream>
using namespace std;
class base
{
public:
    void addition()
    {
        cout << "addition of class Base";
    }
};
class derived
{
public:
    void addition()
    {
        cout << "addition of class derived";
    }
};
class haul : public derived
{
public:
    void called()
    {
        addition();
    }
};
int main()
{
    base bo;
    derived dot;
    bo.addition();
    dot.addition();
    haul.called();
    return 0;
}