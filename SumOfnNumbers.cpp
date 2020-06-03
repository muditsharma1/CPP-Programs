#include <iostream>
using namespace std;
int main()
{
    int n, count;
    cout << "Enter any natural number n = " << endl;
    cin >> n;
    count = n * (n + 1) / 2;
    cout << "The sum of natural numbers till n:\n"
         << count;
    return 0;
}