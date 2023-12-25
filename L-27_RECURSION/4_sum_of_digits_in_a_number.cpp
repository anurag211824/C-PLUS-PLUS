#include <iostream>

using namespace std;
int digit_sum(int n)
{
    //base_case
    // if (n == 0)
    //     return n;
    if(n>=0 and n<=9)
    return n;
    
    return n%10 + digit_sum(n / 10);
}

int main()
{
    int result = digit_sum(653);
    cout << result;
    return 0;
}