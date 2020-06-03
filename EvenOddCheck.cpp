#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number:" << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "the number you entered is even";
    }
    else
    {
        cout << "the number you entered is odd";
    }
    return 0;
}