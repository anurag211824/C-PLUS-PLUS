#include <iostream>

using namespace std;
void count_unique_target_sum_pair(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int count=0;
    while (low <= high)
    {
        if (arr[low] + arr[high] == target)
        // we found th pair 
        {
            count++;
            low++;
            high--;
        }
        else if (arr[low] + arr[high] < target)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
   cout<< "total number of unique pair:"<<count;
}

int main()
{
    int m;
    cout << "enter the size of array:";
    cin >> m;
    cout << "enter array:";
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "enter the target sum:";
    cin >> target;
    count_unique_target_sum_pair(arr, m, target);
    return 0;
}