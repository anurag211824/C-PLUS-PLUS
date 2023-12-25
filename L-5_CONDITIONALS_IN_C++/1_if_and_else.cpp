#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "enter a number to check odd/even:";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "the given number is even";
    }
    else
    {
        cout << "the given number is odd";
    }
    return 0;
}