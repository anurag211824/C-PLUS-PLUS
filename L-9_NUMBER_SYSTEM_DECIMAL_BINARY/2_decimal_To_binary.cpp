// write a program to convert decimal number to binary number
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter a decimal number:";
    cin >> n;

    int sum = 0, remainder, p = 0;
    while (n >= 1)
    {
        remainder = n % 2;
        sum = sum * 10 + remainder;
        n /= 2;
        p++; // p will tell number of times while loop runned.
    }
    //now we reverse the sum that we get which is required binary number using p variable
    int remainder2, sum2 = 0;
    while (sum != 0 || p != 0)
    {
        remainder2 = sum % 10;
        sum2 = sum2 * 10 + remainder2;
        sum /= 10;
        p--;
    }
    cout << "the binary conversion:" << sum2;
    return 0;
}