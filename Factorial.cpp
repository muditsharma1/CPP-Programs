#include <iostream>
using namespace std;
int main()
{
    int n, f = 1;
    cout << "Enter any natural number:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << "The value of factorial of the given number is:\n"
         << f;
    return 0;
}