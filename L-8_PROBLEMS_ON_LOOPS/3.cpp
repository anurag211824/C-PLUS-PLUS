// write a program to revers the digits of a number
#include<iostream>

using namespace std;

int main(){
     int n;
    cout << "enter a number n:";
    cin >> n;
    int p=n;
    int i = 0, remainder, reverse = 0;
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse*10 + remainder;
        n /= 10;
    }
     cout << "the reverse of " << p << " is " << reverse;
return 0;
}