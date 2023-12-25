// write a programe to print sum of first natural numbers,where n is the input
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cout << "enter n upto which you want to sum:";
    cin >> n;
    int i = 1;     // loop variable
    while (i <= n) // condition
    {
        sum = sum + i;
        i++; // updating loop variable
    }
    cout << "the sum upto " << n << " is:" << sum << endl;
    return 0;
}