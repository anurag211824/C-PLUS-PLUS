// find the second largest element of a given array
#include <iostream>

using namespace std;
int index_of_largest_element(int arr[], int size)
{
    int max =INT64_MIN;
    int maxindex;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];
    cout<<"enter the array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int IndexOfLargestElement = index_of_largest_element(arr, n);
    int LargestElement=arr[IndexOfLargestElement];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] ==LargestElement)
        {
            arr[i] = -1;
        }
    }
    int IndexOfSecondLargestElement = index_of_largest_element(arr, n);
    cout << "the second largest element is:" << arr[IndexOfSecondLargestElement];

    return 0;
}