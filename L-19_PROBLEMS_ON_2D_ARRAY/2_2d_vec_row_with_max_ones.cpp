#include <iostream>
#include <vector>

using namespace std;
int maxOnes_row(vector<vector<int>>&V)
{
    int max_ones =INT64_MIN;
    int max_ones_row = -1;
    int column = V[0].size();
    for (int i = 0; i<V.size();i++)
    {
        for (int j = 0; j<V[i].size(); j++)
        {
            if (V[i][j] == 1)
            {
                int number_of_ones = column - j;
                if (number_of_ones > max_ones)
                {
                    max_ones = number_of_ones;
                    max_ones_row = i;
                }
                break;
               
            }
        }
    }
    return max_ones_row;
}
int main()
{
    int n;
    cout << "enter the number of rows:";
    cin >> n;
    int p;
    cout << "enter the number of columns:";
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
    int res = maxOnes_row(vec);
    cout<<"column with max number of rows is:"<<res;
    return 0;
}