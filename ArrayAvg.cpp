#include <iostream>

using namespace std;
int main()
{
    int a[10], sum = 0;
    float avg;
    cout << "Enter 10 elements = ";
    for (int i = 0; i <= 9; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= 9; i++)
    {
        sum += a[i];
    }
    avg = (float)sum / 10;
    cout << "Average of all elements of the given array = " << avg;
    return 0;
}
