#include <iostream>

using namespace std;
int power_value(int a, int b)
{
    int sum = 1;
    for (int i = 1; i <= b; i++)
    {
        sum = sum * a;
    }
    return sum;
}
int num_of_digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

void armstrong(int n)
{
    int temp2 = n;
    int remainder;
    long long int armstrong = 0;
    int count = num_of_digits(n);
    while (temp2 > 0)
    {
        remainder = temp2 % 10;
        armstrong = armstrong + power_value(remainder, count);
        temp2 /= 10;
    }
    if (armstrong == n)
        cout << n << " is an armstrong number";
    else
        cout << n << " is not an armstrong number";
}

int main()
{
    armstrong(1634);
    return 0;
}