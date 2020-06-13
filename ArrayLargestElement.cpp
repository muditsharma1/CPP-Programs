#include <iostream>

using namespace std;
int main()
{
    int n[10], max;
    cout << "Enter 10 elements of the array:" << endl;
    for (int i = 0; i <= 9; i++)
    {
        cin >> n[i];
    }
    max = n[0];
    for (int i = 1; i <= 9; i++)
    {
        max = n[i] > max ? n[i] : max;
    }
    cout << "The largest element of the given array:\n"
         << max;
    return 0;
}
