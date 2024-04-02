#include <iostream>
#include <vector>

using namespace std;
int print_rectangle_sum(vector<vector<int>> &vec, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    // prefix sum array row wise
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 1; j < vec[0].size(); j++)
        {
            vec[i][j] = vec[i][j] + vec[i][j - 1];
        }
    }
    // prefix sum column wise
    for (int i = 1; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[0].size(); j++)
        {
            vec[i][j] += vec[i - 1][j];
        }
    }
    // printing prefixsum 2d array
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[0].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    int top_sum = 0, left_sum = 0, top_left_sum = 0;
    if (l1 != 0)
        top_sum = vec[l1 - 1][r2];
    if (r1 != 0)
        left_sum = vec[l2][r1 - 1];
    if (l1 != 0 && r1 != 0)
        top_left_sum = vec[l1 - 1][r1 - 1];
    sum = vec[l2][r2] - top_sum - left_sum + top_left_sum;
    return sum;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout<<endl;
    int l1, r1;
    int l2, r2;
    cin >> l1;
    cin >> r1;
    cin >> l2;
    cin >> r2;

    int sum = print_rectangle_sum(matrix, l1, r1, l2, r2);
    cout << "sum:" << sum;

    return 0;
}
