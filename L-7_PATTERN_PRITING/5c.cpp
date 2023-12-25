#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= 6; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "2";
                }
                else
                {
                    cout << "1";
                }
            }
        }
        else{
            for (int j = 1; j <= 6; j++)
            {
                if (j % 2 != 0)
                {
                    cout << "2";
                }
                else
                {
                    cout << "1";
                }
            }
        }
        cout << endl;
    }

    return 0;
}