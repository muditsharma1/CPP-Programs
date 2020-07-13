#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
    {
        v.push_back(i * 20);
    }
    cout << v.at(3) << endl;
    cout << "front:" << v.front() << endl;
    cout << "back:" << v.back() << endl;
    return 0;
}