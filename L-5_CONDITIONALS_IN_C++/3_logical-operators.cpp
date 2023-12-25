// write a c++ program to print the value if its is divisible by 3 and is even
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "enter num:";
    cin >> num;
    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << "given value will print:" << (num) <<endl;
    }
    else
    {
        cout << "no output";
    }

    return 0;
}