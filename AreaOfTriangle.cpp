#include <iostream>
using namespace std;
int main()
{
    float length, breadth, area;
    cout << "Enter The Length Of Triangle:" << endl;
    cin >> length;
    cout << "Enter The Breadth Of Triangle:" << endl;
    cin >> breadth;
    area = (0.5) * length * breadth;
    cout << "the area of triangle will be:" << area << endl;
    return 0;
}