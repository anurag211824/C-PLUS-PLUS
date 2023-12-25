#include <iostream>
#include <vector>

using namespace std;
int Max_num_of_1(vector<vector<int>> boolean2d, int row, int col)
{
    int max = -1;
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
        }
    }
    return max;
}

int main()
{
    int row = 3;
    int col = 4;
    vector<vector<int>> boolean2d;
    for (int i = 0; i < 3; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 4; j++)
        {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        boolean2d.push_back(temp);
    }
    int q = Max_num_of_1(boolean2d, 3, 4);
    cout << "max number of ones in a single row of 2d vector is:" << q;
    return 0;
}