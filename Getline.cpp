#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter Your Name :" << endl;
    getline(cin, name);
    cout << "Hello, " << name
         << " Welcome To My World!!\n";
    return 0;
}