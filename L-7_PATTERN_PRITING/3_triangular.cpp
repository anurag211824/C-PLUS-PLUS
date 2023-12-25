#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}