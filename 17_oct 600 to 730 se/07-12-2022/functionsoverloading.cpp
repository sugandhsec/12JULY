#include <iostream>
using namespace std;
class user
{
public:
    void task()
    {
        cout << "Without parameters" << endl;
    }
    void task(int r)
    {
        float area = 3.14 * r * r;
        cout << "area of circle=" << area << endl;
    }
    void task(int l, int b)
    {
        float area = l * b;
        cout << "area of rectangle=" << area << endl;
    }
};
int main()
{
    user obj1;
    obj1.task();
    obj1.task(6);
    obj1.task(29, 58);
    return 0;
}