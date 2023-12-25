// rotate an array by k time
#include<iostream>

using namespace std;
void reverse(int arr[],int i_idx,int f_idx){
    while(i_idx<=f_idx){
        int temp=arr[i_idx];
        arr[i_idx]=arr[f_idx];
        arr[f_idx]=temp;
        i_idx++;
        f_idx--;
    }
}

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
    int k;
    cout<<"enter the k time you want to rotate the array:";
    cin>>k;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
return 0;
}