#include <iostream>

using namespace std;
void merge_array(int arr1[], int arr2[], int size1, int size2)
{
    int arr3[size1 + size2];
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = size1 ,j=0; i < (size1 + size2),j<size2; i++,j++)
    {
        arr3[i] = arr2[j];
    }
    for(int i=0;i<size1+size2;i++){
        cout<<arr3[i]<<" ";
    }
}

int main()
{

    int m;
    cout << "enter the size of first array:";
    cin >> m;
    cout << "enter first array:";
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    int n;
    cout << "enter the size of second array:";
    cin >> n;
    cout << "enter second array:";
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    merge_array(arr1, arr2, m, n);
    return 0;
}