#include <iostream>
#include <vector>

using namespace std;
void sum_of_subset(int *arr, int n, int i, int sum, vector<int> &res)
{
    if (i == n)
    {
        res.push_back(sum);
        return;
    }
    sum_of_subset(arr, n, i + 1, sum + arr[i], res);
    sum_of_subset(arr, n, i + 1, sum, res);
}

int main()
{

    int arr[] = {1, 2, 3};
    int n = 3;
    vector<int> res;
    sum_of_subset(arr, n, 0, 0, res);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}