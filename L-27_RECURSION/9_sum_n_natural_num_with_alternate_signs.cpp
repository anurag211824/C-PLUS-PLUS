#include<iostream>

using namespace std;
int sum_with_alt_sign(int num){

    //base case
    if(num<1)
    return 0;

    int sum=num;
    if(sum%2==0)
    sum=-num;
    else
    sum=num;
    return sum+sum_with_alt_sign(num-1);
}

int main(){
    int res=sum_with_alt_sign(5);
    cout<<res;

return 0;
}