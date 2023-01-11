#include <iostream>
using namespace std;
class student
{
public:
    int a=50, b=60;
    void addition();
    void showdata();
};
void student::addition()
{
    int answer=a+b;
    cout<<"Addition= "<<answer;
    cout << "Outside class";
}
int main()
{
    student s1;
    s1.addition();
    return 0;
}