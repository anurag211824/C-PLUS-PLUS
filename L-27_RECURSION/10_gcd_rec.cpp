#include <iostream>

using namespace std;
int greatest_common_divisor(int n1, int n2)
{
    if (n2 == 0)
        return n1;
    else
    {
        int a = n1 % n2;
        greatest_common_divisor(n2, a);
    }
}

int main()
{   

    cout<<greatest_common_divisor(30,24);
    return 0;
}