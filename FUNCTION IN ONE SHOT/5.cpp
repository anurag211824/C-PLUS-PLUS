// Given two number a and b, write a program to print all the prime numbers b/w them.
#include <iostream>

using namespace std;
void prime(int a, int b)
{
    for (int i = a; i < b; i++)
    {
        int c = 0;
        for (int j = 1; j < a || j < b; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int a, b;
    cout << "enter a:";
    cin >> a;
    cout << "enter b:";
    cin >> b;
    prime(a, b);
    return 0;
}