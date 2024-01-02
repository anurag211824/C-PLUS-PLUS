#include <iostream>

using namespace std;
int count_digit(int n)
{
    // base case
    if (n == 0)
        return 0;

    int count = count_digit(n / 10);
    count++;
    return count;
}
int power_value(int p, int q)
{
    // base case
    if (q == 0)
        return 1;
    // if q is even
    if (q % 2 == 0)
    {
        int result = power_value(p, q / 2);
        return result * result;
    }
    // if q is odd
    else
    {
        int result = power_value(p, (q - 1) / 2);
        return p * result * result;
    }
}
int num_extractor(int n)
{
    return n % 10;
}
int armstrong(int num, int d)
{
    // base case
    if (num >= 0 && num <= 9)
        return power_value(num, d);

    int r = num_extractor(num);

   int sum=power_value(r, d) + armstrong(num / 10, d);
   return sum;
}

int main()
{
    int num;
    cout << "enter a number for armstrong check:";
    cin >> num;
    int d = count_digit(num);
    int result = armstrong(num, d);
    if (result == num)
        cout << "armstrong" << endl;
    else
        cout << " not armstrong" << endl;
    return 0;
}