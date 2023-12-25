#include <iostream>

using namespace std;

int main()
{
    int i;
    for (i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i == 2 || j == 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}