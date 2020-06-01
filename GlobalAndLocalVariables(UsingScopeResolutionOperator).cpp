#include <iostream>
using namespace std;
int c = 20;
int main()
{
    int a, b, c;
    cout << "enter the value of a:" << endl;
    cin >> a;
    cout << "enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "the sum:\n"
        << c << endl;
    cout << "global c:\n" << ::c << endl;
    return 0;
}
