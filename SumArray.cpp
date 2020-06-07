// This is a programme to find the sum of all elements of an array
#include <iostream>

using namespace std;
int main()
{
    int n[10], sum = 0;
    cout << "Enter 10 elements:" << endl;
    for (int i = 0; i <= 9; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i <= 9; i++)
    {
        sum = sum + n[i];
    }
    cout << "The sum of elements of the given array:\n" << sum;
    return 0;
}