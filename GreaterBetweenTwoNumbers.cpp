#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers a and b respectively" << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << "a is greater than b " << endl;
    }
    else
    {
        cout << "b is greater than a " << endl;
    }
    return 0;
}