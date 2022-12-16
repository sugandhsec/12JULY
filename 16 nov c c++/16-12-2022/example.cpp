#include <iostream>
using namespace std;
int check(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
int main()
{
    int A, B, answer;
    cout << "Enter Two numbers:";
    cin >> A >> B;
    answer = check(A, B);
    cout << answer << " Is biggest";
}