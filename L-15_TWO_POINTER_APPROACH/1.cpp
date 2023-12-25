// sort an array consisting of 0s and ls
#include<iostream>
using namespace std;

void sort0and1array(int arr[],int size){
    int count_0=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0)
        count_0++;
    }

    for(int i=0;i<size;i++){
        if(i<count_0){
            arr[i]=0;
            cout<<arr[i]<<" ";
        }
        else{
            arr[i]=1;
            cout<<arr[i]<<" ";
        }
        

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