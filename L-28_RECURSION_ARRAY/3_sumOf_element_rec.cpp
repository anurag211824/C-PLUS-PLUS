#include <iostream>

using namespace std;
int sum_of_element_rec(int *arr, int index, int length)
{
    // base case
    if (index == length - 1)
        return arr[index];

    return arr[index] + sum_of_element_rec(arr, index + 1, length);
}

int main()
{
    int n = 6;
    int arr[n] = {6, 5, 4, 13, 2, 1};
    int ans = sum_of_element_rec(arr, 0, n);
    cout << ans;
    return 0;
}