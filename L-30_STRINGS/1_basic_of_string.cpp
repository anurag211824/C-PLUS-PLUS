#include<bits/stdc++.h>
using namespace std;

int main(){
//commonly used inbulit functions of strings

//1.reverse()
string s1="qwerty";
reverse(s1.begin(),s1.end());
//cout<<s1<<endl;
 

//2.substr() to extract a substring from a given substring
string s2="victus omen";
cout<<s2.substr(2,5)<<endl;


//3.+operator to concatenate to strings
string s3="anurag";
string s4="kumar";
string s5=s3+s4;
//cout<<s5<<endl;
//s3+=s4;
s3=s3+s4;
//cout<<s3<<endl;


//4.strcat(); to concatenate to char array
char s6[10]="instagram";
char s7[10]=" facebook";
strcat(s6,s7);
//cout<<s6<<endl;

//5.push_back(); to put a char in last of a string;
string s8="anuarg";
char c='i';
s8.push_back(c);
//cout<<s8<<endl;

//to_string(); to convert a number into a string
int num=1001;
string s9=to_string(num);
//cout<<s9<<endl;

return 0;
}