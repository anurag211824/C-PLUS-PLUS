// write a program to find the sum of the followinf series
// s=1-2+3-4+5...n
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }
    }
    cout << "the sum of series is:" << sum;
    return 0;
}