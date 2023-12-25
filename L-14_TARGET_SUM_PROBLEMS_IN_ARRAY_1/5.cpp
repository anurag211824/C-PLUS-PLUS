// find the second largest element of a given array
#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];
     cout<<"enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max =INT64_MIN;
    int smax=INT64_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>smax &&arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"second largest element is:"<<smax;
return 0;
}