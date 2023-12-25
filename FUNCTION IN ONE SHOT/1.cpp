// write a function to print squares of first n natural numbers
#include <iostream>
#include <cmath>

using namespace std;
int square(int x)
{
    for (int i = 1; i <= x; i++)
    {
        cout << i*i<< " ";
    }
}

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    square(n);
    return 0;
}