#include <iostream>

using namespace std;
void sorted_square_array(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    int k = size - 1;
    int arr2[size];
    while (i <= j)
    {
        if (abs(arr[i]) > abs(arr[j]))
        {
            arr2[k] = arr[i]*arr[i];
            i++;
            k--;
        }
        else{
            arr2[k]=arr[j]*arr[j];
            j--;
            k--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr2[i]<<" ";
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
    sorted_square_array(arr, m);

    return 0;
}