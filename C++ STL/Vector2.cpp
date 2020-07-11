#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
    {
        v.push_back(i);
    }
    for (auto j = v.begin(); j != v.end(); ++j)
    {
        cout << *j << " ";
    }
    cout << "\nSize : " << v.size() << endl;
    cout << "changing vector's size to 4" << endl;
    v.resize(4);
    cout << "Now,Size Is :" << v.size() << endl;
    for (auto j = v.begin(); j != v.end(); ++j)
    {
        cout << *j << " ";
    }
    return 0;
}