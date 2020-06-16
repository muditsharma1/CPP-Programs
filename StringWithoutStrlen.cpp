#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    int count = 0, couunt = 0;

    cout << "Enter a string:" << endl;
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout << "Length of string is:\n"
         << count << endl;
    return 0;
}
