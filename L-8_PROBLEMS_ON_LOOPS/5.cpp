// write a program to print the first n factorial numbers
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter upto which you want factorials:";
    cin >> n;
    int fact = 1;
  
    
        for (int j = 1; j <= n; j++)
        {
            fact = fact * j;
            cout<<fact<<endl;
        }
    

    return 0;
}