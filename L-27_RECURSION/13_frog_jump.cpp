#include <iostream>

using namespace std;

int frog_jump_recursive(int *arr,int n,int index){
    //base case
    if(index>=n-1)return 0;
    
    
    int sum1=frog_jump_recursive(arr,n,index+1)+abs(arr[index+1]-arr[index]);
    int sum2=frog_jump_recursive(arr,n,index+2)+abs(arr[index+2]-arr[index]);
    return min(sum1,sum2);
}


int main() {
  int arr[4]={10,30,40,20};
  cout<<frog_jump_recursive(arr,4,0);
  
   
    return 0;
}
