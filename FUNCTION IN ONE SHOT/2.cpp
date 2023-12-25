// Given radius of a circle. write a function to print area and circumference of the circle.
#include <iostream>

using namespace std;
float area(int r)
{
    return 3.14 * r * r;
}
float circumference(int r)
{
    return 2 * 3.14 * r;
}
int main()
{
    int r;
    cout << "enter the radius of circle:";
    cin >> r;
    cout << "area of circle " << area(r) << endl;
    cout << "circumference of circle " << circumference(r) << endl;
    return 0;
}