#include <iostream>

using namespace std;
int main()
{
    int num, mul = 1, result = 0, rem, count = 0;
    cout << "Enter a natural number = ";
    cin >> num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    while (num != 0)
    {
        rem = num % 10;
        while (count != 0)
        {
            mul = mul * rem;
            count--;
        }
        result = result + mul;
        num = num / 10;
        mul = 1;
    }
    if (result == num)
    {
        cout << "Boom !! you have entered an armstrong number ";
    }
    else
    {
        cout << "Sorry !! its not an armstrong number ";
    }
    return 0;
}