// partition array yes or no from a better approach
#include <iostream>

using namespace std;
bool partition_array(int arr[], int size)
{
    int total_sum=0;
    for(int i=0;i<size;i++){
        total_sum=total_sum+arr[i];
    }
    int prefixSum=0;
    for(int i=0;i<size;i++){
        prefixSum=prefixSum+arr[i];
        int suffix_sum=total_sum-prefixSum;
        if(prefixSum==suffix_sum){
            return true;
        }
    }
    return false;
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
    cout<<partition_array(arr, n);   

    return 0;
}