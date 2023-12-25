// to check prime or not
#include <iostream>
using namespace std;
void isprime(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        cout << "the given number is prime";
    }
    else
    {
        cout << "the given number is not prime";
    }
}

int main()
{
    int n;
    cout << "enetr n:";
    cin >> n;
    isprime(n);

    return 0;
}