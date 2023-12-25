// write a program to print alphabet diamond pattern
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter odd n:";
    cin >> n;
    // upper triangle
    for (int i = 1; i <= ((n + 1) / 2); i++)
    {
        for (int j = 1; j <= ((n+1)/2) - i; j++)
        {
            cout << " ";
        }
        char a = 'A';
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout <<a;
            a++;
        }
        cout << endl;
    }
    // lower traingle
    for (int i = 1; i <= (n / 2); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        char b = 'A';
        for (int k = (n  - (2*i)); k >= 1; k--)
        {
            cout << b;
            b++;
        }
        cout << endl;
    }

    return 0;
}