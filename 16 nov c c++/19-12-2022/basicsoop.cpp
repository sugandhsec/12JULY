#include <iostream>
using namespace std;
class calculation
{
public:       // access modifiers
    int a, b; // data members
    void getdata()
    {
        cout << "Enter 2 Value: ";
        cin >> a >> b;
    }
    void addition()
    {
        int answer = a + b; // local
        cout << "Addition =" << answer;
    }
    void justcheck()
    {
        // cout << "Addition =" << answer;
    }
};

int main()
{
    calculation obj1[10];
    for (int i = 0; i < 10; i++)
    {
        obj1[i].getdata();
        obj1[i].addition();
        obj1->justcheck();
    }

    // obj1.getdata();
    // obj1.addition();
    // // obj2.a = 55;
    // // obj2.b = 48;
    // obj2.addition();
    return 0;
}
/*
class classname{
    variables---data members
    functions---member functions----methods
};


main()
{
    classname objectname
}

*/