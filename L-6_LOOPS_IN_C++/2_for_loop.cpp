#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cout << "enter n upto which you want to sum:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "the sum upto " << n << " is:" << sum << endl;
    return 0;
}