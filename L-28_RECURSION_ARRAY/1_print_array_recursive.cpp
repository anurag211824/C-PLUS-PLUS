#include <iostream>

using namespace std;
void print_array_rec(int *arr, int index, int length)
{
    // base case
    if (index == length)
        return;

    cout << arr[index] << " ";
    print_array_rec(arr, index + 1, length);
}

int main()
{
    int n = 6;
    int arr[n] = {6, 5, 4, 3, 2, 1};
    print_array_rec(arr, 0, n);
    return 0;
}