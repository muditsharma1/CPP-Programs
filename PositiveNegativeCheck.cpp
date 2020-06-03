#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:"
         << endl;
    cin >> n;
    if (n > 0)
    {
        cout << "The given number is a positive number ";
    }
    else
    {
        if (n == 0)
        {
            cout << "The given number is zero ";
        }
        else
        {
            cout << "The given number is a negative number ";
        }
    }
    return 0;
}