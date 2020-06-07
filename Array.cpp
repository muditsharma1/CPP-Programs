#include <iostream>

using namespace std;
int main()
{
    int n[10];
    cout << "Please enter 10 numbers:" << endl;
    for (int i = 0; i <= 9; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i <= 9; i++)
    {
        cout << n[i] << " ";
    }
    return 0;
}