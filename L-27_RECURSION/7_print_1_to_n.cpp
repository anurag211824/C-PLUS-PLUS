#include<iostream>

using namespace std;
void print_1_to_n(int n){
    //base case
    if(n<1)
    return;

    print_1_to_n(n-1);
    cout<<n<<" "; 
}

int main(){
    print_1_to_n(100);
return 0;
}