#include<iostream>

using namespace std;
string removeA(string &s,int index,int length){
    //base case
    if(index==length) return "";

    string curr="";
    curr+=s[index];
    return ((s[index]=='a')? "":curr)+removeA(s,index+1,length);

}

int main(){
    string s="abcax";
    int n=s.size();
    string ans=removeA(s,0,n);
    cout<<ans;
return 0;
}