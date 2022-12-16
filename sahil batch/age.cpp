#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age <= 18)
    {
        cout << "youa are a child";
    }
    else
    {
        cout << "you are adult";
    }
    return 0;
}