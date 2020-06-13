// This is a programme to find multiplication of two given matrices
#include <iostream>

using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3], sum;
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
            sum = 0;
            for (int k = 0; k <= 2; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    cout << "The multiplication of given two matrices is = \n";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
