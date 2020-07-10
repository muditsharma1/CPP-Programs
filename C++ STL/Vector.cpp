#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i + 1);
    }
    for (auto j = v.begin(); j != v.end(); ++j)
    {
        cout << *j << " ";
    }
    cout<<"\nIn Reverse Order:\n";
    for (auto j = v.rbegin(); j != v.rend(); ++j)
    {
        cout << *j << " ";
    }
    return 0;
}