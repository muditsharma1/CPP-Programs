#include <iostream>

using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3],d[3][3];
    cout << "Enter the elements of the first 3*3 matrix = ";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of the second 3*3 matrix = ";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "The sum of given two matrices is = \n";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            d[i][j] = a[i][j] + a[i][j];
        }
    }
    cout << "The subtraction of given two matrices is = \n";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
