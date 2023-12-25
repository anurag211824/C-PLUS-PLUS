#include <iostream>
#include <vector>

using namespace std;
void rotate2dVector(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (i > j)
            {
                int temp = v[i][j];
                v[i][j] = v[j][i];
                v[j][i] = temp;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        int j = 0;
        int k = v[i].size() - 1;
        while (j < k)
        {
            int temp = v[i][j];
            v[i][j] = v[i][k];
            v[i][k] = temp;
            j++;
            k--;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j]<<" ";
        } cout<<endl;
    }
}

int main()
{
    int m;
    cout << "enter the number of rows:";
    cin>>m;
    int n;
    cout << "enter the number of columns:";
    cin>>n;
    vector<vector<int>> vec(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }
    cout<<"rotated matrix is"<<endl;
    rotate2dVector(vec);
    return 0;
}