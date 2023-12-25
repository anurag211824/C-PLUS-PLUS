// find the difference b/w the sum of elements at even indices to the sum of elements at odd indices.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    int arr[n];
    cout << "enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum_even = 0;
    int sum_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum_even = sum_even + arr[i];
        }
        else
        {
            sum_odd = sum_odd + arr[i];
        }
    }
    int diff;
    diff = sum_even - sum_odd;
    cout << "the required diff is:" << diff;
    return 0;
}