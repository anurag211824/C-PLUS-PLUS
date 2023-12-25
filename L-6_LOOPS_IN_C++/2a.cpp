// write a program to print first multiple of 5 which is also a multiple of 7
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int product;
        product = 5 * i;
        if (product % 7 == 0)
        {
            cout << product << endl;
        }
    }
    return 0;
}