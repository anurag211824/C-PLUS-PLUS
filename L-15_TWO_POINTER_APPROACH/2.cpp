// sort an array consisting of 0s and ls from two pointer approach
#include<iostream>
using namespace std;

void sort0and1array(int arr[],int size){
    int right=size-1;
    int left=0;
    while(left<right){
        if(arr[left]==1 && arr[right]==0 ){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            right--;
            left++;
        }
       else if(arr[left]==0){
           
            left++;
        }
         else if(arr[right]==1){
            right--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort0and1array(arr,n);



return 0;
}