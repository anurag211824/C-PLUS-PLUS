// write a program to print the value if it is divisible by 3 or 5
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "enter the number:";
    cin >> num;
    if (num % 3 == 0 || num % 5 == 0)
    {
        cout << num;
    }
    else
    {
        cout << "no output";
    }
    return 0;
}