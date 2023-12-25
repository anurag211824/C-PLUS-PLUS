#include <iostream>
#include <vector>

using namespace std;
void spiralmatrix(vector<vector<int>> &matrix)
{
    int left = 0;
    int right = matrix[0].size() - 1;
    int top = 0;
    int bottom = matrix.size() - 1;

    int direction = 0;
    while (left <= right && top <= bottom)
    {
        // left to right
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                cout << matrix[top][col] << " ";
            }
            top++;
        }
        // top to bottom
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                cout << matrix[row][right] << " ";
            }
            right--;
        }

        // right to left
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << matrix[bottom][col] << " ";
            }
            bottom--;
        }
        // bottom to top
        else
        {
            for (int row = bottom; row >= top; row--)
            {
                cout << matrix[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
        // 0,1,2,3
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> vec(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }
    spiralmatrix(vec);

    return 0;
}