#include <iostream>
#include <vector>

using namespace std;
int print_rectangle_sum(vector<vector<int>> &vec, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
       
        {
            sum = sum + vec[i][j];
            
        }
        
    }
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
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
