#include<iostream>

using namespace std;

int main(){
     int n, m;
    cout << "enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <=n-i; j++)
        {
            cout << "*";
        }
        cout << endl;    }
return 0;
}