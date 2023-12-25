#include<iostream>

using namespace std;

int main(){
int n1,n2,hcf;
cout<<"enter n1:";
cin>>n1;
cout<<"enter n2:";
cin>>n2;
if(n1>n2){
  int temp=n1;
  n1=n2;
  n2=temp;
}
for(int i=1;i<=n2;i++){
  if(n1%i==0 &&n2%i==0){
    
    hcf=i;
  }
}
cout<<"the hcf is:"<<hcf;
return 0;
}