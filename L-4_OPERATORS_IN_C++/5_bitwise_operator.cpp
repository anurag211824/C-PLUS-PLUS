#include<iostream>

using namespace std;

int main(){
    int num1,a;
    cout<<"enter num1:";
    cin>>num1;
    cout<<"enter a for left/right shift:";
    cin>>a;
    cout<<"left shift:"<<(num1<<a)<<endl;
    cout<<"right shift:"<<(num1>>a)<<endl;
    int num2,num3;
    cout<<"enter num2:";
    cin>>num2;
    cout<<"enter num3:";
    cin>>num3;
    cout<<"num2 & num3:"<<(num2&num3)<<endl;
    cout<<"num2 | num3:"<<(num2|num3)<<endl;

return 0;
}