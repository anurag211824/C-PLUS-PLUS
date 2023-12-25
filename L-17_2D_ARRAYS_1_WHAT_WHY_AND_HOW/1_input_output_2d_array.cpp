#include <iostream>

using namespace std;

int main()
{
    // intialization an 2d array
    int m, n; // number of rows and column of 2d array
    cout << "enter the number of row:";
    cin >> m;
    cout << "enter the number of coulmn:";
    cin >> n;
    int arr[m][n];
    // taking input for 2d array

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing 2d array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}