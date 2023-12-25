#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "enter number of rows of 2d vector:";
    cin >> n;
    cout << "enter number of rows of 2d vector:";
    cin >> m;

    vector<vector<int>> anu(n, vector<int>(m));
    cout << "enter the elements of vector:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> anu[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           
            cout << anu[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}