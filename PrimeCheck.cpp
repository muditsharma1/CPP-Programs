#include <iostream>

using namespace std;
int main()
{
    int n, i;
    cout << "Enter a natural number = ";
    cin >> n;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i == n)
    {
        cout << "Yes this is a prime number";
    }
    else
    {
        cout << "Nay  its not a prime number";
    }
    return 0;
}
