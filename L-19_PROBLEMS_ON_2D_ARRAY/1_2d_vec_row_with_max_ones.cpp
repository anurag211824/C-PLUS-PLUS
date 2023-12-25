#include <iostream>
#include <vector>

using namespace std;
int row_with_max_ones(vector<vector<int>> boolean2d, int row, int col)
{
    int max = -1;
    int indx;
    for (int i = 0; i < row; i++)
    {
        int count = 0;
        for (int j = 0; j < col; j++)
        {
            if (boolean2d[i][j] == 1)
            {
                count++;
            }
            
        }
        if (count > max)
        {
            max = count;
            indx = i;
        }
    }
    return indx;
}

int main()
{
    int n;
    cout << "enter the number of rows:";
    cin >> n;
    int m;
    cout << "enter the number of columns";
    cin >> m;

    vector<vector<int>> boolean2d;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        boolean2d.push_back(temp);
    }
    int ans = row_with_max_ones(boolean2d, n, m);
    cout << "the row with max number of one is:" << ans;
    return 0;
    
}