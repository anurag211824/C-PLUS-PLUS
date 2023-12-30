#include <iostream>

using namespace std;
int power_vlaue(int p, int q)
{
    // if(q==1)
    // return p;
    if (q == 0)
        return 1;

    return p * power_vlaue(p, q - 1);
}

int main()
{
    int result = power_vlaue(2, 6);
    cout << result;
    return 0;
}