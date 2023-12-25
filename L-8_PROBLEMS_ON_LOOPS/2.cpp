// write a program  to find the sum of digits in a given number
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter a number n:";
    cin >> n;
    int p=n;
    int i = 0, remainder, sum = 0;
    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n /= 10;
    }
     cout << "the sum of digits in " << p << " is " << sum;
    return 0;
}