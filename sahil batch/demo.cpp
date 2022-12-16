#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter Name: ";
    // cin>>name;
    getline(cin,name);
    cout << name;
    // cout << "Hello nworld"; //<< exertion operator :: scope rersolution operator
    // int num;
    // cin >> num;
    // // cout<<a;  // >> insertion operator
    // // printf("value of a is %d",a);
    // cout << "Value of a " << num<<endl;
    return 0;
}