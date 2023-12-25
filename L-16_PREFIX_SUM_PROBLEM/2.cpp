// partition array yes or no
#include <iostream>

using namespace std;
void partition_array(int arr[], int size)
{
    int sum1 = 0;
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        int sum2 = 0;
        for (int j = i + 1; j < size; j++)
        {
            sum2 = sum2 + arr[j];
        }
        sum1 = sum1 + arr[i];
        if (sum1 == sum2)
        {
            flag = true;
            cout << "yes partion at "<<"index "<<i;
            break;
        }
    }
    if (flag == false)
    {
        cout << "no";
    }
}

int main()
{
    int n;
    cout << "enter the size of the array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    partition_array(arr, n);

    return 0;
}