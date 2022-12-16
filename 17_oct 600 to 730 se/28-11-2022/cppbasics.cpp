#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    string name;
    cout << "Enter Name: ";
    // cin >> name;
    getline(cin, name);
    cout << "your name is " << name;
    return 0;
}
/*
class classname
{
    public:
    int a;//data member
    int b;
    void addition()//methods
    {

    }
    void subtraction()//member function
    {

    }
};
main()
{
    classname objname,objname,objname;
}
*/