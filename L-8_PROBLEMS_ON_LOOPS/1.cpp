// count the numbers no of a digits
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter a number n:";
    cin >> n;
    int p;
    p = n;
    int i = 0;
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    cout << "the number of digits in " << p << " is " << i;
    return 0;
}