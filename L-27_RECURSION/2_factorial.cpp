#include<iostream>

using namespace std;
int factorial(int n){
    if(n==1)return 1;
    int ans =n*factorial(n-1);
    return ans;
}

int main(){
    int result=factorial(5);
    cout<<result;
return 0;
}