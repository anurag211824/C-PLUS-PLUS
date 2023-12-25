#include <iostream>
#include <vector>

using namespace std;
int leftMostrOneRow(vector<vector<int>> &v)
{
    int leftMostOne = -1;
    int maxOneRow = -1;
    int j = v[0].size() - 1;
    // finding leftmost one in 0th row
    while (j >= 0 && v[0][j] == 1)
    {
        leftMostOne = j;
        maxOneRow = 0;
        j--;
    }
    // finding left most row in remaining rows of 2d vector
    for (int i = 1; i < v.size(); i++)
    {
        while (j >= 0 && v[i][j] == 1)
        {
            leftMostOne = j;
            j--;
            maxOneRow = i;
        }
    }
    return maxOneRow;
}

int main()
{
    int n;
    cout << "enter the number of rows:";
    cin >> n;
    int p;
    cout << "enter the number of rows:";
    cin >> p;

    vector<vector<int>> vec(n, vector<int>(p));
    cout << "enter the elements of vector:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> vec[i][j];
        }
    }
    int res = leftMostrOneRow(vec);
    cout << res;
    return 0;
}