// c++ program to print prime factors of a number n
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    cout<<"prime factors are:";
    for (int i = 2; i <= n;)
    {
        if (n % i == 0)
        {
            cout<< i << " ";
            n = n / i;
        }
        if (n % i != 0)
        {
            i++;
        }
    }
    return 0;
}
