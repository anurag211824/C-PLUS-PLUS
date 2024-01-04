#include<iostream>

using namespace std;
bool linear_search(int *arr,int n,int i,int x){
    //base case
    if(i==n)
    return false;

    if(arr[i]==x)
    return true;

    else
    return linear_search(arr,n,i+1,x);
}

int main(){
    int arr[]={5,4,1,8,6,-9,8,2,3,15};
    int n=10;
    bool result=linear_search(arr,10,0,5);
    if(result==true)cout<<"YES";
    else cout<<"NO";
return 0;
}