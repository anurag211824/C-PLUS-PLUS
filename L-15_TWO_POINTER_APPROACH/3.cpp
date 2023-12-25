/*
given an array of integers a move all the even integers at the begining of the array
and followed by all the odd integers.the relative order of the odd or even integers does not matter.
*/
#include <iostream>
using namespace std;

void even_odd_sort(int arr[], int size)
{
    int right = size - 1;
    int left = 0;
    while (left < right)
    {
        if (arr[left]%2!=0&& arr[right]%2==0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            right--;
            left++;
        }
        else if (arr[right] % 2 != 0)
            right--;
        else if (arr[left] % 2 == 0)
            left++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
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
    even_odd_sort(arr, n);

    return 0;
}