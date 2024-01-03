#include <iostream>

using namespace std;

int frog_jump_recursive(int *arr,int n,int index){
    //base case
    if(index==n-1)return 0;
    if(index==n-2)return abs(arr[n-1]-arr[n-2]);
    
    
    int sum1=abs(arr[index+1]-arr[index])+frog_jump_recursive(arr,n,index+1);
    int sum2=abs(arr[index+2]-arr[index])+frog_jump_recursive(arr,n,index+2);
    return min(sum1,sum2);
}


int main() {
  int arr[4]={10,30,40,20};
  cout<<frog_jump_recursive(arr,4,0);
  
   
    return 0;
}
