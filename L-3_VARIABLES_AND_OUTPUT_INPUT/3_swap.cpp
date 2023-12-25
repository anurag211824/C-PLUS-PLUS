#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int temp;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a after get reversed: "<<a<<endl;
     cout<<"b after get reversed: "<<b<<endl;
     return 0;

}