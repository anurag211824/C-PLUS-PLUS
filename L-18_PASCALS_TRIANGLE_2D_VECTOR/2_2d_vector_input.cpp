#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> matrix;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j <col; j++)
        {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        matrix.push_back(temp);
    }
cout<<endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}