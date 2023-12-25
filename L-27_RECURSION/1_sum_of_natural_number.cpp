#include <iostream>

using namespace std;
int sum_of_natural_numbers(int n)
{
    int sum = 0;
    if (n == 1)
        return 1;

    else
    {
        sum = sum + n + sum_of_natural_numbers(n - 1);
    }
    return sum;
}

int main()
{ int a=sum_of_natural_numbers(5);
cout<<a;
    return 0;
}