#include <iostream>
using namespace std;
int main()
{
    float p, t, r, si;                                      //program to find out simple interest
    cout<<"Enter The principal amount:" <<endl;
    cin >> p;
    cout<<"Enter The Time(per annum):" <<endl;
    cin >> t;
    cout<<"Enter The Rate Of Interest:" <<endl;
    cin >> r;
    si = (p * r * t) / 100;
    cout << "The simple interest would be " << si << endl;
    return 0;
}