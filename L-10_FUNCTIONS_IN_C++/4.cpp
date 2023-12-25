#include<iostream>

using namespace std;
int add(int a=0,int b=0,int c=0){
    return a+b+c;
}

int main(){
int x,y,z;
cout<<add(2)<<endl;
cout<<add(3,4)<<endl;
cout<<add(9,4,1)<<endl;
return 0;
}