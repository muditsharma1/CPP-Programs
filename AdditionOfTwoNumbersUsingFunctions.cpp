#include <iostream>

using namespace std;
int Add(int, int);

int main()
{
    int a, b, sum;
    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number:" << endl;
    cin >> b;

    sum = Add(a, b);
    cout << "The sum of both numbers is:\n"
         << sum << endl;
    return 0;
}

int Add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
