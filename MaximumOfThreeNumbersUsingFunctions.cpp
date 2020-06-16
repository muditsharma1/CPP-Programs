#include <iostream>

using namespace std;
int Max(int, int, int);

int main()
{
    int a, b, c, M;
    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number:" << endl;
    cin >> b;
    cout << "Enter the third number:" << endl;
    cin >> c;

    M = Max(a, b, c);
    cout << "The largest of the three numbers is = " << M;
    return 0;
}

int Max(int x, int y, int z)
{
    int max;
    max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
    return max;
}
