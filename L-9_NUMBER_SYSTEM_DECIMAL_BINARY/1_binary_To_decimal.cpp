// write a program to convert binay numbers to decimal number
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cout<<"enter a binary number:";
    cin>>n;
    int i=0,remainder,conversion=0;
    while(n!=0){
        remainder=n%10;
        conversion=conversion+remainder*pow(2,i);
        i++;
        n/=10;
    }
    cout<<"decimal conversion is:"<<conversion;

return 0;
}