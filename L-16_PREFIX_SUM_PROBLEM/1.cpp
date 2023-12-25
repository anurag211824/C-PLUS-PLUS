#include<iostream>

using namespace std;
void runningSum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
sum=sum+arr[i];
cout<<sum<<" ";
    }
}

    int main(){
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
runningSum(arr,n);
return 0;
}