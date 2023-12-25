#include<iostream>

using namespace std;

int main(){
    int x=20;
    int *ptrx=&x;
    double y=3.776557;
    double *ptry=&y;
    cout<<"size of x is: "<<sizeof(x)<<endl;
    cout<<"size of y is: "<<sizeof(y)<<endl;
    cout<<ptrx<<" "<<(ptrx+1)<<endl;
    cout<<ptry<<" "<<(ptry+1 )<<endl;
return 0;
}