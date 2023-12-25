#include <iostream>

using namespace std;
void target_sum(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int check = 0;
    while (low <= high)
    {
        if (arr[low] + arr[high] == target)
        // we found th pair 
        {
            check = 1;
            cout << "yes";
            break;
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
    if (check == 0)
{
    cout << "no";
}
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
    target_sum(arr, m, target);
    return 0;
}